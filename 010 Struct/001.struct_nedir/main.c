#include<stdio.h>
#include<stdlib.h>

		// struct birden fazla veriyi/degiskeni icinde tutan bir yapidir.

int	main()
{
	struct	tarih
	{
		int	gun;
		char	ay[10];
		int	yil;
	};

	struct	ogrenci_bilgi
	{
		int	ogrenci_no;
		char	ad[20];
		char	soyad[20];
		char	adres[50];
		struct	tarih	okula_baslama;
		double	aidat;
	};ogrenci
}
