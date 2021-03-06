/**
 ****************************************************************************************
 *
 * @file retcode.h
 *
 * @brief Header file - BLEDLL.
 *
 * Copyright (C) ViewTool 2018
 *
 * $Rev: $
 *
 ****************************************************************************************
 */

#ifndef _RETCODE_H
#define _RETCODE_H



typedef unsigned int DLDRESULT;

#define MAKE_DRESULT(sev,fac,code) \
((DLDRESULT) (((unsigned long)(sev)<<31) | ((unsigned long)(fac)<<16) | ((unsigned long)(code))) )

#define MAKE_RET_RESULT(sev,fac,code) MAKE_DRESULT(sev, 4,        \
((fac << 6) | (code)))
//Error code
#define PR_GLO 0  /* General errors                             */
#define PR_USB 1  /* USB errors                             */
#define PR_I2C 2  /* I2C errors                             */
#define PR_MSC 3  /* Other errors                             */
#define PR_FIL 4  /* File errors     */
#define PR_COM 5  /* COM communication errors */

#define RET_OK           0
#define RET_FALSE        1

#define RET_GEN_BUFOVERFLOW          MAKE_RET_RESULT(1,PR_GLO,0)                  // 80040000
#define RET_GEN_TIMEOUT        MAKE_RET_RESULT(1,PR_GLO,1)                  // 80040001
#define RET_GEN_ERRPARAM        MAKE_RET_RESULT(1,PR_GLO,2)                  // 80040002
#define RET_USB_WRITEFAIL          MAKE_RET_RESULT(1,PR_USB,0)                  // 80040040
#define RET_USB_READFAIL          MAKE_RET_RESULT(1,PR_USB,1)                  // 80040041
#define RET_USB_CMDERROR          MAKE_RET_RESULT(1,PR_USB,2)                  // 80040042
#define RET_USB_CMD2ERROR          MAKE_RET_RESULT(1,PR_USB,3)                  // 80040043
#define RET_USB_READTIMEOUT	       MAKE_RET_RESULT(1,PR_USB,4)                  // 80040044
#define RET_USB_WRITETIMEOUT	       MAKE_RET_RESULT(1,PR_USB,5)                  // 80040045
#define RET_USB_READILL	       MAKE_RET_RESULT(1,PR_USB,6)                  // 80040046
#define RET_USB_WRITEILL	       MAKE_RET_RESULT(1,PR_USB,7)                  // 80040047
#define RET_USB_OPENFAIL    MAKE_RET_RESULT(1,PR_USB,8)                  // 80040048

#define RET_FIL_TOOLARGE          MAKE_RET_RESULT(1,PR_FIL,0)                  // 80040100
#define RET_FIL_READFAIL          MAKE_RET_RESULT(1,PR_FIL,1)                  // 80040101
#define RET_FIL_ERRLINE          MAKE_RET_RESULT(1,PR_FIL,2)                  // 80040102
#define RET_FIL_ERRSUM          MAKE_RET_RESULT(1,PR_FIL,3)                  // 80040103
#define RET_FIL_ERRTAIL          MAKE_RET_RESULT(1,PR_FIL,4)                  // 80040104
#define RET_FIL_ERRMEM          MAKE_RET_RESULT(1,PR_FIL,5)                  // 80040105
#define RET_FIL_VERIFY          MAKE_RET_RESULT(1,PR_FIL,6)                  // 80040106

#define RET_COM_OPENFAIL          MAKE_RET_RESULT(1,PR_COM,0)                  
#define RET_COM_WRITEFAIL          MAKE_RET_RESULT(1,PR_COM,1)                 
#define RET_COM_READFAIL          MAKE_RET_RESULT(1,PR_COM,2)                 
#define RET_COM_SETFAIL          MAKE_RET_RESULT(1,PR_COM,3)  
#define RET_COM_ACCESS_DENIED    MAKE_RET_RESULT(1,PR_COM,4)

#define RET_I2C_READERROR1          MAKE_RET_RESULT(1,PR_I2C,0) 
#define RET_I2C_WRITEERROR1          MAKE_RET_RESULT(1,PR_I2C,1) 

#define RET_I2C_READERROR2          MAKE_RET_RESULT(1,PR_I2C,2) 
#define RET_I2C_WRITEERROR2          MAKE_RET_RESULT(1,PR_I2C,3) 

#define RET_I2C_READERROR3          MAKE_RET_RESULT(1,PR_I2C,4) 
#define RET_I2C_WRITEERROR3          MAKE_RET_RESULT(1,PR_I2C,5) 

int RetGetDesc(DLDRESULT ret,char * desc);

#endif
