#include<stdio.h>
#include<stdlib.h>

int	main()
{
	int selo[3][3]= {{5,8,2},{3,9,1},{4,7,6}};
// selo dizisine 2 boyutlu dizi tanımlanmıştır
// çoklu diziler sütün ve satır olarak ikiye ayrılır
// diziler değer verilirken 1. indexten tayin alınır

	printf("%d",selo[0][2]);// burda 0. sütunun 2. satırı ele alınmıştır (2)
// çok boyutlu dizilerden alınan veri ekrana bastırılırken 0. indexten sayılır
// selo [1][0] verisini alacak olursak ekrana 3 çıktısını verir
	return(0);
}
