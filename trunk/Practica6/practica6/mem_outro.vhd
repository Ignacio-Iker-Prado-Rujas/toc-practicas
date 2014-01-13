library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_arith.all; 
use ieee.std_logic_unsigned.all; 
 
 
entity SRAM is 
generic( w: integer:=4; -- ancho de palabra 
 d: integer:=4; -- nº de palabras 
 a: integer:=2); -- ancho dirección 
port( Clock: in std_logic; 
 Enable: in std_logic; 
 Read: in std_logic; 
 Write: in std_logic; 
 Read_Addr: in std_logic_vector(a-1 downto 0); 
 Write_Addr: in std_logic_vector(a-1 downto 0); 
 Data_in: in std_logic_vector(w-1 downto 0); 
 Data_out: out std_logic_vector(w-1 downto 0) 
); 
end SRAM; 
 
architecture behav of SRAM is 
 
-- Utilizamos un array para guardar los valores de la memoria 
type ram_type is array (0 to d-1) of std_logic_vector(w-1 downto 0); 
signal tmp_ram: ram_type; 
 
begin 
 
 -- Lectura 
 process(Clock, Read) 
 begin 
 if (Clock'event and Clock='1') then 
 if Enable='1' then 
 if Read='1' then 
 Data_out <= tmp_ram(conv_integer(Read_Addr)); 
 else 
 Data_out <= (Data_out'range => 'Z'); 
 -- Todos los bits de Data_out se ponen a 'Z' 
 end if; 
 end if; 
 end if; 
 end process; 
 
 -- Escritura 
 process(Clock, Write) 
 begin 
 if (Clock'event and Clock='1') then 
 if Enable='1' then 
 if Write='1' then 
 tmp_ram(conv_integer(Write_Addr)) <= Data_in; 
 end if; 
 end if; 
 end if; 
 end process; 
 
end behav;