#include<stdio.h>
#include<stdlib.h>

int	main()
{
	// taban alani: kisakenar * uzunkenar
	// yanal alani toplami: kisakenarlar*uzunluk(h)+uzunkenarlar*uzunluk
                	// 2kisakenar*uzunluk + 2uzunkenar*uzunluk = yanal alanlar toplami
	// toplam alani: butun kenarlarin toplamidir
	                // 2kisakenar*uzunluk + 2uzunkenar*uzunluk + 2uzunkenar*kısakenar
	// hacim : butun degerlerin carpimi   uzunkenar*kisakenar*uzunluk
	
	                // yazar notu: matematigin aQ 
	int	a,b,h;
	printf("Prizmanin kenar uzunlukarini giriniz\n");
	scanf("%d%d",&a,&b);
	printf("Prizmanin h uzunlugunu girin\n");
	scanf("%d",&h);

	printf("taban alani %d\n",a*b);
	printf("Yanal alanlar toplami %d \n", 2*a*h+2*b*h);
	printf("Toplam alan %d \n",2*a*h+2*b*h+2*a*b);
	printf("hacim %d ",a*b*h);

	return 0;
}
