#include<stdio.h>
#include<stdlib.h>

int	main()
{
	int	a,b;
	int	sonuc=0;
	int	i=0;
	printf("Lütfen 2 deger giriniz (+,- farketmez)\n");
	scanf("%d%d",&a,&b);

/*	if(a<0 && b<0)
	{
		printf("%d*%d= +1",a,b);
	}
	else if(a>0 && b>0)
	{
		printf("%d*%d= +1",a,b);
	}
	else if(a<0 || b<0)
	{
		printf("%d*%d= -1",a,b);
	}
	else if(a==0 || b==0)
	{
		printf("%d*%d= 0",a,b);
	} */ 
	// yorum satiri icerisinde sonucu direkt pozitifmi negatifmi oldugunu belirttik
	

	if(b>0)
	{
		while(b>0)
		{
			sonuc+=a;
			b--;
		}
	}
	else if(a<0 && b<0)
	{
		int neg=-1;
		while(b<0)
		{
			sonuc+=a;
			b++;
		}
		sonuc*=neg;
	}
	else if(b<0)
	{
		while(b<0)
		{
			sonuc-=a;
			b++;
		}
	}
	else if(a==0 || b==0)
	{
		sonuc=0;
	}
	printf("%d",sonuc);
	// bu foknsiyonda sadece iki negatif degerde carpma kullanildi onun disinda diger carpma islemleri
	// toplama ile yapildi
}
