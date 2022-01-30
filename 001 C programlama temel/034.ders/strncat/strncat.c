// strncat iki farklı karakter dizisini istenilen/verilen deger kadar birlestirir

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int	main()
{
	char	a[100];
	char	b[100];
	int	c;

	printf("Lütfen Karakter Dizisi Girin (Max 100 Karakter)\n");
	gets(a);

	printf("Lütfen Bir Karakter Dizisi Daha Girin (Max 100 Karakter)\n");
	gets(b);

	printf("Lütfen Birinci Yazinin Sonuna Kac Karakter Eklemek Istediginizi Yazınız (bosluklarda bır karakterdir)\n");
	scanf("%d",&c);
	
	strncat(a,b,c); // a ve b dızılerını c degerı kadar karakter alıp bırlestırdı	
	printf("ikisinin birlesimi \n%s",a);
	
}
