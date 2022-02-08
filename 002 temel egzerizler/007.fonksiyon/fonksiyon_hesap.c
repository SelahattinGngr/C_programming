#include<stdio.h>
#include<stdlib.h>

int	main()
{
	float	a,sonuc;
	printf("f(x)=x³ + 13x² + 47x + 5\n");
	printf("Lütfen f(x) fonksiyonunu hesaplamak icin bir deger verin\n");
	scanf("%f",&a);
	
	sonuc=(a*a*a)+(13*a*a)+(47*a)+5;
	printf("f(%.3f) = %.3f",a,sonuc);
}
