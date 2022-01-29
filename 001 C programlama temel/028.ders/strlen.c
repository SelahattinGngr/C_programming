/* strlen fonksıyonu str parametresındekı karakter dızısının uzunlugunu olcmek ıcın kullanılır
   karakter dizilerinin sonunda kesinlikle (\0) bulunmaktadır. (biz yazmasakta var) ama strlen
   fonksıyonu saadece gercek karakterlerı okudugu ıcın (\0)'ı okumaz. 
   (\0) karakterini'de okumasını ve yazdırmasını ıstersek "sizeof" fonksıyonunu kullanabılırız */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int	main()
{
	char selo[]="SelahattinGungor";

	printf("Girilen Dizimizin Boyu %d\n", strlen(selo));// \0 dikkate alınmadı çıktı 16
	printf("Girilen Dizimizin Boyu %d", sizeof(selo));// \0 dikkate alındı çıktı 17

	return(0);
}
