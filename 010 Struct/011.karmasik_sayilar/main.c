#include<stdio.h>
#include<stdlib.h>

typedef	struct
{
	float	a,b;
}sayi;

int	main()
{
	sayi	sayi1,sayi2,sonuc;

	char	op;
	
	printf("birinci karmasik sayilar\n");
	scanf("%f%f",&sayi1.a,&sayi1.b);
	printf("ikinci karmasik sayilar\n");
	scanf("%f%f",&sayi2.a,&sayi2.b);
	printf("yapmak istediginiz islemi girin (+/-) : ");
	getchar();
	scanf("%c",&op);

	if(op=='+')
	{
		sonuc.a=sayi1.a+sayi2.a;
		sonuc.b=sayi1.b+sayi2.b;
	}
	else if(op=='-')
	{
		sonuc.a=sayi1.a-sayi2.a;
		sonuc.b=sayi1.b-sayi2.b;
	}
	else
	{
		printf("lutfen dogru operator giriniz");
	}

	printf("Sonuc: \n");
	printf("%.2f %c %.2f = %.2f",sayi1.a,op,sayi2.a,sonuc.a);
	printf("\n");
	printf("%.2f %c %.2f = %.2f",sayi2.b,op,sayi2.b,sonuc.b);
}
