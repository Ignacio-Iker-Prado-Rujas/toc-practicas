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
end munyeca;

architecture Behavioral of munyeca is

	type estado is(tranquila, asustada, dormida, habla);
	signal estado_actual, estado_sig: estado;

begin

--process para el reloj
relojito: process(reloj, rst)
	
	begin
	
	if rst = '1' then 
		estado_actual <= tranquila;
	elsif reloj'event and reloj = '1' then 
		estado_actual <= estado_sig;
	
	end if;

end process relojito;

--process para actualizar el estado de la munyeca
actualizar_sig_estado: process(R, C, estado_actual)
	begin
	case estado_actual is
		when tranquila =>
			if C = '0' and R = '1' then
				estado_sig <= habla;
			elsif R = '1' and C = '0' then
				estado_sig <=	dormida;
			else estado_sig <= estado_actual;
			end if;
		when habla =>
			if C = '1' then
				estado_sig <= dormida;
			else estado_sig <= estado_actual;
			end if;
		when dormida =>
			if R = '1' then
				estado_sig <= asustada;
			else estado_sig <= estado_actual;
			end if;
		when asustada => 
			if C = '1' and R = '0' then 
				estado_sig <= dormida;
			elsif	C = '0' and R = '0' then
				estado_sig <= tranquila;
			else estado_sig <= estado_actual;
			end if;
		when others => estado_sig <= estado_actual;
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
			L <= '1';
			G <= '0';
		when others =>
			G <= '0';
			L <= '0';
	end case;
end process actualizar_salidas;

end Behavioral;

