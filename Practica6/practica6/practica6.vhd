----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    15:05:05 01/05/2014 
-- Design Name: 
-- Module Name:    practica6 - Behavioral 
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

entity practica6 is 
port( clk: in std_logic;
		read_enable: in std_logic;
		key: in std_logic_vector(4 downto 0);
		error: out std_logic;
		data_out: out std_logic_vector(15 downto 0)
		); 
end practica6;

architecture Behavioral of practica6 is

--Tipo para los arrays de keys y definicion de una señal vector de keys
type keys_type is array (31 downto 0) of std_logic_vector (4 downto 0);
signal array_keys: keys_type;
--Tipo para un RAM y definicion de una señal de ese tipo
type ram_type is array (31 downto 0) of std_logic_vector (15 downto 0);
signal RAM : ram_type := ( X"12AC",X"1411",X"0FE1",X"1234",X"312B",X"BAD2",X"FE03",X"AD34",
									X"1244",X"8425",X"5413",X"1566",X"2222",X"6123",X"1257",X"4628",
									X"A358",X"7124",X"91AD",X"2469",X"F235",X"253A",X"261B",X"744B",
									X"E362",X"123C",X"257D",X"D953",X"0135",X"263E",X"124A",X"F3F3"
									);
--numero de keys
	 
begin
--Definicion de valores para las keys
array_keys(0) 	<= "00000";
array_keys(1) 	<= "11001";
array_keys(2) 	<= "01010";
array_keys(3) 	<= "10101";
array_keys(4) 	<= "11111";
--array_keys(5) 	<= "00000";
--array_keys(6) 	<= "00000";
--array_keys(7) 	<= "00000";
--array_keys(8) 	<= "00000";
--array_keys(9) 	<= "00000";
--array_keys(10) <= "00000";
--array_keys(11) <= "00000";
--array_keys(12) <= "00000";
--array_keys(13) <= "00000";
--array_keys(14) <= "00000";
--array_keys(15) <= "00000";
--array_keys(16) <= "00000";
--array_keys(17) <= "00000";
--array_keys(18) <= "00000";
--array_keys(19) <= "00000";
--array_keys(20) <= "00000";
--array_keys(21) <= "00000";
--array_keys(22) <= "00000";
--array_keys(23) <= "00000";
--array_keys(24) <= "00000";
--array_keys(25) <= "00000";
--array_keys(26) <= "00000";
--array_keys(27) <= "00000";
--array_keys(28) <= "00000";
--array_keys(29) <= "00000";
--array_keys(30) <= "00000";
--array_keys(31) <= "00000";

--process hola (read_enable, clk)
-- error <= '1';
--	for(int i = 0; i < num_keys; i++)
--		if (key == array_keys[i] && read_enable == 1)
--		 	data_out <= ram(array_keys(i));
--			error <= '0';
--end process hola;

end Behavioral;

