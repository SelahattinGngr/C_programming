#include<stdio.h>
#include<stdlib.h>

int	main()
{
	int	sayi[15]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14};
	int	*pt,i;

	
	printf("dizimizin ilk hali:");
	for(pt=sayi,i=0;i<15;i++,pt++)
	{
		printf("%3d",*pt);
	}

	printf("\ndizinin icindeki cift elemanlar:");
	for(i=0;i<15;i+=2)
	{
		printf("%3d",*(sayi+i));
	}
	
	printf("\ndizinin icindeki tek elemanlar:");
	for(i=1;i<15;i+=2)
	{
		printf("%3d",*(sayi+i));
	}
}
