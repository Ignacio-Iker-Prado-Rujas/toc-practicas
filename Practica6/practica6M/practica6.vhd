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
-- Description: CAM (Content Addressable Memory)
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
--Para usar el conv_std_logic_vector
use IEEE.STD_LOGIC_ARITH.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity practica6 is 
port( 	clk: 			in std_logic;
		read_enable: 	in std_logic;
		key: 			in std_logic_vector(4 downto 0);
		error: 			out std_logic;
		data_in:		in std_logic_vector(15 downto 0);
		data_out: 		out std_logic_vector(15 downto 0)
);
end practica6;

architecture Behavioral of practica6 is

--Tipo para los arrays de keys y definicion de una señal vector de keys, cada key es de 5 posiciones (2^5 = 32)
type keys_type is array (7 downto 0) of std_logic_vector (4 downto 0);
signal array_keys: keys_type;
--Tipo para un RAM y definicion de una seÒal de ese tipo
--type ram_type is array (31 downto 0) of std_logic_vector (15 downto 0);

--signal RAM : ram_type := (X"12AC",X"1411",X"0FE1",X"1234",X"312B",X"BAD2",X"FE03",X"AD34",
--							X"1244",X"8425",X"5413",X"1566",X"2222",X"6123",X"1257",X"4628",
--							X"A358",X"7124",X"91AD",X"2469",X"F235",X"253A",X"261B",X"744B",
--							X"E362",X"123C",X"257D",X"D953",X"0135",X"263E",X"124A",X"F3F3"
--);
--Constante: numero de keys
constant num_keys: integer:= 8;
--Señal que se conectara al ram_component -> addr
signal ram_addr: std_logic_vector(4 downto 0);
--Señal que se conectara al ram_component -> din
--signal ram_in: std_logic_vector(15 downto 0);
--Señal que se conectara al ram_component -> dout
signal ram_out: std_logic_vector(15 downto 0);
--Estados
--type estados is (read, write);
--signal estado_actual: estados := read; 
--signal estado_siguiente: estados;
component ram_component is
    port (clk: 				in std_logic;
          write_enable: 	in std_logic;
          addr: 			in std_logic_vector(4 downto 0);
          data_in:			in std_logic_vector(15 downto 0);
          data_out:			out std_logic_vector(15 downto 0)
	);
end component ram_component;
	 
begin
--Definicion de valores para las keys
array_keys(0) 	<= "00000";
array_keys(1) 	<= "11001";
array_keys(2) 	<= "01010";
array_keys(3) 	<= "10101";
array_keys(4) 	<= "10011";
array_keys(5) 	<= "01010";
array_keys(6) 	<= "00011";
array_keys(7) 	<= "11111";
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

--reloj: process(clk, read_enable)

--begin
	
--if clk'event and clk = '1' then
--	if read_enable = '1' then
			
--		data_out <= RAM(conv_integer(unsigned(address)));
--	else 
--		data_out <= (others => '0');
--	end if;
	
--end if;

--end process reloj;

--Port map de la RAM
RAM: ram_component port map(clk, not(read_enable), ram_addr, data_in, ram_out);

--Process que actualiza estado_actual
--reloj: process(clk)
--begin
--if clk'event and clk='1' then
--	estado_actual <= estado_siguiente;
--end if;
--end process reloj;

--Process que actualiza estado_siguiente
--estados: process(read_enable)
--begin
--if read_enable = '0' then 
--	estado_siguiente <= write;
--else
--	estado_siguiente <= read;	
--end if;
--end process estados;

--Process que actualiza la salida de la CAM
salida_CAM: process (read_enable, ram_out)
begin
if read_enable = '1' then
			
	data_out <= ram_out;
elsif read_enable = '0' then 
	data_out <= data_in;
else 
	data_out <= (others => '0');
end if;
end process salida_CAM;

--Process que se encarga de la key
read_write: process(key, array_keys)
begin
	error <= '1';
	ram_addr <= (others => '0');
	for i in 0 to num_keys-1 loop
		if key = array_keys(i) then
			ram_addr <= conv_std_logic_vector(i, 5);
			error <= '0';
		end if;
	end loop;
end process read_write;

end Behavioral;
