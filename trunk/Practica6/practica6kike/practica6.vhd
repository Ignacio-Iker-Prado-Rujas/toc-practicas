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
			fin: out std_logic;
			data_out: out std_logic_vector(15 downto 0)
			); 
	end practica6;

architecture Behavioral of practica6 is

	component ram is
    port (clk : in std_logic;
          addr : in std_logic_vector(4 downto 0);
          do : out std_logic_vector(15 downto 0)
	);
	end component ram;
	
	signal dir: std_logic_vector(4 downto 0);
	
	type key_array is array (31 downto 0) of std_logic_vector (4 downto 0);
   signal keys : key_array;
begin
	
	data_ram: ram port map(clk, dir, data_out);
	process (read_enable)
	begin

  end process;
end Behavioral;

