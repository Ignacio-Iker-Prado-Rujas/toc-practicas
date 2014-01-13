----------------------------------------------------------------------------------
-- Company:        Universidad Complutense de Madrid
-- Engineer:       TOC&TC
-- 
-- Create Date:    
-- Design Name:    
-- Module Name:    tb_practica6 - beh 
-- Project Name:   Practica 5
-- Target Devices: Spartan-3 
-- Tool versions:  ISE 14.1
-- Description:   	Testbech para la primera modificación de la práctica 6
--							añadir una key de 8 bits	
-- Dependencies: 
-- Revision: 
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;


entity tb_practica6_1 is

end tb_practica6_1;

architecture beh of tb_practica6_1 is
  
  component practica6 is
	port (
			clk: in std_logic;
			read_enable: in std_logic;
			key: in std_logic_vector(7 downto 0);
			error: out std_logic;
			data_out: out std_logic_vector(15 downto 0)
		); 
 end component;
  type t_key is array (0 to 31) of std_logic_vector(7  downto 0);
  type t_data is array (0 to 31) of std_logic_vector(15  downto 0);
  signal clk, read_enable, fallo: std_logic;
  signal key: std_logic_vector(7 downto 0);
  signal data_out: std_logic_vector(15 downto 0);
  signal data_debug: std_logic_vector(15 downto 0);
  signal data: t_data := (X"0000", X"1234", X"A125", X"8961", X"2356", X"1110", X"4569", X"1235", X"D125", X"256E", X"AA65", X"0000", X"1235", X"AADF", X"EFDA", X"CBAA", 
										X"A1A2", X"F0F0", X"0F0F", X"EE11", X"5566", X"4455", X"EFDC", X"AAC1", X"4569", X"8961", X"1235", X"A125", X"0000", X"1110", X"2356", X"FFFF");
  signal key_debug: t_key := (X"01", X"45", X"A3", X"46", X"24", X"23", X"25", X"78", X"A5", X"B7", X"13", X"B6", X"4B", X"34", X"A4", X"F1", X"90", X"77", X"E7", X"F2", 
										X"E5", X"94", X"E0", X"EA", X"F3", X"97", X"95", X"F4", X"00", X"F5", X"0C", X"FF");
  
begin


  -------------------------------------------------------------------------------
  -- Component instantiation
  -------------------------------------------------------------------------------

  i_put : practica6 port map 
		(
			clk => clk,
			read_enable => read_enable,
			key => key,
			error => fallo,
			data_out => data_out
		); 


  -----------------------------------------------------------------------------
  -- Process declaration
  -----------------------------------------------------------------------------
  -- Input clock
  p_clk : process
  begin
    clk <= '0', '1' after 5 ns;
    wait for 10 ns;
  end process p_clk;

  p_cam : process
    variable v_data   : std_logic_vector(15 downto 0);

  begin
    read_enable <= '0';
	 key <= key_debug(0);
    wait for 100 ns;
	 read_enable <= '1';
	 loop_debug : for i in 0 to 31 loop
			key <= key_debug(i);
			wait until rising_edge(clk);
			data_debug <= data(i);
			assert data_debug = data_out
         report "Error en la ordenacion"
         severity error;
		  
    end loop loop_debug;
    wait;
  end process p_cam;

end beh;
