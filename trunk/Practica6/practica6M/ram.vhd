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
-- Description: Componente, RAM con write enable (FLANCO DE BAJADA)
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

entity ram is
    port (clk : in std_logic;
          we : in std_logic;
          addr : in std_logic_vector(4 downto 0);
          din : in std_logic_vector(15 downto 0);
          dout : out std_logic_vector(15 downto 0)
	);
end ram;

architecture circuito  of ram is
    type ram_type is array (0 to 31) of std_logic_vector (15 downto 0);
    signal RAM : ram_type:=(	X"12AC",X"1411",X"0FE1",X"1234",X"312B",X"BAD2",X"FE03",X"AD34",
							X"1244",X"8425",X"5413",X"1566",X"2222",X"6123",X"1257",X"4628",
							X"A358",X"7124",X"91AD",X"2469",X"F235",X"253A",X"261B",X"744B",
							X"E362",X"123C",X"257D",X"D953",X"0135",X"263E",X"124A",X"F3F3");
begin

	process (clk)
	begin
	  if falling_edge(clk) then
            if we = '1' then
                RAM(conv_integer(addr)) <= din;
            end if;
            dout <= RAM(conv_integer(addr));
        end if;
    end process puerto;
end circuito;


