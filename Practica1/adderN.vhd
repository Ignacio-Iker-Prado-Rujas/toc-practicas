----------------------------------------------------------------------------------
-- Company: Universidad Complutense de Madrid
-- Engineer: Marcos Sánchez-Élez
-- 
-- Design Name: Práctica 1b 
-- Module Name:    adder - circuito 
-- Project Name: Práctica 1a
-- Target Devices: Spartan 3
-- Description: sumador de 1 bit completo
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;


entity adderN is
	generic(N : integer := 4);
	port (a, b : in std_logic_vector(N-1 downto 0);
			cin : in std_logic;
			sum : out std_logic_vector(N-1 downto 0);
			cout : out std_logic);
end adderN;

-- implementación estructural del sumador de N bits
architecture estructural of adderN is
	component adder
		port (a, b, cin : in std_logic;
				sum, cout : out std_logic);
	end component;
	signal carry: std_logic_vector(N downto 0);
begin
	carry(0) <= cin;
	gen: for i in 0 to N-1 generate
	comp: adder port map (a(i), b(i), carry(i), sum(i), carry(i+1));
	end generate gen;
	cout <= carry(N);
end estructural;