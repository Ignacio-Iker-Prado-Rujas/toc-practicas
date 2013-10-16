----------------------------------------------------------------------------------
-- Company: Universidad Complutense
-- Engineer: Enrique Ballesteros e Iker Prado
-- 
-- Create Date:    19:58:58 10/10/2013 
-- Design Name: 
-- Module Name:    adder - Behavioral 
-- Project Name: Practica 1
-- Target Devices: 
-- Tool versions: 
-- Description: Sumador de 1 bit con carry de entrada y de salida
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

entity adder is
    port (a, b, cin   : in std_logic;
	        sum, cout  : out std_logic);
end adder;

architecture circuito of adder is
begin
    sum <= (a xor b) xor cin;
    cout <= (a and b) or (cin and a) or (cin and b);
end circuito;

