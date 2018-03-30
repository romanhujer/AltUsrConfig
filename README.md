
Addons for alternate users configs for OnStep by Howard Dutton 
more on https://github.com/hjd1964/OnStep

 Description:
 
  This is extended config file for OnStep base on Config.Mega2560Alt.h  for  
     * SEBEN EQ3 mount
     
     * 3D Printed EQ mount
     
     * experimetal support for CNC 3.0 shield  
     
    
 Note
    * All file  copy to OnStep subdirectiory named src/addons/AltUsrConfig  (OnStepsrc/addons/AltUsrConfig)
    
    *  Modify OnStep.ino in the sectino: 

<pre>
   #include "Config.TM4C.h"
   #include "Config.STM32.h"
   //Add here this line:
   #include "src/addons/AltUsrConfig/AltUsrConfig.h"
   
   #include "Validate.h"
</pre>
 
