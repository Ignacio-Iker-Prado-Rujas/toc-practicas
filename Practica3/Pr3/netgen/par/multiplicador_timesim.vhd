--------------------------------------------------------------------------------
-- Copyright (c) 1995-2012 Xilinx, Inc.  All rights reserved.
--------------------------------------------------------------------------------
--   ____  ____
--  /   /\/   /
-- /___/  \  /    Vendor: Xilinx
-- \   \   \/     Version: P.15xf
--  \   \         Application: netgen
--  /   /         Filename: multiplicador_timesim.vhd
-- /___/   /\     Timestamp: Sat Nov 09 16:24:09 2013
-- \   \  /  \ 
--  \___\/\___\
--             
-- Command	: -intstyle ise -s 5 -pcf multiplicador.pcf -rpw 100 -tpw 0 -ar Structure -tm multiplicador -insert_pp_buffers true -w -dir netgen/par -ofmt vhdl -sim multiplicador.ncd multiplicador_timesim.vhd 
-- Device	: 3s1000ft256-5 (PRODUCTION 1.39 2012-04-23)
-- Input file	: multiplicador.ncd
-- Output file	: C:\Users\enrique ballesteros\Desktop\Tercero\TOC\toc-practicas\Practica3\Pr3\netgen\par\multiplicador_timesim.vhd
-- # of Entities	: 1
-- Design Name	: multiplicador
-- Xilinx	: C:\Xilinx\14.1\ISE_DS\ISE\
--             
-- Purpose:    
--     This VHDL netlist is a verification model and uses simulation 
--     primitives which may not represent the true implementation of the 
--     device, however the netlist is functionally correct and should not 
--     be modified. This file cannot be synthesized and should only be used 
--     with supported simulation tools.
--             
-- Reference:  
--     Command Line Tools User Guide, Chapter 23
--     Synthesis and Simulation Design Guide, Chapter 6
--             
--------------------------------------------------------------------------------

library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library SIMPRIM;
use SIMPRIM.VCOMPONENTS.ALL;
use SIMPRIM.VPACKAGE.ALL;

entity multiplicador is
  port (
    p : out STD_LOGIC_VECTOR ( 5 downto 0 ); 
    a : in STD_LOGIC_VECTOR ( 2 downto 0 ); 
    x : in STD_LOGIC_VECTOR ( 2 downto 0 ) 
  );
end multiplicador;

architecture Structure of multiplicador is
  signal x_0_IBUF_106 : STD_LOGIC; 
  signal x_1_IBUF_107 : STD_LOGIC; 
  signal x_2_IBUF_108 : STD_LOGIC; 
  signal a_0_IBUF_109 : STD_LOGIC; 
  signal a_1_IBUF_110 : STD_LOGIC; 
  signal a_2_IBUF_111 : STD_LOGIC; 
  signal mult_1_2_0 : STD_LOGIC; 
  signal suma_0_1_0 : STD_LOGIC; 
  signal mult_0_1_Q : STD_LOGIC; 
  signal suma_1_2_Q : STD_LOGIC; 
  signal acarreo_2_3_0 : STD_LOGIC; 
  signal suma_0_2_0 : STD_LOGIC; 
  signal suma_2_3_Q : STD_LOGIC; 
  signal mult_0_2_0 : STD_LOGIC; 
  signal mult_0_3_0 : STD_LOGIC; 
  signal mult_1_3_Q : STD_LOGIC; 
  signal acarreo_2_4_0 : STD_LOGIC; 
  signal mult_1_4_Q : STD_LOGIC; 
  signal x_0_INBUF : STD_LOGIC; 
  signal x_1_INBUF : STD_LOGIC; 
  signal x_2_INBUF : STD_LOGIC; 
  signal a_0_INBUF : STD_LOGIC; 
  signal a_1_INBUF : STD_LOGIC; 
  signal a_2_INBUF : STD_LOGIC; 
  signal p_0_O : STD_LOGIC; 
  signal p_1_O : STD_LOGIC; 
  signal p_2_O : STD_LOGIC; 
  signal p_3_O : STD_LOGIC; 
  signal p_4_O : STD_LOGIC; 
  signal p_5_O : STD_LOGIC; 
  signal suma_1_2_pack_1 : STD_LOGIC; 
  signal suma_0_1_Q : STD_LOGIC; 
  signal suma_0_2_Q : STD_LOGIC; 
  signal p_3_OBUF_283 : STD_LOGIC; 
  signal suma_2_3_pack_1 : STD_LOGIC; 
  signal mult_0_2_Q : STD_LOGIC; 
  signal p_1_OBUF_298 : STD_LOGIC; 
  signal p_2_OBUF_331 : STD_LOGIC; 
  signal mult_0_1_pack_1 : STD_LOGIC; 
  signal mult_0_3_Q : STD_LOGIC; 
  signal p_0_OBUF_367 : STD_LOGIC; 
  signal mult_1_2_Q : STD_LOGIC; 
  signal mult_1_3_pack_1 : STD_LOGIC; 
  signal p_5_OBUF_415 : STD_LOGIC; 
  signal mult_1_4_pack_1 : STD_LOGIC; 
  signal p_4_OBUF_427 : STD_LOGIC; 
  signal VCC : STD_LOGIC; 
  signal acarreo : STD_LOGIC_VECTOR2 ( 2 downto 2 , 4 downto 3 ); 
begin
  x_0_IBUF : X_BUF
    generic map(
      LOC => "PAD45",
      PATHPULSE => 658 ps
    )
    port map (
      I => x(0),
      O => x_0_INBUF
    );
  x_1_IBUF : X_BUF
    generic map(
      LOC => "PAD39",
      PATHPULSE => 658 ps
    )
    port map (
      I => x(1),
      O => x_1_INBUF
    );
  x_2_IBUF : X_BUF
    generic map(
      LOC => "PAD40",
      PATHPULSE => 658 ps
    )
    port map (
      I => x(2),
      O => x_2_INBUF
    );
  a_0_IBUF : X_BUF
    generic map(
      LOC => "PAD44",
      PATHPULSE => 658 ps
    )
    port map (
      I => a(0),
      O => a_0_INBUF
    );
  a_1_IBUF : X_BUF
    generic map(
      LOC => "PAD43",
      PATHPULSE => 658 ps
    )
    port map (
      I => a(1),
      O => a_1_INBUF
    );
  a_2_IBUF : X_BUF
    generic map(
      LOC => "PAD42",
      PATHPULSE => 658 ps
    )
    port map (
      I => a(2),
      O => a_2_INBUF
    );
  p_0_OBUF : X_OBUF
    generic map(
      LOC => "PAD50"
    )
    port map (
      I => p_0_O,
      O => p(0)
    );
  p_1_OBUF : X_OBUF
    generic map(
      LOC => "PAD37"
    )
    port map (
      I => p_1_O,
      O => p(1)
    );
  p_2_OBUF : X_OBUF
    generic map(
      LOC => "PAD48"
    )
    port map (
      I => p_2_O,
      O => p(2)
    );
  p_3_OBUF : X_OBUF
    generic map(
      LOC => "PAD47"
    )
    port map (
      I => p_3_O,
      O => p(3)
    );
  p_4_OBUF : X_OBUF
    generic map(
      LOC => "PAD46"
    )
    port map (
      I => p_4_O,
      O => p(4)
    );
  p_5_OBUF : X_OBUF
    generic map(
      LOC => "PAD38"
    )
    port map (
      I => p_5_O,
      O => p(5)
    );
  acarreo_2_3_XUSED : X_BUF
    generic map(
      LOC => "SLICE_X32Y93",
      PATHPULSE => 658 ps
    )
    port map (
      I => acarreo(2, 3),
      O => acarreo_2_3_0
    );
  acarreo_2_3_YUSED : X_BUF
    generic map(
      LOC => "SLICE_X32Y93",
      PATHPULSE => 658 ps
    )
    port map (
      I => suma_1_2_pack_1,
      O => suma_1_2_Q
    );
  Q_and00071 : X_LUT4
    generic map(
      INIT => X"F000",
      LOC => "SLICE_X32Y92"
    )
    port map (
      ADR0 => VCC,
      ADR1 => VCC,
      ADR2 => x_0_IBUF_106,
      ADR3 => a_1_IBUF_110,
      O => suma_0_1_Q
    );
  suma_0_1_XUSED : X_BUF
    generic map(
      LOC => "SLICE_X32Y92",
      PATHPULSE => 658 ps
    )
    port map (
      I => suma_0_1_Q,
      O => suma_0_1_0
    );
  suma_0_1_YUSED : X_BUF
    generic map(
      LOC => "SLICE_X32Y92",
      PATHPULSE => 658 ps
    )
    port map (
      I => suma_0_2_Q,
      O => suma_0_2_0
    );
  FilaUltima_3_celdaFilaUltima_Mxor_suma_o_xo_0_1 : X_LUT4
    generic map(
      INIT => X"3C3C",
      LOC => "SLICE_X33Y94"
    )
    port map (
      ADR0 => VCC,
      ADR1 => acarreo_2_3_0,
      ADR2 => suma_2_3_Q,
      ADR3 => VCC,
      O => p_3_OBUF_283
    );
  p_3_OBUF_YUSED : X_BUF
    generic map(
      LOC => "SLICE_X33Y94",
      PATHPULSE => 658 ps
    )
    port map (
      I => suma_2_3_pack_1,
      O => suma_2_3_Q
    );
  Filas_1_Columnas_3_celdaNormal_Mxor_suma_o_xo_0_1 : X_LUT4
    generic map(
      INIT => X"965A",
      LOC => "SLICE_X33Y94"
    )
    port map (
      ADR0 => mult_1_3_Q,
      ADR1 => mult_0_2_0,
      ADR2 => mult_0_3_0,
      ADR3 => suma_0_2_0,
      O => suma_2_3_pack_1
    );
  mult_0_2_XUSED : X_BUF
    generic map(
      LOC => "SLICE_X33Y95",
      PATHPULSE => 658 ps
    )
    port map (
      I => mult_0_2_Q,
      O => mult_0_2_0
    );
  FilaUltima_1_celdaFilaUltima_Mxor_suma_o_xo_0_1 : X_LUT4
    generic map(
      INIT => X"6CA0",
      LOC => "SLICE_X33Y95"
    )
    port map (
      ADR0 => a_1_IBUF_110,
      ADR1 => x_1_IBUF_107,
      ADR2 => x_0_IBUF_106,
      ADR3 => a_0_IBUF_109,
      O => p_1_OBUF_298
    );
  p_2_OBUF_YUSED : X_BUF
    generic map(
      LOC => "SLICE_X33Y93",
      PATHPULSE => 658 ps
    )
    port map (
      I => mult_0_1_pack_1,
      O => mult_0_1_Q
    );
  mult_0_3_XUSED : X_BUF
    generic map(
      LOC => "SLICE_X32Y95",
      PATHPULSE => 658 ps
    )
    port map (
      I => mult_0_3_Q,
      O => mult_0_3_0
    );
  p_0_OBUF_YUSED : X_BUF
    generic map(
      LOC => "SLICE_X34Y94",
      PATHPULSE => 658 ps
    )
    port map (
      I => mult_1_2_Q,
      O => mult_1_2_0
    );
  acarreo_2_4_XUSED : X_BUF
    generic map(
      LOC => "SLICE_X32Y94",
      PATHPULSE => 658 ps
    )
    port map (
      I => acarreo(2, 4),
      O => acarreo_2_4_0
    );
  acarreo_2_4_YUSED : X_BUF
    generic map(
      LOC => "SLICE_X32Y94",
      PATHPULSE => 658 ps
    )
    port map (
      I => mult_1_3_pack_1,
      O => mult_1_3_Q
    );
  p_5_OBUF_YUSED : X_BUF
    generic map(
      LOC => "SLICE_X35Y94",
      PATHPULSE => 658 ps
    )
    port map (
      I => mult_1_4_pack_1,
      O => mult_1_4_Q
    );
  x_0_IFF_IMUX : X_BUF
    generic map(
      LOC => "PAD45",
      PATHPULSE => 658 ps
    )
    port map (
      I => x_0_INBUF,
      O => x_0_IBUF_106
    );
  x_1_IFF_IMUX : X_BUF
    generic map(
      LOC => "PAD39",
      PATHPULSE => 658 ps
    )
    port map (
      I => x_1_INBUF,
      O => x_1_IBUF_107
    );
  x_2_IFF_IMUX : X_BUF
    generic map(
      LOC => "PAD40",
      PATHPULSE => 658 ps
    )
    port map (
      I => x_2_INBUF,
      O => x_2_IBUF_108
    );
  a_0_IFF_IMUX : X_BUF
    generic map(
      LOC => "PAD44",
      PATHPULSE => 658 ps
    )
    port map (
      I => a_0_INBUF,
      O => a_0_IBUF_109
    );
  a_1_IFF_IMUX : X_BUF
    generic map(
      LOC => "PAD43",
      PATHPULSE => 658 ps
    )
    port map (
      I => a_1_INBUF,
      O => a_1_IBUF_110
    );
  a_2_IFF_IMUX : X_BUF
    generic map(
      LOC => "PAD42",
      PATHPULSE => 658 ps
    )
    port map (
      I => a_2_INBUF,
      O => a_2_IBUF_111
    );
  Filas_0_Columnas_2_celdaNormal_Mxor_suma_o_xo_0_1 : X_LUT4
    generic map(
      INIT => X"6AC0",
      LOC => "SLICE_X32Y93"
    )
    port map (
      ADR0 => x_1_IBUF_107,
      ADR1 => x_0_IBUF_106,
      ADR2 => a_2_IBUF_111,
      ADR3 => a_1_IBUF_110,
      O => suma_1_2_pack_1
    );
  Filas_1_Columnas_2_celdaNormal_acarreo_o1 : X_LUT4
    generic map(
      INIT => X"E8C0",
      LOC => "SLICE_X32Y93"
    )
    port map (
      ADR0 => mult_0_1_Q,
      ADR1 => mult_1_2_0,
      ADR2 => suma_1_2_Q,
      ADR3 => suma_0_1_0,
      O => acarreo(2, 3)
    );
  Q_and00081 : X_LUT4
    generic map(
      INIT => X"A0A0",
      LOC => "SLICE_X32Y92"
    )
    port map (
      ADR0 => x_0_IBUF_106,
      ADR1 => VCC,
      ADR2 => a_2_IBUF_111,
      ADR3 => VCC,
      O => suma_0_2_Q
    );
  Q_and00011 : X_LUT4
    generic map(
      INIT => X"AA00",
      LOC => "SLICE_X33Y95"
    )
    port map (
      ADR0 => a_1_IBUF_110,
      ADR1 => VCC,
      ADR2 => VCC,
      ADR3 => x_1_IBUF_107,
      O => mult_0_2_Q
    );
  Q_and00001 : X_LUT4
    generic map(
      INIT => X"F000",
      LOC => "SLICE_X33Y93"
    )
    port map (
      ADR0 => VCC,
      ADR1 => VCC,
      ADR2 => x_1_IBUF_107,
      ADR3 => a_0_IBUF_109,
      O => mult_0_1_pack_1
    );
  FilaUltima_2_celdaFilaUltima_Mxor_suma_o_xo_0_1 : X_LUT4
    generic map(
      INIT => X"963C",
      LOC => "SLICE_X33Y93"
    )
    port map (
      ADR0 => suma_0_1_0,
      ADR1 => suma_1_2_Q,
      ADR2 => mult_1_2_0,
      ADR3 => mult_0_1_Q,
      O => p_2_OBUF_331
    );
  Q_and00021 : X_LUT4
    generic map(
      INIT => X"A0A0",
      LOC => "SLICE_X32Y95"
    )
    port map (
      ADR0 => x_1_IBUF_107,
      ADR1 => VCC,
      ADR2 => a_2_IBUF_111,
      ADR3 => VCC,
      O => mult_0_3_Q
    );
  Q_and00031 : X_LUT4
    generic map(
      INIT => X"8888",
      LOC => "SLICE_X34Y94"
    )
    port map (
      ADR0 => a_0_IBUF_109,
      ADR1 => x_2_IBUF_108,
      ADR2 => VCC,
      ADR3 => VCC,
      O => mult_1_2_Q
    );
  Q_and00061 : X_LUT4
    generic map(
      INIT => X"8888",
      LOC => "SLICE_X34Y94"
    )
    port map (
      ADR0 => a_0_IBUF_109,
      ADR1 => x_0_IBUF_106,
      ADR2 => VCC,
      ADR3 => VCC,
      O => p_0_OBUF_367
    );
  Q_and00041 : X_LUT4
    generic map(
      INIT => X"F000",
      LOC => "SLICE_X32Y94"
    )
    port map (
      ADR0 => VCC,
      ADR1 => VCC,
      ADR2 => x_2_IBUF_108,
      ADR3 => a_1_IBUF_110,
      O => mult_1_3_pack_1
    );
  Filas_1_Columnas_3_celdaNormal_acarreo_o1 : X_LUT4
    generic map(
      INIT => X"EC80",
      LOC => "SLICE_X32Y94"
    )
    port map (
      ADR0 => suma_0_2_0,
      ADR1 => mult_0_3_0,
      ADR2 => mult_0_2_0,
      ADR3 => mult_1_3_Q,
      O => acarreo(2, 4)
    );
  Q_and00051 : X_LUT4
    generic map(
      INIT => X"C0C0",
      LOC => "SLICE_X35Y94"
    )
    port map (
      ADR0 => VCC,
      ADR1 => a_2_IBUF_111,
      ADR2 => x_2_IBUF_108,
      ADR3 => VCC,
      O => mult_1_4_pack_1
    );
  celdaCasillaUltima_acarreo_o1 : X_LUT4
    generic map(
      INIT => X"E8C0",
      LOC => "SLICE_X35Y94"
    )
    port map (
      ADR0 => acarreo_2_3_0,
      ADR1 => acarreo_2_4_0,
      ADR2 => mult_1_4_Q,
      ADR3 => suma_2_3_Q,
      O => p_5_OBUF_415
    );
  celdaCasillaUltima_Mxor_suma_o_xo_0_1 : X_LUT4
    generic map(
      INIT => X"963C",
      LOC => "SLICE_X34Y95"
    )
    port map (
      ADR0 => suma_2_3_Q,
      ADR1 => mult_1_4_Q,
      ADR2 => acarreo_2_4_0,
      ADR3 => acarreo_2_3_0,
      O => p_4_OBUF_427
    );
  p_0_OUTPUT_OFF_OMUX : X_BUF
    generic map(
      LOC => "PAD50",
      PATHPULSE => 658 ps
    )
    port map (
      I => p_0_OBUF_367,
      O => p_0_O
    );
  p_1_OUTPUT_OFF_OMUX : X_BUF
    generic map(
      LOC => "PAD37",
      PATHPULSE => 658 ps
    )
    port map (
      I => p_1_OBUF_298,
      O => p_1_O
    );
  p_2_OUTPUT_OFF_OMUX : X_BUF
    generic map(
      LOC => "PAD48",
      PATHPULSE => 658 ps
    )
    port map (
      I => p_2_OBUF_331,
      O => p_2_O
    );
  p_3_OUTPUT_OFF_OMUX : X_BUF
    generic map(
      LOC => "PAD47",
      PATHPULSE => 658 ps
    )
    port map (
      I => p_3_OBUF_283,
      O => p_3_O
    );
  p_4_OUTPUT_OFF_OMUX : X_BUF
    generic map(
      LOC => "PAD46",
      PATHPULSE => 658 ps
    )
    port map (
      I => p_4_OBUF_427,
      O => p_4_O
    );
  p_5_OUTPUT_OFF_OMUX : X_BUF
    generic map(
      LOC => "PAD38",
      PATHPULSE => 658 ps
    )
    port map (
      I => p_5_OBUF_415,
      O => p_5_O
    );
  NlwBlock_multiplicador_VCC : X_ONE
    port map (
      O => VCC
    );
  NlwBlockROC : X_ROC
    generic map (ROC_WIDTH => 100 ns)
    port map (O => GSR);
  NlwBlockTOC : X_TOC
    port map (O => GTS);

end Structure;

