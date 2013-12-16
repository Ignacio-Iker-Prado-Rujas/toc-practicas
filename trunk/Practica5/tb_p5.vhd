----------------------------------------------------------------------------------
-- Company:        Universidad Complutense de Madrid
-- Engineer:       TOC&TC
-- 
-- Create Date:    
-- Design Name:    
-- Module Name:    tb_practica5 - beh 
-- Project Name:   Practica 5
-- Target Devices: Spartan-3 
-- Tool versions:  ISE 14.1
-- Description:    Testbech para el algoritmo de la burbuja (32 palabras)
-- Dependencies: 
-- Revision: 
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;


entity tb_practica5 is

end tb_practica5;

architecture beh of tb_practica5 is
  component practica5 is
	port (
			rst: in std_logic;
			clk: in std_logic;
			inicio: in std_logic;
			direccion: in std_logic_vector(4 downto 0);
			fin: out std_logic;
			dato_debug: out std_logic_vector(3 downto 0)
		); 
  end component;

  signal clk, rst, inicio, fin: std_logic;
  signal direccion: std_logic_vector(4 downto 0);
  signal dato_debug: std_logic_vector(3  downto 0);
  
begin


  -------------------------------------------------------------------------------
  -- Component instantiation
  -------------------------------------------------------------------------------

  i_put : practica5
    port map (
			rst => rst,
			clk => clk,
			inicio => inicio,
			direccion => direccion,
			fin => fin,
			dato_debug => dato_debug
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

  -- External reset
  p_rst : process
  begin
    rst <= '1';
    wait for 100 ns;
    rst <= '0';
    wait;
  end process p_rst;

  p_burbuja : process
    variable v_dato_debug   : std_logic_vector(4 downto 0);

  begin
    inicio <= '0';
	 direccion <= (others=>'0');
    wait for 100 ns;
	 inicio <= '1';
	 segunda_comprobacion: for j in 0 to 1 loop
	 wait for 10 ns;
	 inicio <= '0';
	 wait until fin = '1';
    loop_debug : for i in 1 to 31 loop
      direccion <= std_logic_vector(to_unsigned(i, 5));
        wait until rising_edge(clk);
        v_dato_debug := std_logic_vector(to_unsigned(32-i, 5));
        assert v_dato_debug(4 downto 1) = dato_debug
          report "Error en la ordenacion"
          severity error;
    end loop loop_debug;
    wait until rising_edge(clk);
	 inicio <= '1';
	 direccion<=(others=>'0');
	 end loop segunda_comprobacion;
	 inicio <= '0';
	 wait;
  end process p_burbuja;

end beh;
