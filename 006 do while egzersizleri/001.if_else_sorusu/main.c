#include<stdio.h>
#include<stdlib.h>

int	main()
{
	char	karakter;
	printf("lutfen buyuk harf tipinde bir karakter girin\n");
	scanf("%c",&karakter);
	if((karakter>=65) && (karakter<=90))
	{
	//	printf("%c",karakter+32); // komutsuz kucuk harfe cevirme islemi
		printf("%c",tolower(karakter));// tolower buyuk harfi kucuk harfe ceviren komut.
	}
	else
	{
		printf("lutfen buyuk karakter giriniz");
	}
}
