#include<stdio.h>
#include<stdlib.h>

int	ucgen_c(int	satir)
{
	int i,j,bosluk=satir-1;
	
	for(i=1;i<satir;i++)
	{
		for(j=1;j<=bosluk;j++)
		{
			printf(" ");
		}
		bosluk--;
		for(j=1;j<=2*i-1;j++)
		{
			printf("c");
		}
		printf("\n");
	}
}
