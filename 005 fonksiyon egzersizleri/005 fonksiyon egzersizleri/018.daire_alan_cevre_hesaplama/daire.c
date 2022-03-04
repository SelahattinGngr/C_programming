#include<stdio.h>
#include<stdlib.h>
#define pi 3.14
void	hesapla(float yaricap)
{
	float	alan,cevre;
	
	alan=pi*yaricap*yaricap;
	cevre=2*pi*yaricap;
	printf("dairenin alani= %.2f\n",alan);
	printf("dairenin cevresi= %.2f",cevre);
}
