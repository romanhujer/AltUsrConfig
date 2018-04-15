// -------------------------------------------------------------------------------------------------
// Pin map for OnStep "CNC 3.0 Shield" (Mega2560) 


#if defined(__AVR_ATmega2560__) // || defined(__SAM3X8E__)  //__SAM3X8E__  Not now support


// The PEC index sense is a 5V logic input, resets the PEC index on rising edge then waits for 60 seconds before allowing another reset
#define PecPin         11 // Pin 11  [CNC Limit-Z]
#define AnalogPecPin   1  // Pin A1  [CNC Hold]

// The limit switch sense is a 5V logic input which uses the internal pull up, shorted to ground it stops gotos/tracking
#define LimitPin       A0  // Pin A0  [CNC Abort] 

// The status LED is a two wire jumper with a 10k resistor in series to limit the current to the LED
#define LEDposPin     12   // Pin 12 (LED) [CNC SpnDir] 
#define LEDnegPin     13   // Pin 13 (LED) [CNC SpnEn] 
#define LEDneg2Pin    9   // Pin 9 (GND)   [CNC Limit-X]
#define ReticulePin   44   // Pin 44 (GND) 

// For a piezo buzzer
#define TonePin       42    // Pin 42 (Tone)  

// The PPS pin is a 5V logic input, OnStep measures time between rising edges and adjusts the internal sidereal clock frequency
#define PpsPin        21    // Interrupt 2 on Pin 21 (alternate Int3 on Pin20) 
#define DS3234_CS_PIN 10    // Pin 10 (<- Y Limit)
                         
// Pins RA/Azm on CNC X
#define Axis1DirPin    5    // Pin 5 (Dir) [CNC X Dir]
#define Axis1DirBit    3    // 0x08
#define Axis1DirPORT  PORTE //
#define Axis1StepPin   2    // Pin  (Step) [CNC X Step]
#define Axis1StepBit   4    // 0x10
#define Axis1StepPORT PORTE //

#ifndef ALT_ENABLE_PIN_ON
 #define Axis1_EN      8    // Pin 8  (Enable [CNC Steper Enable]) (CNC default wiring is common for all steper drivers is pin 8)
#else
 #define Axis1_EN     23    // Pin 23 (Enable for alternate wirning)
#endif
#define Axis1_M0      25    // Pin 29 (Microstep or Decay Mode 0 or SPI MOSI)
#define Axis1_M1      27    // Pin 27 (Microstep or Decay Mode 1 or SPI SCK)
#define Axis1_M2      29    // Pin 25 (Microstep or Decay Mode 2 or SPI CS)
#define Axis1_Aux     31    // Pin 39 (Aux - SPI MISO)
#define Axis1_Mode    33    // Pin 32 (Aux Decay Mode for Axis1)


// Pins to Axis2 Dec/Alt on CNC Y
#define Axis2DirPin   6     // Pin 6 (Dir) [CNC Y Dir]
#define Axis2DirBit   3     // 0x08
#define Axis2DirPORT  PORTH //
#define Axis2StepPin  3     // Pin 3 (Step) [CNC Y Step]
#define Axis2StepBit  5     //  0x20
#define Axis2StepPORT PORTE //

#ifndef ALT_ENABLE_PIN_ON 
  #define Axis2_EN      8     // Pin 8 (Enabled) (CNC default wiring is common for all driver pin 8) [CNC Steper Enable])
  #define AXIS2_AUTO_POWER_DOWN_OFF  // for CNC3.0 default wiring must by OFF
#else
  #define Axis2_EN     22   // Pin 22 (Enable alternate wirning)
#endif
#define Axis2_M0      24    // Pin 30 (Microstep or Decay Mode 0 or SPI MOSI)
#define Axis2_M1      26    // Pin 32 (Microstep or Decay Mode 1 or SPI SCK)
#define Axis2_M2      28    // Pin 34 (Microstep or Decay Mode 2 or SPI CS )
#define Axis2_Aux     30    // Pin 38 (Aux - SPI MISO)
#define Axis2_Mode    32    // Pin 32 (Aux Decay Mode for Axis2)

// For rotator stepper driver on CNC Z
#ifndef ALT_ENABLE_PIN_ON 
  #define Axis3_EN     8     // Pin 8 (Enabled) (CNC default wiring is common for all driver pin 8) [CNC Steper Enable])
#else   
  #define Axis3_EN     A8   // Pin A8 (Enable alternate wirning)
#endif
#define Axis3DirPin   7    // Pin 7 (Dir)
#define Axis3StepPin  4    // Pin 4 (Step)

// For focuser1 stepper driver  CNC  A (Aditions wiring is need) 
#ifndef ALT_ENABLE_PIN_ON 
  #define Axis4_EN     8     // Pin 8 (Enabled) (CNC default wiring is common for all driver pin 8) [CNC Steper Enable])
#else   
  #define Axis4_EN     A9   // Pin A9 (Enable alternate wirning)
#endif

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

