// -------------------------------------------------------------------------------------------------
// Pin map for legacy OnStep "Alternate pin-map" (Mega2560)

#if defined(__AVR_ATmega2560__) || defined(__SAM3X8E__)


// The PEC index sense is a 5V logic input, resets the PEC index on rising edge then waits for 60 seconds before allowing another reset
#define PecPin         11 // Pin 11  Limit Z
#define AnalogPecPin   1  // Pin A1  <-Hold

// The limit switch sense is a 5V logic input which uses the internal pull up, shorted to ground it stops gotos/tracking
#define LimitPin       A0  // Pin A0 <- Abort 

// The status LED is a two wire jumper with a 10k resistor in series to limit the current to the LED
#define LEDposPin     12   // Pin 12 (LED) SpnDir 
#define LEDnegPin     13   // Pin 13 (LED) SpnEn 
#define LEDneg2Pin    9   // Pin 9 (GND) Limit- X
#define ReticulePin   44   // Pin 44 (GND) 

// For a piezo buzzer
#define TonePin       42    // Pin 42 (Tone)  

// The PPS pin is a 5V logic input, OnStep measures time between rising edges and adjusts the internal sidereal clock frequency
#define PpsPin        21    // Interrupt 2 on Pin 21 (alternate Int3 on Pin20) 
#define DS3234_CS_PIN 10    // Pin 10 (<- Y Limit)
                         
// Pins RA/Azm on CNC X
#define Axis1DirPin    5   // Pin 5 (Dir)  (<- X Dir)
#define Axis1DirBit    0    //
#define Axis1DirPORT  PORTC //
#define Axis1StepPin   2    // Pin  (Step) (<-  X Step)
#define Axis1StepBit   2    //
#define Axis1StepPORT PORTC //

#define Axis1_Aux     39    // Pin 39 (Aux - SPI MISO)
#define Axis1_M2      25    // Pin 25 (Microstep or Decay Mode 2 or SPI CS)
#define Axis1_M1      27    // Pin 27 (Microstep or Decay Mode 1 or SPI SCK)
#define Axis1_M0      29    // Pin 29 (Microstep or Decay Mode 0 or SPI MOSI)
#define Axis1_EN      8     // Pin 8 (Enable) (<-Steper Enable)


// Pins to Axis2 Dec/Alt on CNC Y
#define Axis2DirPin   6     // Pin 6 (Dir)   (<- Y Dir)
#define Axis2DirBit   0     //
#define Axis2DirPORT  PORTA //
#define Axis2StepPin  3     // Pin 3 (Step)  (<-  Y Step)
#define Axis2StepBit  2     //
#define Axis2StepPORT PORTA //

#define Axis2_Aux     38    // Pin 38 (Aux - SPI MISO)
#define Axis2_M2      34    // Pin 34 (Microstep or Decay Mode 2 or SPI CS )
#define Axis2_M1      32    // Pin 32 (Microstep or Decay Mode 1 or SPI SCK)
#define Axis2_M0      30    // Pin 30 (Microstep or Decay Mode 0 or SPI MOSI)
#define Axis2_EN      8     // Pin 8 (Enabled) ( Not USE) (Wiring is Common with pin 8 <-Steper Enable)

// For rotator stepper driver on CNC Z
#define Axis3DirPin   5    // Pin 5 (Dir)
#define Axis3StepPin  2    // Pin 2 (Step)


// For focuser1 stepper driver  CNC  Spindler (A  need wiring pins ) 
#define Axis4DirPin   A10    // Pin A10 (Dir)  
#define Axis4StepPin  A11    // Pin 11 (Step) 


// ST4 interface
#define ST4RAw        47    // Pin 47 ST4 RA- West
#define ST4DEs        43    // Pin 43 ST4 DE- South
#define ST4DEn        45    // Pin 45 ST4 DE+ North
#define ST4RAe        49    // Pin 49 ST4 RA+ East


#else
#error "Wrong processor for this configuration!"

#endif

