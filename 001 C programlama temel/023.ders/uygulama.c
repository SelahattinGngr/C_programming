// egzersiz 1: klavyeden girilen 4 sayının toplamını bulan bır c kodu yazın.

#include<stdio.h>
#include<stdlib.h>

int	main()
{
	int	dizi[4];
	int	i;
	int	toplam;

	i=0;
	while(i<4)
	{
		printf("sayı gir\n");
		scanf("%d", &dizi[i]);
		i++;
	}

	toplam=0;
	for(i=0; i<4; i++)
	{
		toplam=toplam+dizi[i];
	}
	printf("dizi toplam değerim %d", toplam);
}
