#include<stdio.h>
#include<stdlib.h>

int	main()
{
	struct	sehir
	{
		char	sehir_adi[20];
		int	sicaklik;
	};

	struct	sehir	turkiye[81];


	typedef	float	tip;      // tip, sehir, hacim_prizma veri tipleridir
	struct	hacim_prizma	  // en, boy, prizma_a   degiskenlerdir
	{
		tip	en;
		tip	boy;
		tip	yukseklik;
		tip	hacim;
	};

	typedef struct	hacim_prizma prizma;
	prizma	prizma_a;
}
