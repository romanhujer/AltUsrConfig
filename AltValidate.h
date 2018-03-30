// -----------------------------------------------------------------------------------
// Validate for Alternate configuration

#ifndef Classic_ON

#ifdef MegaSeben_ON
   #define Configuration_Found
#endif

#ifdef MegaSebenA4988_ON
  #ifdef Configuration_Found
    #define Configuration_Duplicate
  #else
    #define Configuration_Found
  #endif
#endif

#ifdef MegaSebenDRV8825_ON
  #ifdef Configuration_Found
    #define Configuration_Duplicate
  #else
    #define Configuration_Found
  #endif
#endif

#ifdef MegaSebenTMC2130_ON
  #ifdef Configuration_Found
    #define Configuration_Duplicate
  #else
    #define Configuration_Found
  #endif
#endif

#ifdef MegaEq3D_ON
  #ifdef Configuration_Found
    #define Configuration_Duplicate
  #else
    #define Configuration_Found
  #endif
#endif

#ifdef MegaEq3DA4988_ON
  #ifdef Configuration_Found
    #define Configuration_Duplicate
  #else
    #define Configuration_Found
  #endif
#endif

#ifdef MegaEq3DTMC2130_ON
  #ifdef Configuration_Found
    #define Configuration_Duplicate
  #else
    #define Configuration_Found
  #endif
#endif

#ifdef MyCNC30_ON
  #ifdef Configuration_Found
    #define Configuration_Duplicate
  #else
    #define Configuration_Found
  #endif
#endif

#ifdef Configuration_Duplicate
  #error "ONLY ONE config can be enabled with _ON."
#endif

#endif 


