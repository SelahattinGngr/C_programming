#include<stdio.h>
#include<stdlib.h>

void	degistir(int *a,int *b) // *a a nın adresindeki degeri okur
{
	int	gecici;
	gecici=*a;
	*a=*b;
	*b=gecici;
	// a ve b nin adresindeki degerleri bu fonksiyonda yerlerini degistirdik
	// a adresindeki degeri b ye b adresindeki degeri a ya aktardik
	// "adresler ayni degerler farkli oluyor"
}

int	main()
{
	int	a,b;
	int	*c,*d;
	c = &a;
	d = &b;
	printf("2 sayi girin\n");
	scanf("%d%d",&a,&b);
	printf("degismeden once\n %d adresindeki sayi %d\n",&a,a);
	printf("%d adresindeki sayi %d\n",&b,b);
	degistir(c,d);
	printf("degistikten sonra\n %d adresindeki sayi %d\n",&a,a);
	printf("%d adresindeki sayi %d",&b,b);
}
