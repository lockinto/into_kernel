/*
* @Author: into9
* @Date:   2015-08-07 15:01:38
* @Last Modified by:   into9
* @Last Modified time: 2015-08-08 11:48:23
*/
#ifndef INCLUDE_VARGS_H_
#define INCLUDE_VARGS_H_

typedef __builtin_va_list va_list;

#define va_start(ap, last)         (__builtin_va_start(ap, last))
#define va_arg(ap, type)           (__builtin_va_arg(ap, type))
#define va_end(ap)

#endif
