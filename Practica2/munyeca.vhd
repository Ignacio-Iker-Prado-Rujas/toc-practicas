----------------------------------------------------------------------------------
-- Company: Universidad Complutense
-- Engineer: Enrique Ballesteros e Iker Prado
-- 
-- Create Date:    19:08:21 10/15/2013 
-- Design Name: 
-- Module Name:    munyeca - Behavioral 
-- Project Name: Practica 2
-- Target Devices: 
-- Tool versions: 
-- Description: Maquina de estados (simulacion de una munyeca)
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

entity munyeca is
	port (reloj, rst, R, C: in	std_logic;
			G, L: out std_logic);
			--Para ver estados en fpga [actual_state : out std_logic_vector(3 downto 0)]
end munyeca;

architecture Behavioral of munyeca is

	signal clk: std_logic;
--	signal clk_100M, clk_1: std_logic; -- Relojes auxiliares
	-- Descomentar para implementación
--	component divisor is
--		port (reset, clk_entrada: in STD_LOGIC;
--				clk_salida: out STD_LOGIC);
--	end component;
	
	component contador is
		port(clk, reset, as: in std_logic; cuenta: out std_logic_vector(3 downto 0));
	end component;	

	type estado is(tranquila, asustada, dormida, habla);
	signal estado_actual, estado_sig: estado;
	signal reset_meter: std_logic;
	signal cuenta: std_logic_vector(3 downto 0);
	

begin

-- Descomentar para implementación
--	Nuevo_reloj: divisor port map (rst, clk_100M, clk_1);
--	clk_100M<=reloj;
--	clk<=clk_1;
-- Comentar para la implementacion
	clk <= reloj;

--process para el reloj
relojito: process(clk, rst)
	
	begin
	if rst = '1' then 
		estado_actual <= tranquila;
	elsif clk'event and clk = '1' then 
		estado_actual <= estado_sig;
	end if;

end process relojito;

contar: contador port map(clk, reset_meter, '1', cuenta);
--process para actualizar el estado de la munyeca
actualizar_sig_estado: process(R, C, estado_actual, cuenta)
	begin
	
	case estado_actual is
		when tranquila =>
			reset_meter <= '1';
			--actual_state <= "0001"; 	--tranquila (Para FPGA)
			if C = '0' and R = '1' then
				estado_sig <= habla;
			elsif C = '1' and R = '0' then
				estado_sig <=	dormida;
			else estado_sig <= tranquila;
			end if;
		when habla =>
			reset_meter <= '1';
			--actual_state <= "0010"; --habla (Para FPGA)
			if C = '1' then
				estado_sig <= dormida;
			else estado_sig <= habla;
			end if;
		when dormida =>
			reset_meter <= '0';
			--actual_state <= "0100"; --dormida (Para FPGA)
			if R = '1' then
				estado_sig <= asustada;
			elsif cuenta = "0100" then -- Al quinto reloj debe despertar
				estado_sig <= tranquila;
			else estado_sig <= dormida;
			end if;
		when asustada => 
			reset_meter <= '1';
			--actual_state <= "1000"; --asustada (Para FPGA)
			if C = '1' and R = '0' then 
				estado_sig <= dormida;
			elsif	C = '0' and R = '0' then
				estado_sig <= tranquila;
			else estado_sig <= asustada;
			end if;
		when others => estado_sig <= tranquila;
	end case;
	
end process actualizar_sig_estado;

--process para actualizar las salidas en funcion del estado
actualizar_salidas: process(estado_actual)

begin
	case estado_actual is
		when habla =>
			G <= '1';
			L <= '0';
		when asustada =>
			G <= '0';
			L <= '1';
		when others =>
			G <= '0';
			L <= '0';
	end case;
	
end process actualizar_salidas;

end Behavioral;

