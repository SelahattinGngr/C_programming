#include<stdio.h>
#include<stdlib.h>

int	main()
{
	float	N,i=1;
	float	sonuc=0;
	do
	{
		printf("N degeri girin = ");
		scanf("%f",&N);
	}while(N<1);
	
	do
	{
		sonuc+=1/i;
		i++;
	}while(i<=N);
	printf("%.2f",sonuc);
}
