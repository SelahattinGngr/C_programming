#include<stdio.h>
#include<stdlib.h>

#define ilkuc 0.25
#define dk 0.08

int	main()
{
	float	dakika,ucret;
	printf("Kac dakika konustunuz?\n");
	scanf("%f",&dakika);

	if(dakika>3)
	{
		ucret=ilkuc+(dakika-3)*dk;
		printf("%.2f dakika konusmanizin ucreti %.2f tl",dakika,ucret);
	}
	else if(dakika<=3)
	{
		printf("%.2f dakika konusmanizin ucreti %.2f tl",dakika,ilkuc);
	}
}
