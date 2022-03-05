#include<stdio.h>
#include<stdlib.h>

int	birlestir(int A[],int B[],int C[],int N,int K)
{
	int	i,j,sayac=1;
	for(i=1;i<=N;i++)
	{
		C[sayac]=A[i];
		sayac++;
	}
	for(j=1;j<=K;j++)
	{
		C[sayac]=B[j];
		sayac++;
	}
	printf("\ndizilerinizin birlestirilmis hali\n");
	for(sayac=1;sayac<=N+K;sayac++)
	{
		printf("%d\n",C[sayac]);
	}

}
