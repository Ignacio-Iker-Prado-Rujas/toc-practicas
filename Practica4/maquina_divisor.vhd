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
	port (clk, reset: in std_logic;
			divisor: in std_logic_vector(7 downto 0);
			dividendo: in std_logic_vector(15 downto 0);
			inicio: in std_logic;
			ready: out std_logic;
			cociente: out std_logic_vector(15 downto 0));
end maquina_divisor;


architecture Behavioral of maquina_divisor is

	type estado is(estado_inicial, estado2, estado3, estado4, estado5, estado6);

	signal estado_actual, estado_siguiente: estado;

	signal rdnd, rdnd_aux, rdsor, rdsor_aux: std_logic_vector(16 downto 0);
	
	signal rc, rc_aux: std_logic_vector(15 downto 0);

	signal rk, rk_aux: std_logic_vector(3 downto 0);

begin

reloj: process(clk)
begin
	
	if reset = '1' then
		estado_actual <= estado_inicial;
	elsif clk'event and clk = '1' then
		estado_actual <= estado_siguiente;
		rdnd <= rdnd_aux;
		rdsor <= rdsor_aux;
		rc <= rc_aux;
		rk <= rk_aux;
	end if;
	
end process reloj;


divide: process(estado_actual, inicio, rdnd, rdsor, rc, rk)
begin
	
	ready <= '0';
	rdnd_aux <= rdnd;
	rdsor_aux <= rdsor;
	rc_aux <= rc;
	rk_aux <= rk;
	
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
			rdsor_aux <= '0' & divisor & conv_std_logic_vector(0, 8);
			rc_aux <= (others => '0');
			rk_aux <= (others => '0');
			estado_siguiente <= estado3;
			
		when estado3 =>
			rdnd_aux <= rdnd - rdsor;
			estado_siguiente <= estado4;
		
		when estado4 =>
			rk_aux <= rk + 1;
			estado_siguiente <= estado5;
		
		when estado5 =>
			if rdnd(16) = '1' then
				rc_aux <= rc(14 downto 0) & '0';
				rdnd_aux <= rdnd + rdsor;
			elsif rdnd(16) = '0' then
				rc_aux <= rc(14 downto 0) & '1';
			else 
				estado_siguiente <= estado5;
			end if;
			
			estado_siguiente <= estado6;
		
		when estado6 =>
			rdsor_aux <= '0' & rdsor(16 downto 1);
			if rk < 9 then
				estado_siguiente <= estado3;
			else 
				estado_siguiente <= estado_inicial;
			end if;
	
	end case; 

end process divide;

cociente <= rc;

end Behavioral;
