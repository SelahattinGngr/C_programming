#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct	ogrenci
{
	char	ad[10];
	char	soyad[10];
	int	yas;
};

int	main()
{
      //struct	ogrenci	selo={"selahattin","gungor",22} seklinde de atama yapilabilir
	struct	ogrenci	selo;           // struct fonksiyon gibi disaridan olusturulup mainde deger atama yapilabilir
			               // struct ogrenci cagirip selo adini verdik (birden fazla yerde kullanima aciktir)
	strcpy(selo.ad,"selahattin"); // herhangi bir char'a deger atayacaksak strcpy kullanmamiz gerekli
	strcpy(selo.soyad,"gungor"); // struct adi(selo) . deger atanacak veri seklinde kullanilir
	selo.yas=22;                // int veri tipinde direkt atama yapilabiliyor

	printf("%s \t %s \t %d",selo.ad,selo.soyad,selo.yas);
}
