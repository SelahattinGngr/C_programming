/* do while: bir şart olmadan direkt içeri girer sonradan while şartını karşılar ise do ya geri döner. */
                // yazar notu: Tam Anlayamadim Ileriki Derslerde Tekrar Gorecekmisiz
#include<stdlib.h>
#include<stdio.h>

int	main()
{
	int gul = 10;
	int papatya = 20;
	int orkide = 50;
	int kardelen = 1;

	do // do ile döngü başlattık aşşağıdaki while döngüsüne şartımızı yazdık
	{
		printf("%d",gul);
		printf(" tane gülümüz var\n");
		printf("%d",papatya);
		printf(" tane papatyamız var\n");
		printf("%d",orkide);
		printf(" tane orkidemiz var\n");
		printf("%d",kardelen);
		printf(" tane kardelen var\n");

		gul--;
		papatya = papatya - 2;
		orkide = orkide - 5;
		
	}
	while((gul >= 0) || (papatya >= 0) || (orkide >= 0));
	// whilede yazılan şart karşılanıyorsa do ya geri döner

	if(kardelen ==1)
	{
		printf("\n");
		printf("Kardelen Dönene Kadar Dükkan Kapalı");
		printf("\n");
	}
}
