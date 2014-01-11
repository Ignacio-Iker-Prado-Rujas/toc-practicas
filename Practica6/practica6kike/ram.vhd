----------------------------------------------------------------------------------
-- Company: Universidad Complutense de Madrid
-- Engineer: Marcos Sanchez-Elez y Enrique Ballesteros Horcajo
-- 
-- Create Date:    15:52:19 12/04/2013 
-- Module Name:    rams - circuito 
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

entity ram is
    port (clk : in std_logic;
          addr : in std_logic_vector(4 downto 0);
          do : out std_logic_vector(15 downto 0)
	);
end ram;

architecture circuito  of ram is
    type ram_type is array (0 to 31) of std_logic_vector (15 downto 0);
    signal RAM : ram_type:=(	X"CA54",X"1654",X"0123",X"F875",X"3864",X"8752",X"4563",
										X"4875",X"6454",X"8755",X"5147",X"6CB8",X"25AB",X"A9C7",
										X"6254",X"0321",X"8954",X"7654",X"9215",X"9AF6",X"FADB",
										X"0FAA",X"A56B",X"BFD5",X"A67E",X"CA21",X"D654",X"45DA",
										X"8A64",X"E254",X"A984",X"A6DF");
begin

	process (clk)
	begin
	  if rising_edge(clk) then
			do <= RAM(conv_integer(addr));
	  end if;
	end process;

end circuito;


