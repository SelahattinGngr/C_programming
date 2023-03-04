#include<stdio.h>
#include<stdlib.h>
#define	max 11

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
	int	i,j,yarismaci_sayi,birinci;
	float	maxim=0;
	
	printf("Kac Yarismaci Var: ");
	scanf("%d",&yarismaci_sayi);

	yarismacilar	yarismaci[100];

	for(i=0;i<yarismaci_sayi;i++)
	{

		printf("yarismacinin adi : ");
		scanf("%s",&yarismaci[i].ad);

		printf("yarismaci soyadi : ");
		scanf("%s",&yarismaci[i].soyad);

		printf("hakem puani :\n");
		for(j=0;j<10;j++)
		{	
			printf("%d. hakem: ",j+1);
			scanf("%f",&yarismaci[i].hakem_puani[j]);
		}
		yarismaci[i].performans=performans_hesap(yarismaci[i]);

		printf("yarismaci performansi notu : %.2f\n\n",yarismaci[i].performans);
	
		if(yarismaci[i].performans>maxim)
		{
			maxim=yarismaci[i].performans;
			birinci=i;
		}
	}
	printf("Birinci Olan Yarismacimiz %.2f puan ile\n",maxim);
	printf("%s %s",yarismaci[birinci].ad,yarismaci[birinci].soyad);

}
