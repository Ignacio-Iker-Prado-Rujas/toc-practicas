----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    16:53:21 11/08/2013 
-- Design Name: 
-- Module Name:    multiplicador - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
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

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity multiplicador is
	generic (N: integer := 5);
	port (a, x: in std_logic_vector(N-1 downto 0);
		p: out std_logic_vector((2*N)-1 downto 0)); 
end multiplicador;

architecture Behavioral of multiplicador is
begin

component celda is
	port(suma_i, acarreo_i, mult: in std_logic;
		acarreo_o, suma_o: out std_logic);
end component celda;

type matriz is array(0 to N) of std_logic_vector(2*N - 1 downto 0);

signal suma, acarreo, mult: matriz;

begin
contorno: process(a,x)
begin
	for j in 0 to 2*N - 2 loop
		suma(0)(j) <= '0';
		acarreo(0)(j) <= '0';
		if j < N then 
			suma(0)(j) <= a(j) and x(0);
			acarreo(j)(0) <= '0';
		end if;
	end loop;		
end process contorno;

matriz_mult: process(a,x)
begin
	Filas: for i in 0 to N-2 loop
		Columnas: for j in 0 to 2*N-2 loop
			mult(i)(j) <= '0';
			if j >= i+1 and j <= i+N then
				mult(i)(j) <= x(i+1)and a(j-i-1);
			end if;
		end loop;
	end loop;
end process matriz_mult;

	Filas: for i in 0 to N-2 generate
		Columnas: for j in 0 to 2*N-2 generate
			celdaNormal: celda port map(suma(i)(j), acarreo(i)(j), mult(i)(j), 
				acarreo(i+1)(j+1), suma(i+1)(j));
			end generate;
	end generate Filas;
	FilaUltima: for j in 0 to 2*N-3 generate
		celdaFilaUltima: celda port map(suma(N-1)(j), acarreo(N-1)(j), mult(N-1)(j), 
			mult(N-1)(j+1), p(j));
	end generate;
	celdaCasillaUltima: celda port map(suma(N-1)(2*N-2), acarreo(N-1)(2*N-2), mult(N-1)(2*N-2), 
			p(2*N-1), p(2*N-2));

end Behavioral;
