#include "../includes/libr.h"
#include <math.h>
#include <string.h>
#include <stdbool.h>
int CharToDigit(char c)
{
	if ('0' <= c && c <= '9')
		return c - '0';
	if ('A' <= c && c <= 'Z')
		return c - 'A' + 10;
}

int StringToInt(const char* str, unsigned length, unsigned base)
{
	int result = 0;

	for(int i = 0; i < length; ++i)
	{
		result *= base;
		result += CharToDigit(str[i]);
	}
	return result;
}
unsigned SearchPoint(const char* str)
{
	for (int i = 0; i < strlen(str); ++i) 
	{
		if(str[i] == '.' || str[i] == ',') 
			return i;
	}
	return strlen(str);
}

double StringToDouble(const char* str, unsigned base)
{
	bool isNigaLive = false;
	if(str[0] == '-')
	{
		isNigaLive = true;
		++str;
	}
	if(str[0] == '+')
       	{
		++str;
	}
	unsigned pointIndex = SearchPoint(str);
	
	//123.145
	int fracPartLength = strlen(str) - pointIndex - 1;
	int intPart = StringToInt(str, pointIndex, base);
	int fracPart = StringToInt(&str[pointIndex + 1], fracPartLength, base);

	return intPart + fracPart * pow(base, -fracPartLength);
}
