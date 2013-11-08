--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   19:20:33 11/08/2013
-- Design Name:   
-- Module Name:   C:/hlocal/toc/Practica3/Pr3/test1.vhd
-- Project Name:  Pr3
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: multiplicador
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
 
ENTITY test1 IS
END test1;
 
ARCHITECTURE behavior OF test1 IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT multiplicador
    PORT(
         a : IN  std_logic_vector(4 downto 0);
         x : IN  std_logic_vector(4 downto 0);
         p : OUT  std_logic_vector(9 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal a : std_logic_vector(4 downto 0) := (others => '0');
   signal x : std_logic_vector(4 downto 0) := (others => '0');

 	--Outputs
   signal p : std_logic_vector(9 downto 0);
   -- No clocks detected in port list. Replace clock below with 
   -- appropriate port name 
 
   constant clock_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: multiplicador PORT MAP (
          a => a,
          x => x,
          p => p
        );

 

   -- Stimulus process
   stim_proc: process
   begin		
      a <= "10101";
		x <= "11011";
      wait for 100 ns;	
		a <= "11101";
		x <= "11010";
		wait for 100 ns;
		a <= "10101";
		x <= "01011";
      wait;
   end process;

END;
