----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    12:04:49 12/02/2013 
-- Design Name: 
-- Module Name:    mem - Behavioral 
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
library ieee;
use ieee.std_logic_1164.all;
use ieee.std_logic_unsigned.all;


entity Mem is
    port (clk : in std_logic;
	       we1 : in std_logic;
			 we2 : in std_logic;
          addr1 : in std_logic_vector(4 downto 0);
          addr2 : in std_logic_vector(4 downto 0);
          di1 : in std_logic_vector(3 downto 0);
			 di2 : in std_logic_vector(3 downto 0);
          do1 : out std_logic_vector(3 downto 0);
          do2 : out std_logic_vector(3 downto 0));
end Mem;

architecture syn of Mem is

    type ram_type is array (31 downto 0) of std_logic_vector (3 downto 0);
    shared variable RAM : ram_type:= (X"C",X"1",X"0",X"1",X"3",X"2",X"3",X"4",X"4",X"5",X"5",X"6",X"2",
	 X"6",X"7",X"8",X"8",X"7",X"9",X"9",X"F",X"A",X"B",X"B",X"E",X"C",X"D",X"D",X"0",X"E",X"A",X"F");

begin

    puerto1: process (clk)
    begin
        if (clk'event and clk='1') then
            if we1 = '1' then
                RAM(conv_integer(addr1)) := di1;
            end if;
            do1 <= RAM(conv_integer(addr1));
			end if;
   end process puerto1;
	
	puerto2: process (clk)
	begin 	
		if (clk'event and clk='1') then
            if we2 = '1' then
                RAM(conv_integer(addr2)) := di2;
            end if;
            do2 <= RAM(conv_integer(addr2));
        end if;
    end process puerto2;


end syn;