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
-- Description: Componente, RAM
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

entity ram_component is
    
port (clk : in std_logic;
      we : in std_logic;
		addr : in std_logic_vector(4 downto 0);
      dir : in std_logic_vector(7 downto 0);
      din : in std_logic_vector(15 downto 0);
      dout : out std_logic_vector(15 downto 0)
);

end ram_component;

architecture circuito  of ram_component is
type ram_type is array (0 to 31) of std_logic_vector (15 downto 0);

signal data : ram_type := ( X"0000", X"1110", X"2356", X"4569", X"8961", X"1235", X"A125", X"D125", 
									 X"256E", X"AA65", X"1234", X"0000", X"1235", X"AADF", X"EFDA", X"CBAA", 
									 X"A1A2", X"F0F0", X"0F0F", X"EE11", X"5566", X"4455", X"EFDC", X"AAC1", 
									 X"4569", X"8961", X"1235", X"A125", X"0000", X"1110", X"2356", X"FFFF"
);

begin

process (clk)
	begin
	  if rising_edge(clk) then
            if we = '1' then
                data(conv_integer(addr)) <= din;
            end if;
            dout <= data(conv_integer(dir));
      end if;
end process;

end circuito;


