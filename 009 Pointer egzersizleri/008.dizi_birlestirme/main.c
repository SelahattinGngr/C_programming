#include<stdio.h>
#include<stdlib.h>

int	main()
{
	int	a,b,c;
	int	a_dizi[50];
	int	b_dizi[50];
	int	*pt;
	int	*ptt;
	int	i;

	pt=a_dizi;
	ptt=b_dizi;

	printf("A dizisi icin ekrana kac eleman yazilacak? (max 20) : ");
	scanf("%d",&a);

	for(i=0;i<a;i++)
	{
		printf("A dizisinin %d. elemanini girin: ",i);
		scanf("%d",pt);
		pt++;
	}

	printf("\n");

	printf("B dizisi icin ekrana kac eleman yazilacak? (max 20) : ");
	scanf("%d",&b);
	
	for(i=0;i<b;i++)
	{
		printf("B dizisinin %d. elemanini girin: ",i);
		scanf("%d",ptt);
		ptt++;
	}

	printf("\ndizi A:");
	for(pt=a_dizi;pt<a_dizi+a;pt++)
	{
		printf("%3d",*pt);
	}

	printf("\ndizi B:");
	for(ptt=b_dizi;ptt<b_dizi+b;ptt++)
	{
		printf("%3d",*ptt);
	}

	for(pt=a_dizi+a,ptt=b_dizi;ptt<b_dizi+b;pt++,ptt++)
	{
		*pt=*ptt;
	}
	
	printf("\nA dizisinin sonuna B dizisi eklenmis hali:\n");
	for(i=0;i<a+b;i++)
	{
		printf("%3d",*(a_dizi+i));
	//	printf("%3d",*pt);   farklari nedir anlamadim??
	}

}
