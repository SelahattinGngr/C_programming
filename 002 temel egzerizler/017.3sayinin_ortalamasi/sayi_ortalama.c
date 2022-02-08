#include<stdio.h>
#include<stdlib.h>

int	main()
{
	float	a,b,c,sonuc;
	printf("Lütfen 3 tane deger girin\n");
	scanf("%f%f%f",&a,&b,&c);

	sonuc=(a+b+c)/3;
	printf("sayilarinizin ortalamasi %.2f",sonuc);
}
