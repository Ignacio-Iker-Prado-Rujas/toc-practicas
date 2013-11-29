--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   19:16:20 11/29/2013
-- Design Name:   
-- Module Name:   C:/hlocal/toc-practicas/Practica4/prueba1.vhd
-- Project Name:  Practica4
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: maquina_divisor
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY prueba1 IS
END prueba1;
 
ARCHITECTURE behavior OF prueba1 IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT maquina_divisor
    PORT(
         clock : IN  std_logic;
         reset : IN  std_logic;
         divisor : IN  std_logic_vector(2 downto 0);
         dividendo : IN  std_logic_vector(5 downto 0);
         inicio : IN  std_logic;
         ready : OUT  std_logic;
         cociente : OUT  std_logic_vector(5 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clock : std_logic := '0';
   signal reset : std_logic := '0';
   signal divisor : std_logic_vector(2 downto 0) := (others => '0');
   signal dividendo : std_logic_vector(5 downto 0) := (others => '0');
   signal inicio : std_logic := '0';

 	--Outputs
   signal ready : std_logic;
   signal cociente : std_logic_vector(5 downto 0);

   -- Clock period definitions
   constant clock_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: maquina_divisor PORT MAP (
          clock => clock,
          reset => reset,
          divisor => divisor,
          dividendo => dividendo,
          inicio => inicio,
          ready => ready,
          cociente => cociente
        );

   -- Clock process definitions
   clock_process :process
   begin
		clock <= '0';
		wait for clock_period/2;
		clock <= '1';
		wait for clock_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	
		
		dividendo <= "101101";
		divisor <= "101";
		
      wait for clock_period*10;
		
		inicio <= '1';
		
		wait for 100 ns;

      -- insert stimulus here 

      wait;
   end process;

END;
