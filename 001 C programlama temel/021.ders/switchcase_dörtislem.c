#include<stdio.h>
#include<stdlib.h>

int	main()
{
	float a;
	float b;
	int   c;
	int   d;
	char islem; // operator + - / * 

	printf("Lutfen Hangi islemin Yapilacagini Operatoru girin(+ - / * %)\n");
	scanf("%c", &islem);

	if(islem == '+' || islem == '-' || islem == '/' || islem == '*')
	{
		printf("Lutfen 2 Adet Sayı Girin\n");
		scanf("%f%f", &a,&b);

		switch(islem)
		{
			case '+': printf("%.2f + %.2f = %.2f", a,b,a+b);
			break;
			case '-': printf("%.2f - %.2f = %.2f", a,b,a-b);
			break;
			case '/': printf("%.2f / %.2f = %.2f", a,b,a/b);
			break;
			case '*': printf("%.2f * %.2f = %.2f", a,b,a*b);
			break;
		/*	default : printf("Boyle Bir Islem Hafızamda Yok %c", islem); */
	// default: case lere girmezse girecegi komuttur. else gibi 
	// ama burda tamamen zevkine işlemi uzattım if ve alttaki else silinirse aynı işlemler dönecektir
		}
	}
	else if(islem == '%') // mod almayı sonradan ekledım mod float degerlerde alınmıyor ınt olarak ayırdım
	{
		printf("Lutfen 2 Adet Sayı Girin\n");
		scanf("%d%d", &c,&d);
		switch(islem)
		{
			case '%': printf("%d %c %d = %d", c,'%',d,c % d);
			break; // %c ile char olarak '%' yi çağırdık %c yerine % işareti koyarsak hata veriyor
			       // ozel karakter olduğu için onu char olarak ekrana bastırdık
		}
	}
	else
	{
		printf("Bu Hangi İşlem Aq %c ?", islem);
	}
}
