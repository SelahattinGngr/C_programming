/* define: sabit değer tanımlama. */
#include<stdio.h>
#include<stdlib.h>

#define isim 20 // isim[20] yazmak yerine sabit deger atayip define kullandik
	  // edit: define kodun heryerinde kullanilabilen sabit degiskenler olusturuyor
	  // matematiksel bir islem yaparken isim cagirarak 20 degerini kullanabiliriz
int	main()
{
	char	kullaniciadi[isim];
	int	eh;
	printf("Lütfen Isminizi Giriniz\n");
	scanf("%s", &kullaniciadi);
	printf("Adınız %s doğrumu?\nevet ise 1\nhayir ise 0 yaziniz\n", kullaniciadi);
	scanf("%d", &eh);
	printf("girdiğiniz değer %d\n", eh);

	if(eh == 1)
	{
		printf("napim\n");
	}
	else if(eh == 0)
	{
		printf("Ne Ugrastirion O Zaman Yaprak");
	}
	else
	{
		printf("0 mu 1 mi dıye cevap ver aq");
	}	
}
