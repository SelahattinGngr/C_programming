#include<stdio.h>
#include<stdlib.h>
#define	max 10
typedef	struct
{
	char	ad[max];
	char	soyad[max];
	float	hakem_puani[max];
	float	performans;
}yarismacilar;

float	performans_hesap(yarismacilar yarismaci1)
{
	float	maxi,min;
	float	*a;
	float	sonuc=0;
	a=yarismaci1.hakem_puani;
	
	maxi=min=*a;
	
	for(a=yarismaci1.hakem_puani+1;a<yarismaci1.hakem_puani+max;a++)
	{
		if(maxi<*a)
		{
			maxi=*a;
		}
		if(min>*a)
		{
			min=*a;
		}
	}

	for(int i=0;i<max;i++)
	{
		if(maxi!=yarismaci1.hakem_puani[i])
		{
			if(min!=yarismaci1.hakem_puani[i])
			{
				sonuc+=yarismaci1.hakem_puani[i];
			}
		}
	}
	sonuc= sonuc/8;
	return sonuc;
}

int	main()
{
	int	i;
	yarismacilar	yarismaci1;

	printf("yarismacinin adi : ");
	scanf("%s",&yarismaci1.ad);

	printf("yarismaci soyadi : ");
	scanf("%s",&yarismaci1.soyad);

	printf("hakem puani :\n");
	for(i=0;i<max;i++)
	{
		scanf("%f",&yarismaci1.hakem_puani[i]);
	}
	yarismaci1.performans=performans_hesap(yarismaci1);

	printf("yarismaci performansi notu : %.2f",yarismaci1.performans);
}
