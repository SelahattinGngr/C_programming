#include<stdio.h>
#include<stdlib.h>

int	ucgen_plus(int	satir)
{
	int i,j,bosluk=1;
	for(i=1;i<=satir-1;i++)
	{
		for(j=1;j<=bosluk;j++)
		{
			printf(" ");
		}
		bosluk++;
		for(j=1;j<=2*(satir-i)-1;j++)
		{
			printf("+");
		}
		printf("\n");
	}
}
