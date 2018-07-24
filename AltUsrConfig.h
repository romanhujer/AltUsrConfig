//----------------------------
// AltUsrConfig.h

/*
 * Description:
 * 
 *  This is extended config file for OnStep base on Config.Mega2560Alt.h  for  
 *     - SEBEN EQ3 mount
 *     - 3D Printed EQ mount
 *     
 *     - experimetal support for CNC 3.0 shield  
 *    
 * Note:
 *     -  All file  copy to OnStep subdirectiory named src/addons/AltUsrConfig (OnStep/src/addons/AltUsrConfig)
 *     -  Modify OnStep.ino in the sectino: 
 *     
 *   #include "Config.TM4C.h"
 *   #include "Config.STM32.h"
 *   //Add here this line:
 *   #include "addons/AltUsrConfig/AltUsrConfig.h" 
 *   
 *   #include "Validate.h"
 *   
 */


// Config for SEBEN EQ3 Mount
#include "Config.MegaSeben.h"           // Simple wiring for A4988 or TMC2100 16uSteps
#include "Config.MegaSebenA4988.h"      // Full wiring  
#include "Config.MegaSebenDRV8825.h"    // Full wiring  
#include "Config.MegaSebenTMC2130.h"    // Full wiring for SPI mode 32uSteps


// Config for my 3D printed EQ Mount II. see https://www.thingiverse.com/thing:2748281
#include "Config.MegaEq3D.h"            // Simple wiring for A4988 or TMC2100 16uSteps
#include "Config.MegaEq3DA4988.h"       // Full wiring  
#include "Config.MegaEq3DTMC2130.h"     // Full wiring for SPI mode 16uSteps

// Experimetal config 
#include "Config.MegaCNC30.h"           // Experimetal for CNC 3.0 Shield see http://osoyoo.com/2017/04/07/arduino-uno-cnc-shield-v3-0-a4988/

#include "AltValidate.h"


