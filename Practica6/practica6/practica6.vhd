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
use IEEE.STD_LOGIC_UNSIGNED.ALL;


-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity practica6 is 
port( clk: 				in std_logic;
		read_enable: 	in std_logic;
		we:				in std_logic;
		rst:				in std_logic;
		key: 				in std_logic_vector(7 downto 0);
		key_w: 			in std_logic_vector(7 downto 0);
		error: 			out std_logic;
		data_w:			in std_logic_vector(15 downto 0);
		data_out: 		out std_logic_vector(15 downto 0)
);
end practica6;

architecture Behavioral of practica6 is

--Tipo para los arrays de keys y definicion de una se–al vector de keys, cada key es de 5 posiciones (2^5 = 32)
--type keys_type is array (0 to 31) of std_logic_vector (7 downto 0);
--signal array_keys: keys_type;
signal key_aux: std_logic_vector(7 downto 0);
--Constante: numero de keys
constant num_keys: integer:= 32;
--Señal que se conectara al ram_component -> addr
signal ram_addr: std_logic_vector(7 downto 0);
--Señal que se conectara al ram_component -> dout
signal ram_out: std_logic_vector(15 downto 0);
--Puntero que señala la posición de memoria a escribir
signal addr, addr_aux: std_logic_vector(4 downto 0) := "00000";
--
component ram_component is
port (clk: 	in std_logic;
      we: 		in std_logic;
		addr: in std_logic_vector(4 downto 0);
      dir: 	in std_logic_vector(7 downto 0);
      din:		in std_logic_vector(15 downto 0);
      dout:	out std_logic_vector(15 downto 0)
);
end component ram_component;
--	 
component key_component is
port (clk: 	in std_logic;
      we: 		in std_logic;
		addr: 	in std_logic_vector(4 downto 0);
      dir: 	in std_logic_vector(7 downto 0);
      din:		in std_logic_vector(7 downto 0);
		dout:   out std_logic_vector(7 downto 0)
);
end component key_component;

begin
--Definicion de valores para las keys
--key := X"01", X"23", X"24", X"25", X"46", X"78", X"A3", X"A5", X"B7", X"13", X"45", X"46", X"4B", X"34", X"A4", X"F1", X"90", X"77", X"E7", X"F2", X"E5", X"94", X"E0", X"EA", X"F3", X"97", X"95", X"F4", X"00", X"F5", X"0C", X"FF"

--array_keys(0) 	<= X"01";
--array_keys(1) 	<= X"23";
--array_keys(2) 	<= X"24";
--array_keys(3) 	<= X"25";
--array_keys(4) 	<= X"46";
--array_keys(5) 	<= X"78";
--array_keys(6) 	<= X"A3";
--array_keys(7) 	<= X"A5";
--array_keys(8) 	<= X"B7";
--array_keys(9) 	<= X"13";
--array_keys(10) <= X"45";
--array_keys(11) <= X"B6";
--array_keys(12) <= X"4B";
--array_keys(13) <= X"34";
--array_keys(14) <= X"A4";
--array_keys(15) <= X"F1";
--array_keys(16) <= X"90";
--array_keys(17) <= X"77";
--array_keys(18) <= X"E7";
--array_keys(19) <= X"F2";
--array_keys(20) <= X"E5";
--array_keys(21) <= X"94";
--array_keys(22) <= X"E0";
--array_keys(23) <= X"EA";
--array_keys(24) <= X"F3";
--array_keys(25) <= X"97";
--array_keys(26) <= X"95";
--array_keys(27) <= X"F4";
--array_keys(28) <= X"00";
--array_keys(29) <= X"F5";
--array_keys(30) <= X"0C";
--array_keys(31) <= X"FF";

process(clk, we, rst, addr_aux)
begin
if clk'event and clk = '1' then
	if we = '1' then
		if rst = '1' then	
			addr_aux <= (others => '0');
		else 
			addr_aux <= addr_aux + 1;
		end if;
	end if;
end if;
end process;
addr <= addr_aux;

--actualiza_keys: process(addr, key_w, we)
--begin
--if we = '1' then 
--	array_keys(conv_integer(addr)) <= key_w; 
--end if;
--end process actualiza_keys;

KEYS: key_component port map(clk, we, addr, ram_addr, key_w, key_aux);

RAM: ram_component port map(clk, we, addr, ram_addr, data_w, ram_out);

salida_CAM: process (read_enable, ram_out)
begin
if read_enable = '1' then
	data_out <= ram_out;
else 
	data_out <= (others => '0');
end if;
	
end process salida_CAM;

buscar_key: process(key, key_aux)
begin
	error <= '1';
	ram_addr <= (others => '0');
	for i in 0 to num_keys-1 loop
		if key = key_aux then
			ram_addr <= conv_std_logic_vector(i, 8);
			error <= '0';
		end if;
	end loop;
end process buscar_key;

end Behavioral;

