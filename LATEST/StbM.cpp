/*****************************************************/
/* File   : StbM.cpp                                 */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "StbM.h"

#include "StbM_EcuM.h"
#include "StbM_SchM.h"

/*****************************************************/
/* #DEFINES                                          */
/*****************************************************/

/*****************************************************/

/*****************************************************/
/* MACROS                                            */
/*****************************************************/

/*****************************************************/
/* TYPEDEFS                                          */
/*****************************************************/

/*****************************************************/
/* CONSTS                                            */
/*****************************************************/

/*****************************************************/
/* PARAMS                                            */
/*****************************************************/

/*****************************************************/
/* OBJECTS                                           */
/*****************************************************/
class_StbM_EcuM_Init StbM_EcuM_Init;
class_StbM_SchM_Main StbM_SchM_Main;
class_StbM StbM;

class_EcuM_Init_Client *EcuM_Init_Client_ptr_StbM = &StbM_EcuM_Init;
class_SchM_Main_Client *SchM_Main_Client_ptr_StbM = &StbM_SchM_Main;

/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
FUNC(void, STBM_CODE) class_StbM_EcuM_Init::InitFunction(void){
}

FUNC(void, STBM_CODE) class_StbM_SchM_Main::MainFunction(void){
}

/*****************************************************/
/* EOF                                               */
/*****************************************************/

