----------------------------------------------------------------------------------
-- Company: Universidad Complutense
-- Engineer: Enrique Ballesteros e Iker Prado
-- 
-- Create Date:    18:27:36 10/10/2013 
-- Design Name: 
-- Module Name:    P1b - Behavioral 
-- Project Name: Practica 1
-- Target Devices: 
-- Tool versions: 
-- Description: Contador ascendente-descendente
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

entity contador is
	generic(N : integer := 4);
	port (reset, reloj, as: in std_logic;
			cuenta: out std_logic_vector(3 downto 0));
 end contador;

architecture circuito of contador is
-- Añadir las señales intermedias necesarias
signal clk: std_logic;
signal clk_100M, clk_1: std_logic; -- Relojes auxiliares
-- Descomentar para implementación
	component divisor is
	port (reset, clk_entrada: in STD_LOGIC;
	clk_salida: out STD_LOGIC);
end component;

	component adderN is
	generic(N : integer := 4);
		port (a, b : in std_logic_vector(N-1 downto 0);
				cin : in std_logic;
				sum : out std_logic_vector(N-1 downto 0);
				cout : out std_logic);
	end component;
	signal salida_sum, salida_rest, valor_contador: std_logic_vector(N-1 downto 0);
	signal perdido1, perdido2 : std_logic;
begin

-- Descomentar para implementación
	Nuevo_reloj: divisor port map (reset, clk_100M, clk_1);
	clk_100M<=reloj;
	clk<=clk_1;
-- Comentar para la implementacion
	--clk <= reloj;
	
	ascendente: adderN port map("0001", valor_contador, '0', salida_sum, perdido1);
	descente: adderN port map("1111", valor_contador, '0', salida_rest, perdido2);
	process (clk, reset, as)
	begin
		if reset = '1' then
			cuenta <= "0000";
			valor_contador <= "0000";
		elsif clk' event and clk = '1' then
			if as = '1' then		
				cuenta <= salida_sum;
				valor_contador <= salida_sum;
			else
				cuenta <= salida_rest;
				valor_contador <= salida_rest;
			end if;
		end if;
	end process;
end circuito;