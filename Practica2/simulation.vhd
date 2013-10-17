--------------------------------------------------------------------------------
-- Company: Universidad Complutense
-- Engineer: Enrique Ballesteros e Iker Prado
--
-- Create Date:   13:08:06 10/17/2013
-- Design Name:   
-- Module Name:   C:/hlocal/Pr2/simulation.vhd
-- Project Name:  Pr2
-- Target Device:  
-- Tool versions:  
-- Description:  Simulacion para la munyeca
-- 
-- VHDL Test Bench Created by ISE for module: munyeca
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
 
ENTITY simulation IS
END simulation;
 
ARCHITECTURE behavior OF simulation IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT munyeca
    PORT(
         reloj : IN  std_logic;
         rst : IN  std_logic;
         R : IN  std_logic;
         C : IN  std_logic;
         G : OUT  std_logic;
         L : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal reloj : std_logic := '0';
   signal rst : std_logic := '0';
   signal R : std_logic := '0';
   signal C : std_logic := '0';

 	--Outputs
   signal G : std_logic;
   signal L : std_logic;
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
   constant reloj_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: munyeca PORT MAP (
          reloj => reloj,
          rst => rst,
          R => R,
          C => C,
          G => G,
          L => L
        );

   -- Clock process definitions
	reloj_process :process
   begin
		reloj <= '0';
		wait for reloj_period/2;
		reloj <= '1';
		wait for reloj_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
	
		-- hold rst state for 100 ns.
		rst <= '1';
		wait for 100 ns;	
		rst <= '0';
		R <= '1';
		wait for 100 ns;
		C <= '1';
		wait for 100 ns;
		R <= '0';
		wait for 100 ns;
		C <= '0';
     wait for reloj_period*10;
	
     wait;
   end process;

END;
