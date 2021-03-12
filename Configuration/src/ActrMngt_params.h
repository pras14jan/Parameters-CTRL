/*
 * File: ActrMngt_params.h
 *
 * Code generated for Simulink model 'ActrMngt_swc'.
 *
 * Model version                  : 1.10
 * Simulink Coder version         : 9.2 (R2019b) 18-Jul-2019
 * C/C++ source code generated on : Fri Dec 18 13:29:00 2020
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Custom Processor->Custom Processor
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_ActrMngt_params_h_
#define RTW_HEADER_ActrMngt_params_h_
#include "rtwtypes.h"
#include "ActrMngt_swc_types.h"

/* Exported data declaration */

/* Declaration for custom storage class: Default */
extern boolean ActrMngt_AirCmprHaltNVH;/* '<S17>/Switch' */

/* Measurement signal. Notify if the air compressor usage is restricted due to NVH requirements. */
extern boolean ActrMngt_AirCmprHaltP;  /* '<S18>/Switch' */

/* Measurement signal. Notify if the air compressor usage is restricted due to high pressure in front of the compressor, i.e. gallery. */
extern boolean ActrMngt_AirCmprStsReq; /* '<S651>/Signal Conversion7' */

/* Measurement signal. Compressor status request, ON or OFF. */
extern AirCmprTStsTyp ActrMngt_AirCmprTSts;/* '<S19>/Chart' */

/* Measurement signal. Notify the temperature status of the air compressor, OK, Compressor Overheated, Compressor Overheated Critical. */
extern AirSuspTaskTyp ActrMngt_AirSuspTaskPrio;/* '<S420>/Switch1' */

/* Measurement signal. Notify which task is requested to be run, after arbitration based on priority. */
extern AirSuspTaskTyp ActrMngt_AirTankTask;/* '<S354>/Switch4' */

/* Measurement signal. Notify which task is requested to be run due to air tank related action request. */
extern boolean ActrMngt_AxleReqCrit;   /* '<S8>/Logical Operator' */

/* Measurement signal. Notify if a critical axle action request is detected. */
extern boolean ActrMngt_CmprActv;      /* '<S21>/RelationalOperator1' */

/* Measurement signal. Notify if the air compressor is detected to be active. */
extern boolean ActrMngt_CmprActvnIRestr;/* '<S20>/Constant10' */

/* Measurement signal. Notify if there is a restriction for air compressor usage due to overcurrent. */
extern boolean ActrMngt_CornrReqCrit;  /* '<S8>/Logical Operator1' */

/* Measurement signal. Notify if a critical corner action request is detected. */
extern DiagcAirSuspTaskReq ActrMngt_DiagcAirSuspTaskReq;/* '<S14>/Bus Creator' */

/* Measurement signal, diagnostics for air suspension task requests. */
extern AirSuspTaskTyp ActrMngt_HeiAdjTaskArbd;/* '<S411>/Switch1' */

/* Measurement signal. Notify which task is requested to be run, height adjustment related action request or height adjustment reset action request. */
extern AirSuspTaskTyp ActrMngt_HeiAdjmtPerAxleCritReq;/* '<S457>/Switch9' */

/* Measurement signal. Notify which task is requested to be run due to critical axle height adjustment request. */
extern AirSuspTaskTyp ActrMngt_HeiAdjmtPerAxleReq;/* '<S492>/Switch9' */

/* Measurement signal. Notify which task is requested to be run due to non critical axle height adjustment request. */
extern AirSuspTaskTyp ActrMngt_HeiAdjmtPerCornrCritReq;/* '<S527>/Switch9' */

/* Measurement signal. Notify which task is requested to be run due to critical corner height adjustment request. */
extern AirSuspTaskTyp ActrMngt_HeiAdjmtPerCornrReq;/* '<S581>/Switch9' */

/* Measurement signal. Notify which task is requested to be run due to non critical corner height adjustment request. */
extern AirSuspTaskTyp ActrMngt_HejAdjmtTaskReq;/* '<S447>/Switch' */

/* Measurement signal. Notify which task is requested to be run due to axle or corner adjustment requests. */
extern float32 ActrMngt_IReqForAirSprgVlvFrntLe;/* '<S651>/Signal Conversion' */

/* Measurement signal. Current request for air spring valve front left. */
extern float32 ActrMngt_IReqForAirSprgVlvFrntRi;/* '<S651>/Signal Conversion1' */

/* Measurement signal. Current request for air spring valve front right. */
extern float32 ActrMngt_IReqForAirSprgVlvReLe;/* '<S651>/Signal Conversion2' */

/* Measurement signal. Current request for air spring valve rear left. */
extern float32 ActrMngt_IReqForAirSprgVlvReRi;/* '<S651>/Signal Conversion3' */

/* Measurement signal. Current request for air spring valve rear right. */
extern float32 ActrMngt_IReqForAmbVlv; /* '<S651>/Signal Conversion4' */

/* Measurement signal. Current request for ambience valve. */
extern float32 ActrMngt_IReqForDualVolVlvFrntLe;/* '<S651>/Signal Conversion10' */

/* Measurement signal. Current request for dual volume valve front left. */
extern float32 ActrMngt_IReqForDualVolVlvFrntRi;/* '<S651>/Signal Conversion11' */

/* Measurement signal. Current request for dual volume valve front right. */
extern float32 ActrMngt_IReqForDualVolVlvReLe;/* '<S651>/Signal Conversion12' */

/* Measurement signal. Current request for dual volume valve rear left. */
extern float32 ActrMngt_IReqForDualVolVlvReRi;/* '<S651>/Signal Conversion13' */

/* Measurement signal. Current request for dual volume valve rear right. */
extern float32 ActrMngt_IReqForTankVlv;/* '<S651>/Signal Conversion5' */

/* Measurement signal. Current request for tank valve. */
extern AirSuspTaskTyp ActrMngt_PMeasReqArbd;/* '<S413>/Switch1' */

/* Measurement signal. Notify which pressure measurement request is arbitrated to run. */
extern AirSuspTaskTyp ActrMngt_PMeasTask;/* '<S352>/Switch2' */

/* Measurement signal. Notify which task is requested to be run due to pressure measurement action request. */
extern AirSuspTaskTyp ActrMngt_RgnActnArbd;/* '<S419>/Switch1' */

/* Measurement signal. Notify which regeneration action is arbitrated to run. */
extern AirSuspTaskTyp ActrMngt_TankTaskArbd;/* '<S421>/Switch8' */

/* Measurement signal. Notify which task is requested to be run, air tank related action request or tank reset action request. */
extern float32 ActrMngt_TiElpdForAirSprgEmptyFrnt;/* '<S119>/Product1' */

/* Measurement signal, timer for Air Spring Empty Front. */
extern float32 ActrMngt_TiElpdForAirSprgEmptyFrntLe;/* '<S120>/Product1' */

/* Measurement signal, timer for Air Spring Empty Front Left. */
extern float32 ActrMngt_TiElpdForAirSprgEmptyFrntRi;/* '<S121>/Product1' */

/* Measurement signal, timer for Air Spring Empty Front Right. */
extern float32 ActrMngt_TiElpdForAirSprgEmptyRe;/* '<S122>/Product1' */

/* Measurement signal, timer for Air Spring Empty Rear. */
extern float32 ActrMngt_TiElpdForAirSprgEmptyReLe;/* '<S123>/Product1' */

/* Measurement signal, timer for Air Spring Empty Rear Left. */
extern float32 ActrMngt_TiElpdForAirSprgEmptyReRi;/* '<S124>/Product1' */

/* Measurement signal, timer for Air Spring Empty Rear Right. */
extern float32 ActrMngt_TiElpdForAirSprgFillgFromTankFrnt;/* '<S125>/Product1' */

/* Measurement signal, timer for Air Spring Filling From Tank Front. */
extern float32 ActrMngt_TiElpdForAirSprgFillgFromTankFrntLe;/* '<S126>/Product1' */

/* Measurement signal, timer for Air Spring Filling From Tank Front Left. */
extern float32 ActrMngt_TiElpdForAirSprgFillgFromTankFrntRi;/* '<S127>/Product1' */

/* Measurement signal, timer for Air Spring Filling From Tank Front Right. */
extern float32 ActrMngt_TiElpdForAirSprgFillgFromTankRe;/* '<S128>/Product1' */

/* Measurement signal, timer for Air Spring Filling From Tank Rear. */
extern float32 ActrMngt_TiElpdForAirSprgFillgFromTankReLe;/* '<S129>/Product1' */

/* Measurement signal, timer for Air Spring Filling From Tank Rear Left. */
extern float32 ActrMngt_TiElpdForAirSprgFillgFromTankReRi;/* '<S130>/Product1' */

/* Measurement signal, timer for Air Spring Filling From Tank Rear Right. */
extern float32 ActrMngt_TiElpdForAirSprgFillgWithCmprFrnt;/* '<S131>/Product1' */

/* Measurement signal, timer for Air Spring Filling With Compressor Front. */
extern float32 ActrMngt_TiElpdForAirSprgFillgWithCmprFrntLe;/* '<S132>/Product1' */

/* Measurement signal, timer for Air Spring Filling With Compressor Front Left. */
extern float32 ActrMngt_TiElpdForAirSprgFillgWithCmprFrntRi;/* '<S133>/Product1' */

/* Measurement signal, timer for Air Spring Filling With Compressor Front Right. */
extern float32 ActrMngt_TiElpdForAirSprgFillgWithCmprRe;/* '<S134>/Product1' */

/* Measurement signal, timer for Air Spring Filling With Compressor Rear. */
extern float32 ActrMngt_TiElpdForAirSprgFillgWithCmprReLe;/* '<S135>/Product1' */

/* Measurement signal, timer for Air Spring Filling With Compressor Rear Left. */
extern float32 ActrMngt_TiElpdForAirSprgFillgWithCmprReRi;/* '<S136>/Product1' */

/* Measurement signal, timer for Air Spring Filling With Compressor Rear Right. */
extern float32 ActrMngt_TiElpdForAirSprgOpenVlvFrnt;/* '<S137>/Product1' */

/* Measurement signal, timer for Air Spring Open Valve Front. */
extern float32 ActrMngt_TiElpdForAirSprgOpenVlvFrntLe;/* '<S138>/Product1' */

/* Measurement signal, timer for Air Spring Open Valve Front Right. */
extern float32 ActrMngt_TiElpdForAirSprgOpenVlvFrntRi;/* '<S139>/Product1' */

/* Measurement signal, timer for Air Spring Open Valve Front Left. */
extern float32 ActrMngt_TiElpdForAirSprgOpenVlvRe;/* '<S140>/Product1' */

/* Measurement signal, timer for Air Spring Open Valve Rear. */
extern float32 ActrMngt_TiElpdForAirSprgOpenVlvReLe;/* '<S141>/Product1' */

/* Measurement signal, timer for Air Spring Open Valve Rear Left. */
extern float32 ActrMngt_TiElpdForAirSprgOpenVlvReRi;/* '<S142>/Product1' */

/* Measurement signal, timer for Air Spring Open Valve Rear Right. */
extern float32 ActrMngt_TiElpdForAirTankEmpty;/* '<S144>/Product1' */

/* Measurement signal, timer for Air Tank Empty. */
extern float32 ActrMngt_TiElpdForAirTankFillg;/* '<S282>/Product1' */

/* Measurement signal, timer for Air Tank Filling. */
extern float32 ActrMngt_TiElpdForHalt; /* '<S147>/Product1' */

/* Measurement signal, timer for halting a requested task. */
extern float32 ActrMngt_TiElpdForOpenVlvAmb;/* '<S149>/Product1' */

/* Measurement signal, timer for Open Valve Ambience. */
extern float32 ActrMngt_TiElpdForOpenVlvBoost;/* '<S150>/Product1' */

/* Measurement signal, timer for Open Valve Boost. */
extern float32 ActrMngt_TiElpdForOpenVlvTank;/* '<S151>/Product1' */

/* Measurement signal, timer for Open Valve Tank. */
extern float32 LvlgCtrl4Cornr_ActrMngt_ActrMngtTiSample;/* Referenced by:
                                                         * '<S64>/Constant'
                                                         * '<S155>/Constant'
                                                         * '<S156>/Constant'
                                                         * '<S163>/Constant'
                                                         * '<S164>/Constant'
                                                         * '<S167>/Constant'
                                                         * '<S169>/Constant'
                                                         * '<S175>/Constant'
                                                         * '<S176>/Constant'
                                                         * '<S180>/Constant'
                                                         * '<S182>/Constant'
                                                         * '<S187>/Constant'
                                                         * '<S188>/Constant'
                                                         * '<S191>/Constant'
                                                         * '<S193>/Constant'
                                                         * '<S196>/Constant'
                                                         * '<S199>/Constant'
                                                         * '<S202>/Constant'
                                                         * '<S205>/Constant'
                                                         * '<S209>/Constant'
                                                         * '<S211>/Constant'
                                                         * '<S217>/Constant'
                                                         * '<S219>/Constant'
                                                         * '<S225>/Constant'
                                                         * '<S227>/Constant'
                                                         * '<S233>/Constant'
                                                         * '<S235>/Constant'
                                                         * '<S241>/Constant'
                                                         * '<S243>/Constant'
                                                         * '<S250>/Constant'
                                                         * '<S252>/Constant'
                                                         * '<S256>/Constant'
                                                         * '<S259>/Constant'
                                                         * '<S262>/Constant'
                                                         * '<S265>/Constant'
                                                         * '<S268>/Constant'
                                                         * '<S271>/Constant'
                                                         * '<S280>/Constant'
                                                         * '<S299>/Constant'
                                                         * '<S305>/Constant'
                                                         * '<S310>/Constant'
                                                         * '<S313>/Constant'
                                                         * '<S316>/Constant'
                                                         * '<S658>/Constant'
                                                         * '<S666>/Constant'
                                                         * '<S678>/Constant'
                                                         * '<S688>/Constant'
                                                         * '<S36>/Constant'
                                                         * '<S48>/Constant'
                                                         * '<S52>/Constant'
                                                         * '<S285>/Constant'
                                                         * '<S286>/Constant'
                                                         * '<S295>/Constant'
                                                         */

/* Sample time of Actuator Management SWC. */
extern boolean LvlgCtrl4Cornr_ActrMngt_ActvtTankFillgTiOutRstActn;/* Referenced by: '<S274>/Constant' */

/* Parameter to activate or deactivate the task time out reset action. */
extern boolean LvlgCtrl4Cornr_ActrMngt_AirCmprActvnManReq;/* Referenced by: '<S710>/Constant' */

/* Manual request for air compressor activation. */
extern float32 LvlgCtrl4Cornr_ActrMngt_AirDryCntDec;/* Referenced by: '<S745>/Constant' */

/* Value for air dryer counter decrease at each time step when air dryer regeneration happens */
extern float32 LvlgCtrl4Cornr_ActrMngt_AirDryCntInc;/* Referenced by: '<S746>/Constant' */

/* Value for air dryer counter increase at each time step when compressor is active */
extern float32 LvlgCtrl4Cornr_ActrMngt_AirDryThdHi;/* Referenced by: '<S747>/Constant' */

/* high value limit for the air dryer counter */
extern float32 LvlgCtrl4Cornr_ActrMngt_AirDryThdLo;/* Referenced by: '<S748>/Constant' */

/* low value limit for the air dryer counter */
extern float32 LvlgCtrl4Cornr_ActrMngt_AirPHiThdForCmprStrt;/* Referenced by: '<S29>/Constant' */

/* Air pressure after compressor high threshold above which the compressor is not allowed to switch from off to on. */
extern float32 LvlgCtrl4Cornr_ActrMngt_AirPLoThdForCmprStrt;/* Referenced by: '<S30>/Constant' */

/* Air pressure after compressor low threshold below which a restriction for the compressor to switch from off to on is lifted. */
extern float32 LvlgCtrl4Cornr_ActrMngt_AirSuspManIReqFlg;/* Referenced by: '<S12>/Constant' */

/* Manual current request on valves activation flag. */
extern AirSuspTaskTyp LvlgCtrl4Cornr_ActrMngt_AirSuspManTaskReq;/* Referenced by: '<S319>/Constant' */

/* Manual task request. */
extern boolean LvlgCtrl4Cornr_ActrMngt_AirSuspManTaskReqFlg;/* Referenced by: '<S320>/Constant' */

/* Manual task request activation flag. */
extern float32 LvlgCtrl4Cornr_ActrMngt_CmprIThdForStsActv;/* Referenced by: '<S46>/Constant' */

/* Electrical current drawn by compressor above which the compressor is considered as started. */
extern float32 LvlgCtrl4Cornr_ActrMngt_CmprTiOverThdForStsActv;/* Referenced by: '<S49>/Constant' */

/* Duration that the compressor current needs to be over the specified threshold in order for the compressor status to be set to Active. */
extern float32 LvlgCtrl4Cornr_ActrMngt_IAirSprgVlvMinAct;/* Referenced by: '<S61>/Constant' */

/* Minimum current to to set the active flag  */
extern float32 LvlgCtrl4Cornr_ActrMngt_IHldForAirSprgVlv;/* Referenced by: '<S661>/Constant' */

/* Hold current for maintaining the air spring valves open. */
extern float32 LvlgCtrl4Cornr_ActrMngt_IHldForAmbVlv;/* Referenced by: '<S669>/Constant' */

/* Hold current for maintaining the ambient valve open. */
extern float32 LvlgCtrl4Cornr_ActrMngt_IHldForDualVolVlv;/* Referenced by: '<S681>/Constant' */

/* Hold current for maintaining the dual volume valves closed. */
extern float32 LvlgCtrl4Cornr_ActrMngt_IHldForRvsgVlv;/* Referenced by: '<S691>/Constant' */

/* Hold current for maintaining the reversing valves open. */
extern float32 LvlgCtrl4Cornr_ActrMngt_IHldForTankVlv;/* Referenced by: '<S698>/Constant' */

/* Hold current for maintaining the tank valve open. */
extern float32 LvlgCtrl4Cornr_ActrMngt_IPushForAirSprgVlv;/* Referenced by: '<S662>/Constant' */

/* Push current for activating the air spring valves. */
extern float32 LvlgCtrl4Cornr_ActrMngt_IPushForAmbVlv;/* Referenced by: '<S670>/Constant' */

/* Push current for activating the ambient valve. */
extern float32 LvlgCtrl4Cornr_ActrMngt_IPushForDualVolVlv;/* Referenced by: '<S682>/Constant' */

/* Push current for activating the dual volume valves. */
extern float32 LvlgCtrl4Cornr_ActrMngt_IPushForRvsgVlv;/* Referenced by: '<S696>/Constant' */

/* Push current for activating the reversing valves. */
extern float32 LvlgCtrl4Cornr_ActrMngt_IPushForTankVlv;/* Referenced by: '<S699>/Constant' */

/* Push current for activating the tank valve. */
extern float32 LvlgCtrl4Cornr_ActrMngt_IStartForAirSprgVlv;/* Referenced by: '<S663>/Constant' */

/* Start current for ramping up the push current to the air spring valves */
extern float32 LvlgCtrl4Cornr_ActrMngt_IStartForAmbVlv;/* Referenced by: '<S671>/Constant' */

/* Start current for ramping up the push current to the ambient valve */
extern float32 LvlgCtrl4Cornr_ActrMngt_IStartForDualVolVlv;/* Referenced by: '<S683>/Constant' */

/* Start current for ramping up the push current to the dual volume valve */
extern float32 LvlgCtrl4Cornr_ActrMngt_IStartForTankVlv;/* Referenced by:
                                                         * '<S692>/Constant'
                                                         * '<S694>/Constant'
                                                         */

/* Start current for ramping up the push current to the tank valve */
extern float32 LvlgCtrl4Cornr_ActrMngt_IVlvManReqAirSprgFrntLe;/* Referenced by: '<S705>/Constant' */

/* Manual current request on air spring valve front left. */
extern float32 LvlgCtrl4Cornr_ActrMngt_IVlvManReqAirSprgFrntRi;/* Referenced by: '<S711>/Constant' */

/* Manual current request on air spring valve front right. */
extern float32 LvlgCtrl4Cornr_ActrMngt_IVlvManReqAirSprgReLe;/* Referenced by: '<S712>/Constant' */

/* Manual current request on air spring valve rear left. */
extern float32 LvlgCtrl4Cornr_ActrMngt_IVlvManReqAirSprgReRi;/* Referenced by: '<S713>/Constant' */

/* Manual current request on air spring valve rear right. */
extern float32 LvlgCtrl4Cornr_ActrMngt_IVlvManReqAmb;/* Referenced by: '<S714>/Constant' */

/* Manual current request on ambience valve. */
extern float32 LvlgCtrl4Cornr_ActrMngt_IVlvManReqBoost;/* Referenced by: '<S716>/Constant' */

/* Manual current request on boost valve. */
extern float32 LvlgCtrl4Cornr_ActrMngt_IVlvManReqMultiVolFrntLe;/* Referenced by: '<S706>/Constant' */

/* Manual current request on multivolume valve front left. */
extern float32 LvlgCtrl4Cornr_ActrMngt_IVlvManReqMultiVolFrntRi;/* Referenced by: '<S707>/Constant' */

/* Manual current request on multivolume valve front right. */
extern float32 LvlgCtrl4Cornr_ActrMngt_IVlvManReqMultiVolReLe;/* Referenced by: '<S708>/Constant' */

/* Manual current request on multivolume valve rear left. */
extern float32 LvlgCtrl4Cornr_ActrMngt_IVlvManReqMultiVolReRi;/* Referenced by: '<S709>/Constant' */

/* Manual current request on multivolume valve rear right. */
extern float32 LvlgCtrl4Cornr_ActrMngt_IVlvManReqTank;/* Referenced by: '<S715>/Constant' */

/* Manual current request on tank valve. */
extern uint8 LvlgCtrl4Cornr_ActrMngt_TankFillgTiOutCntThd;/* Referenced by: '<S275>/Constant' */

/* Tank filling time out count threshold */
extern float32 LvlgCtrl4Cornr_ActrMngt_TeAirCmprHiLimResFill;/* Referenced by: '<S37>/Constant' */

/* Compressor overheating monitor temperature hysteresis high limit for reservoir filling */
extern float32 LvlgCtrl4Cornr_ActrMngt_TeAirCmprHiLimSprFill;/* Referenced by: '<S38>/Constant' */

/* Compressor overheating monitor temperature hysteresis high limit for spring filling */
extern float32 LvlgCtrl4Cornr_ActrMngt_TeAirCmprLoLimResFill;/* Referenced by: '<S40>/Constant' */

/* Compressor overheating monitor temperature hysteresis low limit for reservoir filling */
extern float32 LvlgCtrl4Cornr_ActrMngt_TeAirCmprLoLimSprFill;/* Referenced by: '<S35>/Constant' */

/* Compressor overheating monitor temperature hysteresis low limit for spring filling */
extern float32 LvlgCtrl4Cornr_ActrMngt_TeIHoldHiLim;/* Referenced by: '<S701>/Constant' */

/* Temperature limit to switch the hold current to the high temperature mode */
extern float32 LvlgCtrl4Cornr_ActrMngt_TiClsForAmbVlvAftCmprStrt;/* Referenced by:
                                                                  * '<S213>/Constant'
                                                                  * '<S221>/Constant'
                                                                  * '<S230>/Constant'
                                                                  * '<S236>/Constant'
                                                                  * '<S246>/Constant'
                                                                  * '<S254>/Constant'
                                                                  * '<S288>/Constant'
                                                                  */

/* Duration after which the ambience valve will close after the compressor has started, for performing axle or corner raising with compressor or tank filling. */
extern float32 LvlgCtrl4Cornr_ActrMngt_TiClsForAmbVlvForIdle;/* Referenced by:
                                                              * '<S306>/Constant'
                                                              * '<S296>/Constant'
                                                              */

/* Duration after which the ambience valve will close after it has opened when returning to Idle. */
extern float32 LvlgCtrl4Cornr_ActrMngt_TiForCmprStopEntrIdle;/* Referenced by:
                                                              * '<S304>/Constant'
                                                              * '<S294>/Constant'
                                                              */

/* Duration after which the compressor will start running when returning to Idle */
extern float32 LvlgCtrl4Cornr_ActrMngt_TiLimForAirSprgEmptyFrnt;/* Referenced by: '<S157>/Constant' */

/* Time limit for Air Spring Empty Front. */
extern float32 LvlgCtrl4Cornr_ActrMngt_TiLimForAirSprgEmptyFrntLe;/* Referenced by: '<S162>/Constant' */

/* Time limit for Air Spring Empty Front Left. */
extern float32 LvlgCtrl4Cornr_ActrMngt_TiLimForAirSprgEmptyFrntRi;/* Referenced by: '<S168>/Constant' */

/* Time limit for Air Spring Empty Front Right. */
extern float32 LvlgCtrl4Cornr_ActrMngt_TiLimForAirSprgEmptyRe;/* Referenced by: '<S174>/Constant' */

/* Time limit for Air Spring Empty Rear. */
extern float32 LvlgCtrl4Cornr_ActrMngt_TiLimForAirSprgEmptyReLe;/* Referenced by: '<S181>/Constant' */

/* Time limit for Air Spring Empty Rear Left. */
extern float32 LvlgCtrl4Cornr_ActrMngt_TiLimForAirSprgEmptyReRi;/* Referenced by: '<S186>/Constant' */

/* Time limit for Air Spring Empty Rear Right. */
extern float32 LvlgCtrl4Cornr_ActrMngt_TiLimForAirSprgFillgFromTankFrnt;/* Referenced by: '<S190>/Constant' */

/* Time limit for Air Spring Filling From Tank Front. */
extern float32 LvlgCtrl4Cornr_ActrMngt_TiLimForAirSprgFillgFromTankFrntLe;/* Referenced by: '<S194>/Constant' */

/* Time limit for Air Spring Filling From Tank Front Left. */
extern float32 LvlgCtrl4Cornr_ActrMngt_TiLimForAirSprgFillgFromTankFrntRi;/* Referenced by: '<S197>/Constant' */

/* Time limit for Air Spring Filling From Tank Front Right. */
extern float32 LvlgCtrl4Cornr_ActrMngt_TiLimForAirSprgFillgFromTankRe;/* Referenced by: '<S200>/Constant' */

/* Time limit for Air Spring Filling From Tank Rear. */
extern float32 LvlgCtrl4Cornr_ActrMngt_TiLimForAirSprgFillgFromTankReLe;/* Referenced by: '<S203>/Constant' */

/* Time limit for Air Spring Filling From Tank Rear Left. */
extern float32 LvlgCtrl4Cornr_ActrMngt_TiLimForAirSprgFillgFromTankReRi;/* Referenced by: '<S206>/Constant' */

/* Time limit for Air Spring Filling From Tank Rear Right. */
extern float32 LvlgCtrl4Cornr_ActrMngt_TiLimForAirSprgFillgWithCmprFrnt;/* Referenced by: '<S210>/Constant' */

/* Time limit for Air Spring Filling With Compressor Front. */
extern float32 LvlgCtrl4Cornr_ActrMngt_TiLimForAirSprgFillgWithCmprFrntLe;/* Referenced by: '<S218>/Constant' */

/* Time limit for Air Spring Filling With Compressor Front Left. */
extern float32 LvlgCtrl4Cornr_ActrMngt_TiLimForAirSprgFillgWithCmprFrntRi;/* Referenced by: '<S226>/Constant' */

/* Time limit for Air Spring Filling With Compressor Front Right. */
extern float32 LvlgCtrl4Cornr_ActrMngt_TiLimForAirSprgFillgWithCmprRe;/* Referenced by: '<S234>/Constant' */

/* Time limit for Air Spring Filling With Compressor Rear. */
extern float32 LvlgCtrl4Cornr_ActrMngt_TiLimForAirSprgFillgWithCmprReLe;/* Referenced by: '<S242>/Constant' */

/* Time limit for Air Spring Filling With Compressor Rear Left. */
extern float32 LvlgCtrl4Cornr_ActrMngt_TiLimForAirSprgFillgWithCmprReRi;/* Referenced by: '<S249>/Constant' */

/* Time limit for Air Spring Filling With Compressor Rear Right. */
extern float32 LvlgCtrl4Cornr_ActrMngt_TiLimForAirSprgOpenVlvFrnt;/* Referenced by: '<S257>/Constant' */

/* Time limit for Air Spring Open Valve Front. */
extern float32 LvlgCtrl4Cornr_ActrMngt_TiLimForAirSprgOpenVlvFrntLe;/* Referenced by: '<S260>/Constant' */

/* Time limit for Air Spring Open Valve Front Right. */
extern float32 LvlgCtrl4Cornr_ActrMngt_TiLimForAirSprgOpenVlvFrntRi;/* Referenced by: '<S263>/Constant' */

/* Time limit for Air Spring Open Valve Front Left. */
extern float32 LvlgCtrl4Cornr_ActrMngt_TiLimForAirSprgOpenVlvRe;/* Referenced by: '<S266>/Constant' */

/* Time limit for Air Spring Open Valve Rear. */
extern float32 LvlgCtrl4Cornr_ActrMngt_TiLimForAirSprgOpenVlvReLe;/* Referenced by: '<S269>/Constant' */

/* Time limit for Air Spring Open Valve Rear Left. */
extern float32 LvlgCtrl4Cornr_ActrMngt_TiLimForAirSprgOpenVlvReRi;/* Referenced by: '<S272>/Constant' */

/* Time limit for Air Spring Open Valve Rear Right. */
extern float32 LvlgCtrl4Cornr_ActrMngt_TiLimForAirTankEmpty;/* Referenced by: '<S281>/Constant' */

/* Time limit for Air Tank Empty. */
extern float32 LvlgCtrl4Cornr_ActrMngt_TiLimForAirTankFillg;/* Referenced by: '<S289>/Constant' */

/* Time limit for Air Tank Filling. */
extern float32 LvlgCtrl4Cornr_ActrMngt_TiLimForHalt;/* Referenced by: '<S300>/Constant' */

/* Time limit for halting a requested task. */
extern float32 LvlgCtrl4Cornr_ActrMngt_TiLimForOpenVlvAmb;/* Referenced by: '<S311>/Constant' */

/* Time limit for Open Valve Ambience. */
extern float32 LvlgCtrl4Cornr_ActrMngt_TiLimForOpenVlvBoost;/* Referenced by: '<S314>/Constant' */

/* Time limit for Open Valve Boost. */
extern float32 LvlgCtrl4Cornr_ActrMngt_TiLimForOpenVlvTank;/* Referenced by: '<S317>/Constant' */

/* Time limit for Open Valve Tank. */
extern float32 LvlgCtrl4Cornr_ActrMngt_TiOpenForAirSprgVlvAftAmbVlvClsd;/* Referenced by:
                                                                      * '<S214>/Constant'
                                                                      * '<S222>/Constant'
                                                                      * '<S228>/Constant'
                                                                      * '<S238>/Constant'
                                                                      * '<S244>/Constant'
                                                                      * '<S251>/Constant'
                                                                      */

/* Duration after which the air spring valves will open after the ambience valve has closed, for performing axle or corner raising with compressor. */
extern float32 LvlgCtrl4Cornr_ActrMngt_TiOpenForAmbVlvForIdle;/* Referenced by:
                                                               * '<S303>/Constant'
                                                               * '<S293>/Constant'
                                                               */

/* Duration after which the ambience valve will open when returning to Idle. */
extern float32 LvlgCtrl4Cornr_ActrMngt_TiOpenForTankVlvAftAmbVlvClsd;/* Referenced by: '<S290>/Constant' */

/* Duration after which the air tank valve will open after the ambience valve has closed, for performing tank filling. */
extern float32 LvlgCtrl4Cornr_ActrMngt_TiOpenIniForAmbVlv;/* Referenced by:
                                                           * '<S212>/Constant'
                                                           * '<S220>/Constant'
                                                           * '<S229>/Constant'
                                                           * '<S237>/Constant'
                                                           * '<S245>/Constant'
                                                           * '<S253>/Constant'
                                                           * '<S287>/Constant'
                                                           */

/* Duration of initial opening of ambience valve for venting before performing axle raising with compressor. */
extern float32 LvlgCtrl4Cornr_ActrMngt_TiOpenIniForAmbVlvForAxleLowr;/* Referenced by:
                                                                      * '<S158>/Constant'
                                                                      * '<S161>/Constant'
                                                                      * '<S170>/Constant'
                                                                      * '<S173>/Constant'
                                                                      * '<S179>/Constant'
                                                                      * '<S185>/Constant'
                                                                      */

/* Duration of initial opening of ambience valve for venting before performing axle lowering. */
extern float32 LvlgCtrl4Cornr_ActrMngt_TiPushNoiseForAirSprgVlv;/* Referenced by: '<S660>/Constant' */

/* Duration of push current request for the air spring valves. */
extern float32 LvlgCtrl4Cornr_ActrMngt_TiPushNoiseForAmbVlv;/* Referenced by: '<S668>/Constant' */

/* Duration of push current request for the ambient valve. */
extern float32 LvlgCtrl4Cornr_ActrMngt_TiPushNoiseForDualVolVlv;/* Referenced by: '<S680>/Constant' */

/* Duration of push current request for the dual volume valves. */
extern float32 LvlgCtrl4Cornr_ActrMngt_TiPushNoiseForRvsgVlv;/* Referenced by: '<S690>/Constant' */

/* Duration of push current request for the reversing valves. */
extern float32 LvlgCtrl4Cornr_ActrMngt_TiPushNoiseForTankVlv;/* Referenced by: '<S697>/Constant' */

/* Duration of push current request for the tank valve. */
extern float32 LvlgCtrl4Cornr_ActrMngt_TiRampForAirSprgVlv;/* Referenced by: '<S664>/Constant' */

/* Ramp time for ramping up the push current to the air spring valves */
extern float32 LvlgCtrl4Cornr_ActrMngt_TiRampForAmbVlv;/* Referenced by: '<S672>/Constant' */

/* Ramp time for ramping up the push current to the ambient valve */
extern float32 LvlgCtrl4Cornr_ActrMngt_TiRampForDualVolVlv;/* Referenced by: '<S684>/Constant' */

/* Ramp time for ramping up the push current to the dual volume valve */
extern float32 LvlgCtrl4Cornr_ActrMngt_TiRampForTankVlv;/* Referenced by:
                                                         * '<S693>/Constant'
                                                         * '<S695>/Constant'
                                                         */

/* Ramp time for ramping up the push current to the tank valve */
extern float32 LvlgCtrl4Cornr_ActrMngt_rtCoolOff;/* Referenced by: '<S65>/Constant' */

/* Cool off factor for air spring valves */
extern float32 LvlgCtrl4Cornr_ActrMngt_rtIHoldTempHigh;/* Referenced by: '<S702>/Constant' */

/* Gain factor for the hold current in the high temperature mode */
extern float32 LvlgCtrl4Cornr_ActrMngt_rtIHoldTempNorm;/* Referenced by: '<S703>/Constant' */

/* Gain factor for the hold current in the normal mode */
extern float32 LvlgCtrl4Cornr_ActrMngt_tCmprMinActv;/* Referenced by: '<S53>/Constant' */

/* Minimum compressor activation time */
extern float32 LvlgCtrl4Cornr_ActrMngt_tDutyLimResFill;/* Referenced by: '<S41>/Constant' */

/* Maximum compressor duty on time for reservoir filling */
extern float32 LvlgCtrl4Cornr_ActrMngt_tDutyLimSprFill;/* Referenced by: '<S42>/Constant' */

/* Maximum compressor duty on time for spring filling */
extern float32 LvlgCtrl4Cornr_ActrMngt_tDutyReset;/* Referenced by: '<S39>/Constant' */

/* Compressor overheating monitor time to reset time counter when compressor is turned off  */
extern float32 LvlgCtrl4Cornr_ActrMngt_tMaxAvailActv;/* Referenced by: '<S63>/Constant' */

/* Maximum available activation time for air spring valves */
extern float32 LvlgCtrl4Cornr_ActrMngt_tReActivateLim;/* Referenced by: '<S66>/Constant' */

/* Limit to enable reactivation of air spring valves */
extern float32 LvlgCtrl4Cornr_ActrMngt_tReactivateResFill;/* Referenced by: '<S43>/Constant' */

/* Cool off time for compressor until the compressor may be reactivated after an overheating event during reservoir filling */
extern float32 LvlgCtrl4Cornr_ActrMngt_tReactivateSprFill;/* Referenced by: '<S44>/Constant' */

/* Cool off time for compressor until the compressor may be reactivated after an overheating event during spring filling */
#endif                                 /* RTW_HEADER_ActrMngt_params_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
