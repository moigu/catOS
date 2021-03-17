/**
 * @file catos_def.h
 * @brief 
 * @author amoigus (648137125@qq.com)
 * @version 0.1
 * @date 2021-03-17
 * 
 * @copyright Copyright (c) 2021
 * 
 * @par 修改日志：
 * Date              Version Author      Description
 * 2021-03-17 1.0    amoigus             基本类型定义
 */

#ifndef CATOS_DEF_H
#define CATOS_DEF_H

#define U32_MAX_VAL 0xffffffff

typedef signed char     int8_t;
typedef short int       int16_t;
typedef int             int32_t;

typedef unsigned char           uint8_t;
typedef unsigned short int      uint16_t;
typedef unsigned int            uint32_t;

//暂时不考虑支持64位
#ifdef __SUPPORT_64_BIT
typedef long int        int64_t;
#endif


#endif