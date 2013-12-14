----------------------------------------------------------------------------------
-- Company: Universidad Complutense de Madrid
-- Engineer: Enrique Ballesteros e Iker Prado
-- 
-- Create Date:    16:50:43 12/13/2013 
-- Design Name: 
-- Module Name:    practica5 - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: Ordenaci—n mediante burbuja
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
--use IEEE.std_logic_arith.ALL;
use IEEE.std_logic_unsigned.ALL;


-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
	use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity practica5 is
	generic (N: integer := 32);
	port (rst: in std_logic;
			clk: in std_logic;
			inicio: in std_logic;
			fin: out std_logic;
			direccion: in std_logic_vector(4 downto 0);
			dato_debug: out std_logic_vector(3 downto 0)
);
end practica5;

architecture Behavioral of practica5 is

component rams_2p is
	port (clk : in std_logic;
			we : in std_logic;
			addr1 : in std_logic_vector(4 downto 0);
			addr2 : in std_logic_vector(4 downto 0);
			di : in std_logic_vector(3 downto 0);
			do1 : out std_logic_vector(3 downto 0);
			do2 : out std_logic_vector(3 downto 0)
);
end component rams_2p;

type estado is(estado_inicial, bucle_i, bucle_j, swap_dirs, comprueba, swap_primero, swap_aux, swap_segundo);

signal i, j, aux_i, aux_j: std_logic_vector(5 downto 0);
signal wenable: std_logic;
signal addr1, addr2: std_logic_vector(4 downto 0);
signal din, dout1, dout2, aux, n_aux: std_logic_vector(3 downto 0);
signal estado_actual, estado_siguiente: estado;


begin
memoria: rams_2p port map (clk, wenable, addr1, addr2, din, dout1, dout2); 

reloj: process(clk)
begin
	
	if rst = '1' then
		estado_actual <= estado_inicial;
	elsif clk'event and clk = '1' then
		estado_actual <= estado_siguiente;
		i <= aux_i;
		j <= aux_j;
		aux <= n_aux;
	end if;
	
end process reloj;

burbuja: process(estado_actual, inicio, direccion, dout1, dout2, i, j, aux)
begin
	
	dato_debug <= "0000";
	wenable <= '0';
	fin <= '0';
	n_aux <= dout1;
	case estado_actual is
	
		when estado_inicial => 
			fin <= '1';
			addr1 <= direccion;
			dato_debug <= dout1;
			if inicio = '1' then
				aux_i <= "000000";
				estado_siguiente <= bucle_i;		
			else 
				estado_siguiente <= estado_inicial;
			end if;			
			
		when bucle_i => 
			if i < N then 
				aux_j <= "000000";
				estado_siguiente <= bucle_j;
				aux_i <= i+1;			
			else 
				fin <= '1';
				addr1 <= direccion;
				estado_siguiente <= estado_inicial;
			end if;
				
		when bucle_j => 
			if j < N-1 then 
				estado_siguiente <= swap_dirs;
				aux_j <= j+1;
			else 
				estado_siguiente <= bucle_i;	
			end if;
		
		when swap_dirs =>
			-- Hemos avanzado la j, as’ que cargamos mem(j-1) y mem(j)
			addr1 <= j(4 downto 0) - 1;
			addr2 <= j(4 downto 0);
			estado_siguiente <= comprueba;
			
		when comprueba =>
			-- Solo cambiamos si el nœmero es menor que el siguiente
			if dout1 < dout2 then
				estado_siguiente <= swap_primero;
			else 
				estado_siguiente <= bucle_j;
			end if; 
				 
		when swap_primero => 
			-- En n_aux ahora tenemos el contenido de addr1
			-- Guardamos mem(j) en mem(j-1)
			din <= dout2;
			wenable <= '1';
			estado_siguiente <= swap_aux;
			
		when swap_aux =>
			-- Lo que hab’a en n_aux (el contenido de addr1) pasa a aux
			--Vamos a guardar en mem(j)
			addr1 <= j(4 downto 0);
			estado_siguiente <= swap_segundo;	
			
		when swap_segundo =>
			--Guardamos lo que hab’a en mem(j-1) en mem(j), que estaba en aux
			din <= aux;
			wenable <= '1';
			estado_siguiente <= bucle_j;	
					
	end case;

end process burbuja;

end Behavioral;

