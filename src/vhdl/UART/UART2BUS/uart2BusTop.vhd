-----------------------------------------------------------------------------------------
-- uart to internal bus top module 
--
-----------------------------------------------------------------------------------------
library ieee;
use ieee.std_logic_1164.all;

library work;
use work.uart2BusTop_pkg.all;

entity uart2BusTop is
  generic ( AW : integer := 8);
  port ( -- global signals
         clr          : in  STD_LOGIC;                          -- global reset input
         clk          : in  STD_LOGIC;                          -- global clock input
         -- uart serial signals
         serIn        : in  STD_LOGIC;                          -- serial data input
         serOut       : out STD_LOGIC;                          -- serial data output
         -- internal bus to register file
         intAccessReq : out std_logic;                          --
         intAccessGnt : in  std_logic;                          --
         intRdData    : in  STD_LOGIC_VECTOR (7 downto 0);      -- data read from register file
         intAddress   : out STD_LOGIC_VECTOR (AW - 1 downto 0); -- address bus to register file
         intWrData    : out STD_LOGIC_VECTOR (7 downto 0);      -- write data to register file
         intWrite     : out STD_LOGIC;                          -- write control to register file
         intRead      : out STD_LOGIC);                         -- read control to register file
end uart2BusTop;

architecture Behavioral of uart2BusTop is

  -- baud rate configuration, see baudGen.vhd for more details.
  -- baud rate generator parameters for 115200 baud on 25MHz clock 
  --constant baudFreq     : std_logic_vector(11 downto 0) := x"480";--900
  --constant baudLimit    : std_logic_vector(15 downto 0) := x"3889";
  -- baud rate generator parameters for 921600 baud on 100MHz clock 
  --constant baudFreq     : std_logic_vector(11 downto 0) := x"900";
  --constant baudLimit    : std_logic_vector(15 downto 0) := x"3409";
  constant baudFreq     : std_logic_vector(23 downto 0) := x"000120";
  constant baudLimit    : std_logic_vector(23 downto 0) := x"003D09";
  -- baud rate generator parameters for 921600 baud on 96.968727 Mhz
  --constant baudFreq     : std_logic_vector(23 downto 0) := x"190000";
  --constant baudLimit    : std_logic_vector(23 downto 0) := x"8B671F";
  
  -- baud rate generator parameters for 921600 baud on 120 Mhz
  --constant baudFreq     : std_logic_vector(23 downto 0) := x"000180";
  --constant baudLimit    : std_logic_vector(23 downto 0) := x"000ab5";

  -- baud rate generator parameters for 115200 baud on 100 Mhz
  --constant baudFreq     : std_logic_vector(23 downto 0) := x"000120";
  --constant baudLimit    : std_logic_vector(23 downto 0) := x"003D09";

  signal   txData       : std_logic_vector(7 downto 0); -- data byte to transmit
  signal   newTxData    : std_logic;                    -- asserted to indicate that there is a new data byte for transmission
  signal   txBusy       : std_logic;                    -- signs that transmitter is busy
  signal   rxData       : std_logic_vector(7 downto 0); -- data byte received
  signal   newRxData    : std_logic;                    -- signs that a new byte was received
  
  begin
    -- uart top module instance
    ut : uartTop
      port map (
        clr => clr,
        clk => clk,
        serIn => serIn,
        txData => txData,
        newTxData => newTxData,
        baudFreq => baudFreq,
        baudLimit => baudLimit,
        serOut => serOut,
        txBusy => txBusy,
        rxData => rxData,
        newRxData => newRxData,
        baudClk => open);
    -- uart parser instance
    up : uartParser
      generic map ( 
        AW => AW)
      port map (
        clr => clr,
        clk => clk,
        txBusy => txBusy,
        rxData => rxData,
        newRxData => newRxData,
        intRdData => intRdData,
        txData => txData,
        newTxData => newTxData,
        intReq => intAccessReq,
        intGnt => intAccessGnt,
        intAddress => intAddress,
        intWrData => intWrData,
        intWrite => intWrite,
        intRead => intRead);

  end Behavioral;
