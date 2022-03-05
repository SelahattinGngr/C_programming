#include<stdio.h>
#include<stdlib.h>

void	derece(int deger,char simge)
{
	float	f,c;
	if(simge=='f')
	{
		f=deger;
		c=(f-32)/1.8;
		printf("%.3f fahrenayt = %.3f celcius",f,c);
	}
	else if(simge=='c')
	{
		c=deger;
		f=c*1.8+32;
		printf("%.3f celcius = %.3f fahrenayt",c,f);
	}
}	
