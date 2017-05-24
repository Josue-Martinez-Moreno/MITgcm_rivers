C ********************************************************************
C ***                     Calender Package                         ***
C ********************************************************************
C 
C CPP flags controlling which code is included in the files that
C will be compiled.

CPH >>>>>> THERE ARE NO MORE CAL OPTIONS TO BE SET <<<<<<

C ********************************************************************
C ***             External forcing Package                         ***
C ********************************************************************
C 
C o Include/exclude the external forcing package. To use this package,
C   you have to include the calendar tool as well. KPP can be switched
C   on or off. The implementation automatically takes care of this.
#define INCLUDE_EXTERNAL_FORCING_PACKAGE

C   Do more printout for the protocol file than usual.
#define EXF_VERBOSE

C   Bulk formulae related flags.
 #define ALLOW_RUNOFF
 #define ALLOW_DOWNWARD_RADIATION
 #define ALLOW_ATM_TEMP
 #define ALLOW_ATM_WIND
 #if (defined (ALLOW_ATM_TEMP) || \
     defined (ALLOW_ATM_WIND))
  #define ALLOW_BULKFORMULAE
 #endif

C   Relaxation to monthly climatologies.
#undef ALLOW_CLIMTEMP_RELAXATION
#undef ALLOW_CLIMSALT_RELAXATION
#define ALLOW_CLIMSST_RELAXATION
#define ALLOW_CLIMSSS_RELAXATION

#define EXF_INTERP_USE_DYNALLOC
#define USE_EXF_INTERPOLATION
