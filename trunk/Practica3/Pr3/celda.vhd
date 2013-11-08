----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    16:55:54 11/08/2013 
-- Design Name: 
-- Module Name:    celda - Behavioral 
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

entity celda is
	port(suma_i, acarreo_i, mult: in std_logic;
		acarreo_o, suma_o: out std_logic);
end celda; 

architecture circuito of celda is
	begin
	suma_o <= (suma_i xor acarreo_i) xor mult;
	acarreo_o <= (suma_i and mult) or (acarreo_i and suma_i) or (acarreo_i and mult);
end circuito;

