#include<stdio.h>
#include<stdlib.h>

void	birlestir(int A[],int B[],int C[],int N,int K);

int	main()
{
	int	i,N,K;
	printf("1. diziniz kac elemanli olacaktir\n");
	scanf("%d",&N);
	int	dizi1[N];
	for(i=1;i<=N;i++)
	{
		printf("dizinin %d. elemani\n",i);
		scanf("%d",&dizi1[i]);
	}
	printf("\n2. diziniz kac elemanli olacaktir\n");
	scanf("%d",&K);
	int	dizi2[K];
	for(i=1;i<=K;i++)
	{
		printf("dizinizin %d. elemani\n",i);
		scanf("%d",&dizi2[i]);
	}
	int	dizi3[N+K];
	birlestir(dizi1,dizi2,dizi3,N,K);
}
