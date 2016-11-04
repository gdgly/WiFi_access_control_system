/**--------------文件信息--------------------------------------------------------------------------------
**
** 文   件   名: stm32_crc.c
**
** 创   建   人: 张进科
**
** 文件创建日期: 2016 年 11 月 04 日
**
** 描        述: 计算CRC

** 日志:
2016.11.04  创建本文件
*********************************************************************************************************/

#ifndef _STM32_CRC_H_
#define _STM32_CRC_H_

#include <sys.h>

extern u32 CalcBlockCRC(u8 pBuffer[], u32 BufferLength);

#endif
