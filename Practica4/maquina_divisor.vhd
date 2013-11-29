----------------------------------------------------------------------------------
-- Company: 
-- Engineer: Enrique Ballesteros e Iker Prado 
-- 
-- Create Date:    17:18:43 11/29/2013 
-- Design Name: 
-- Module Name:    divisor - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: Divisor de enteros
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.std_logic_arith.ALL;
use IEEE.std_logic_unsigned.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity maquina_divisor is
	generic (N: integer := 6; -- Numero de cifras del dividendo
				M: integer := 3); -- Numero de cifras del divisor
	port (clock, reset: in std_logic;
			divisor: in std_logic_vector(M-1 downto 0);
			dividendo: in std_logic_vector(N-1 downto 0);
			inicio: in std_logic;
			ready: out std_logic;
			cociente: out std_logic_vector(N-1 downto 0));
end maquina_divisor;


architecture Behavioral of maquina_divisor is

	type estado is(estado_inicial, estado2, estado3, estado4, estado5, estado6, estado7, estado8);

	signal estado_actual, estado_siguiente: estado;

	signal rdnd, rdnd_aux, rdsor, rdsor_aux: std_logic_vector(N downto 0);
	
	signal rc, rc_aux: std_logic_vector(N-1 downto 0);

	signal rk, rk_aux: std_logic_vector(N-M-1 downto 0);

begin

reloj: process(clock)
begin
	
	if reset = '1' then
		estado_actual <= estado_inicial;
	elsif clock'event and clock = '1' then
		estado_actual <= estado_siguiente;
		rdnd <= rdnd_aux;
		rdsor <= rdsor_aux;
		rc <= rc_aux;
		rk <= rk_aux;
	end if;
	
end process reloj;


divide: process(estado_actual, inicio, rdnd, rdsor, rc, rk)
begin

	case estado_actual is
	
		when estado_inicial => 
			ready <= '1';
			if inicio = '0' then
				estado_siguiente <= estado_inicial;
			elsif inicio = '1' then 
				estado_siguiente <= estado2;
			else 
				estado_siguiente <= estado_actual;
			end if;
		
		when estado2 =>
			rdnd_aux <= '0' & dividendo;
			rdsor_aux <= '0' & divisor & conv_std_logic_vector(0, N-M);
			rc_aux <= (others => '0');
			rk_aux <= (others => '0');
			ready <= '0';
			estado_siguiente <= estado3;
			
		when estado3 =>
			rdnd_aux <= rdnd - rdsor;
			ready <= '0';
			estado_siguiente <= estado4;
		
		when estado4 =>
			ready <= '0';
			if rdnd(N) = '1' then
				estado_siguiente <= estado5;
			elsif rdnd(N) = '0' then
				estado_siguiente <= estado6;
			else 
				estado_siguiente <= estado4;
			end if;
		
		when estado5 =>
			ready <= '0';
			rc_aux <= rc(N-2 downto 0) & '0';
			rdnd_aux <= rdnd + rdsor;
			estado_siguiente <= estado7;

		when estado6 =>
			ready <= '0';
			rc_aux <= rc(N-2 downto 0) & '1';
			estado_siguiente <= estado7;
		
		when estado7 =>
			ready <= '0';
			rdsor_aux <= '0' & rdsor(N downto 1);
			rk_aux <= rk + 1;
			estado_siguiente <= estado8;
		
		when estado8 =>
			ready <= '0';
			if rk < N-M+1 then
				estado_siguiente <= estado3;
			else 
				estado_siguiente <= estado_inicial;
			end if;
	
	end case; 

end process divide;

cociente <= rc;

end Behavioral;
