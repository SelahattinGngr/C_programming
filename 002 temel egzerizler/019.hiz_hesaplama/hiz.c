#include<stdio.h>
#include<stdlib.h>

#define mesafe 450
int	main()
{
	float	saat,hiz;

	printf("Ankara-Istanbul(450Km) kac saatde gittiginizi yazin\n");
	scanf("%f",&saat);

	hiz=mesafe/saat;
	printf("Ankara-Istanbul arasında %.2f saatde gittiniz ortalama hiziniz %.2f",saat,hiz);
}
