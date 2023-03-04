#include<stdio.h>
#include<stdlib.h>

int	main()
{
	char	cumle[100];
	char	*p1,*p2;
	int	kontrol;

	printf("Max 100 karakterli cümle giriniz\n");
	gets(cumle);
	
	for(p2=cumle;*p2;p2++) // *p2 sarti \0 gorene kadar gider 
	{
		// sadece p2 son karakterine gelmesi icin actıgımız bir döngü
	}
	p2--;

	kontrol=1;
	for(p1=cumle;kontrol==1 && p1<p2;p1++,p2--)
	{
		if(*p1 != *p2)
		{
			kontrol=0; // kontrol 0 oldugu anda donguye girmeyecek ciktiyi direkt verecektir
		}
	}
	
	if(kontrol==1)
	{
		printf("girilen %s bir pallindromdur",cumle);
	}
	else
	{
		printf("girilen %s bir pallindrom degildir",cumle);
	}
}
