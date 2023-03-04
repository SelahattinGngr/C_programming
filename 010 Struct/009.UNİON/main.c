#include<stdio.h>
#include<stdlib.h>

// union yapisinda icinde bulunan veriler en cok byte yer kaplayan verinin catisi altinda barinir

// int 2 byte dir float 4 byte yer kaplar bu unionun toplam kapladigi alan 4 byte olacaktir

typedef union
{
	double	x;
	float	y;
	int	s;
}test;

int	main()
{
	test	selo;
	
	selo.y=13;
	printf("y degeri: %.3f\n",selo.y); // y ve s tek printf de bastirmak istedigimde hata verdi sebebi idk
	selo.s=11;
	printf("s degeri: %d\n",selo.s);
	printf("union yapimizin toplam tuttugu yer %d byte",sizeof(selo));
	// double x verimizi kullanmamis olmamiza ragmen hepsi ayni catida oldugu icin toplam hafiza 8 byte dedi
				// normal bir fonksiyonda ve ya yapida 13 byte olmasi lazim
}
