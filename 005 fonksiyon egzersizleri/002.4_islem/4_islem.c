#include<stdio.h>
#include<stdlib.h>

float	dort_islem(float a,float b,char islem)
{
	if(islem == '+')
	{
		return a+b;
	}
	else if(islem == '-')
	{
		return a-b;
	}
	else if(islem == '*')
	{
		return a*b;
	}
	else if(islem == '/')
	{
		return a/b;
	}
	else
	{
		printf("hatali operator girdiniz\n");
	}
}
