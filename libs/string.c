/* 
* @Author: into9
* @Date:   2015-08-07 14:19:15
* @Last Modified by:   into9
* @Last Modified time: 2015-08-08 11:09:54
*/
#include "string.h"

//复制函数
inline void memcpy(uint8_t *dest, const uint8_t *src, uint32_t len)
{
	for (; len != 0; len--) {
		*dest++ = *src++;
	}
}

//初始化函数
inline void memset(void *dest, uint8_t val, uint32_t len)
{
	uint8_t *dst = (uint8_t *)dest;

	for ( ; len != 0; len--) {
		*dst++ = val;
	}
}

//初始化为零
inline void bzero(void *dest, uint32_t len)
{
	memset(dest, 0, len);
}

//比较函数
inline int strcmp(const char *str1, const char *str2)
{
	while (*str1 && *str2 && (*str1++ == *str2++))
	      ;

	if (*str1 == '\0' && *str2 == '\0') {
	      return 0;
	}

	if (*str1 == '\0') {
	      return -1;
	}
	
	return 1;
}

//复制函数
inline char *strcpy(char *dest, const char *src)
{
	char *tmp = dest;

	while (*src) {
	      *dest++ = *src++;
	}

	*dest = '\0';
	
	return tmp;
}

// 连接函数
inline char *strcat(char *dest, const char *src)
{
	char *cp = dest;

	while (*cp) {
	      cp++;
	}

	while ((*cp++ = *src++))
	      ;

	return dest;
}

//计算长度
inline int strlen(const char *src)
{
	const char *eos = src;

        while (*eos++)
	      ;
	        
	return (eos - src - 1);
}
