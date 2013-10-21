--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   15:40:12 10/22/2012
-- Design Name:   
-- Module Name:   C:/Xilinx/practica2b/sim_muneca.vhd
-- Project Name:  practica2b
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: FSM_muneca
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
 
ENTITY sim_munyeca IS
END sim_munyeca;
 
ARCHITECTURE behavior OF sim_munyeca IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT munyeca
    PORT(
         reloj : IN  std_logic;
         rst : IN  std_logic;
         R : IN  std_logic;
         C : IN  std_logic;
         G : OUT  std_logic;
         L : OUT  std_logic
			--actual_state : OUT  std_logic_vector(3 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal rst : std_logic := '0';
   signal R : std_logic := '0';
   signal C : std_logic := '0';

 	--Outputs
   signal G : std_logic;
   signal L : std_logic;
	--signal actual_state : std_logic_vector(3 downto 0);
   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: munyeca PORT MAP (
          reloj => clk,
          rst => rst,
          R => R,
          C => C,
          G => G,
          L => L
			 --actual_state => actual_state
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
		rst<='1';
		R<='0';
		C<='0';
      wait for 100 ns;	
		rst<='0';
		R<='1';
		C<='0';
		wait for 10 ns;	
		rst<='0';
		R<='1';
		C<='1';
		wait for 10 ns;	
		rst<='0';
		R<='0';
		C<='0';
		wait for 10 ns;	
		rst<='0';
		R<='1';
		C<='0';
		wait for 10 ns;	
		rst<='0';
		R<='0';
		C<='0';
		wait for 10 ns;	
		rst<='1';
		R<='0';
		C<='0';
		wait for 10 ns;	
		rst<='0';
		R<='0';
		C<='1';
		wait for 10 ns;	
		rst<='0';
		R<='1';
		C<='1';
		wait for 10 ns;	
		rst<='0';
		R<='0';
		C<='0';
		wait for 10 ns;
		C<='1';
 --     wait for clk_period*10;

      -- insert stimulus here 

      wait;
   end process;

END;
