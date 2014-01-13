----------------------------------------------------------------------------------
-- Company: Universidad Complutense
-- Engineer: Iker Prado
-- 
-- Create Date:    15:05:05 01/03/2014 
-- Design Name: 
-- Module Name:    practica6 - Behavioral 
-- Project Name: Practica 6
-- Target Devices: 
-- Tool versions: 
-- Description: Componente, Keys
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
use ieee.std_logic_unsigned.all;
use ieee.std_logic_arith.all;

entity key_component is
    
port (clk : in std_logic;
      we : in std_logic;
		addr : in std_logic_vector(4 downto 0);
      dir : in std_logic_vector(7 downto 0);
      din : in std_logic_vector(7 downto 0);
		dout: out std_logic_vector(7 downto 0)
);

end key_component;

architecture circuito  of key_component is

--Tipo para los arrays de keys y definicion de una se-al vector de keys, cada key es de 5 posiciones (2^5 = 32)
type keys_type is array (0 to 31) of std_logic_vector (7 downto 0);
signal array_keys: keys_type:=( X"01", X"23", X"24", X"25", X"46", X"78", X"A3", X"A5", X"B7", X"13", X"45", X"46", X"4B", X"34", X"A4", X"F1", X"90", X"77", X"E7", X"F2", X"E5", X"94", X"E0", X"EA", X"F3", X"97", X"95", X"F4", X"00", X"F5", X"0C", X"FF");

begin

process (clk)
	begin
	  if rising_edge(clk) then
            if we = '1' then
                array_keys(conv_integer(addr)) <= din;
            end if;
      end if;
		dout <= array_keys(conv_integer(dir));
end process;

end circuito;

