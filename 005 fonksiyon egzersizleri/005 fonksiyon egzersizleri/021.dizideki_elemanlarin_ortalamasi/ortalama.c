#include<stdio.h>
#include<stdlib.h>

void	ortalama(int *dizim,int boyut)
{
	int i,sonuc=0;
	for(i=0;i<boyut;i++)
	{
		sonuc+=dizim[i];
	}
	float ortalama=sonuc/boyut;
	printf("girdiginiz sayilarin ortalamasi= %.3f",ortalama);
}
