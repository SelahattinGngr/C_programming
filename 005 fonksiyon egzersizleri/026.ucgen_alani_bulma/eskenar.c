#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float	eskenar(int a,int b,int c)
{
	float	u,alan;
	float	k,i=1;
	u=(a+b+c)/2;
	alan=sqrt(u*(u-a)*(u-b)*(u-c));
	return alan;
}
