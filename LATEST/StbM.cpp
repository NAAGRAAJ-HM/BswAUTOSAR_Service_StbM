/*****************************************************/
/* File   : StbM.cpp                                 */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "module.h"
#include "infStbM_EcuM.h"
#include "infStbM_Dcm.h"
#include "infStbM_SchM.h"

/*****************************************************/
/* #DEFINES                                          */
/*****************************************************/

/*****************************************************/
/* MACROS                                            */
/*****************************************************/

/*****************************************************/
/* TYPEDEFS                                          */
/*****************************************************/
class module_StbM:
      public abstract_module
{
   public:
      FUNC(void, STBM_CODE) InitFunction   (void);
      FUNC(void, STBM_CODE) DeInitFunction (void);
      FUNC(void, STBM_CODE) GetVersionInfo (void);
      FUNC(void, STBM_CODE) MainFunction   (void);
};

/*****************************************************/
/* CONSTS                                            */
/*****************************************************/

/*****************************************************/
/* PARAMS                                            */
/*****************************************************/

/*****************************************************/
/* OBJECTS                                           */
/*****************************************************/
module_StbM    StbM;
infEcuMClient* gptrinfEcuMClient_StbM = &StbM;
infDcmClient*  gptrinfDcmClient_StbM  = &StbM;
infSchMClient* gptrinfSchMClient_StbM = &StbM;

/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
FUNC(void, STBM_CODE) module_StbM::InitFunction(void){
}

FUNC(void, STBM_CODE) module_StbM::DeInitFunction(void){
}

FUNC(void, STBM_CODE) module_StbM::GetVersionInfo(void){
}

FUNC(void, STBM_CODE) module_StbM::MainFunction(void){
}

#include "StbM_Unused.h"

/*****************************************************/
/* EOF                                               */
/*****************************************************/

