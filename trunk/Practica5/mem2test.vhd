----------------------------------------------------------------------------------
-- Company: Universidad Complutense de Madrid
-- Engineer: Marcos Sanchez-Elez
-- 
-- Create Date:    15:52:19 12/04/2013 
-- Module Name:    rams_2p - circuito 
-- Target Devices:	Spartan 3 
-- Tool versions: 
-- Description: 
--	Memoria síncrona de doble puerto de lectura y un único puerto de escritura
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

entity rams_2p is
    port (clk : in std_logic;
          we : in std_logic;
          addr1 : in std_logic_vector(4 downto 0);
          addr2 : in std_logic_vector(4 downto 0);
          di : in std_logic_vector(3 downto 0);
          do1 : out std_logic_vector(3 downto 0);
          do2 : out std_logic_vector(3 downto 0)
	);
end rams_2p;

architecture circuito  of rams_2p is
    type ram_type is array (31 downto 0) of std_logic_vector (3 downto 0);
    signal RAM : ram_type:=(X"C",X"1",X"0",X"F",X"3",X"2",X"3",X"4",X"4",X"5",X"5",X"6",X"2",X"7",X"6",X"0",X"8",X"7",X"9",X"9",X"F",X"A",X"B",X"B",X"E",X"C",X"D",X"D",X"8",X"E",X"A",X"1");
begin

    puerto1: process (clk)
    begin
        if rising_edge(clk) then
            if we = '1' then
                RAM(conv_integer(addr1)) <= di;
            end if;
            do1 <= RAM(conv_integer(addr1));
        end if;
    end process puerto1;

    puerto2: process (clk)
    begin
        if rising_edge(clk) then
            do2 <= RAM(conv_integer(addr2));
        end if;
    end process puerto2;
end circuito;


