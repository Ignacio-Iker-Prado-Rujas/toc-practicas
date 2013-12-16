----------------------------------------------------------------------------------
-- Company: Universidad Complutense de Madrid
-- Engineer: Enrique Ballesteros e Iker Prado
-- 
-- Create Date:    16:50:43 12/13/2013 
-- Design Name: 
-- Module Name:    practica5 - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: Ordenaci—n mediante burbuja
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
--use IEEE.std_logic_arith.ALL;
use IEEE.std_logic_unsigned.ALL;


-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
	use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity practica5 is
	generic (N: integer := 32);
	port (rst: in std_logic;
			clk: in std_logic;
			inicio: in std_logic;
			fin: out std_logic;
			direccion: in std_logic_vector(4 downto 0);
			dato_debug: out std_logic_vector(3 downto 0)
);
end practica5;

architecture Behavioral of practica5 is

component Mem is
	port (clk : in std_logic;
			we1 : in std_logic;
			we2 : in std_logic;
			addr1 : in std_logic_vector(4 downto 0);
			addr2 : in std_logic_vector(4 downto 0);
			di1 : in std_logic_vector(3 downto 0);
			di2 : in std_logic_vector(3 downto 0);
			do1 : out std_logic_vector(3 downto 0);
			do2 : out std_logic_vector(3 downto 0)
);
end component Mem;

type estado is(estado_inicial, bucle_i, bucle_j, swap);

signal i, j, aux_i, aux_j: std_logic_vector(4 downto 0);
signal wenable1, wenable2: std_logic;
signal addr1, addr2: std_logic_vector(4 downto 0);
signal din1, din2, dout1, dout2: std_logic_vector(3 downto 0);
signal estado_actual, estado_siguiente: estado;


begin
memoria: Mem port map (clk, wenable1, wenable2, addr1, addr2, din1, din2, dout1, dout2); 

reloj: process(clk)
begin
	
	if rst = '1' then
		estado_actual <= estado_inicial;
	elsif clk'event and clk = '1' then
		estado_actual <= estado_siguiente;
		i <= aux_i;
		j <= aux_j;
	end if;
	
end process reloj;

burbuja: process(estado_actual, inicio, direccion, dout1, dout2, i, j)
begin
	dato_debug <= dout1;
	aux_i <= i;
	aux_j <= j;
	wenable1 <= '0';
	wenable2 <= '0';
	fin <= '0';
	din1 <= "0000";
	din2 <= "0000";
	
	case estado_actual is
	
		when estado_inicial => 
			fin <= '1';
			addr1 <= direccion;
			addr2 <= "00000";
			aux_i <= "00000";
			if inicio = '1' then
				estado_siguiente <= bucle_i;		
			else 
				estado_siguiente <= estado_inicial;
			end if;			
			
		when bucle_i => 
			aux_j <= "00000";
			aux_i <= i+1;
			addr1 <= direccion;	
			addr2 <= "00000";
			if i < N-1 then 							
				estado_siguiente <= bucle_j;						
			else 		
				estado_siguiente <= estado_inicial;
			end if;
				
		when bucle_j =>
			aux_j <= j+1;
			addr1 <= j;
			addr2 <= j + 1;
			if j < N-1 then 
				estado_siguiente <= swap;			
			else 
				estado_siguiente <= bucle_i;	
			end if;
				
		when swap	=>
			-- Solo cambiamos si el número es menor que el siguiente
			if dout1 < dout2 then
				addr1 <= j-1;
				din1 <= dout2;
				wenable1 <= '1';
				
				addr2 <= j;
				din2 <= dout1;
				wenable2 <= '1';	
				estado_siguiente <= bucle_j;
			elsif dout1 = dout2 then
				din1 <= "0000";
				addr1 <= j;
				wenable1 <= '1';
				estado_siguiente <= bucle_j;
				addr2 <= "00000";
			else 
				addr1 <= "00000";
				addr2 <= "00000";	
				estado_siguiente <= bucle_j;				
			end if; 
		
	end case;

end process burbuja;

end Behavioral;

