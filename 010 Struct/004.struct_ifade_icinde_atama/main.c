#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// ogrencinin okul numarasini, adi, soyadi, ve yas bilgilerini tutan ogrenci_bilgi adli yapi tanimlayin
// ogrenci1 ve ogrenci2 degiskenlerini ogrenci_bilgi yapi tipinde tanimlayin
// ogrenci bilgilerini ogrenci1 degiskenine atayin
// ogrenci1 degiskenini ogrenci2 degiskenine kopyalayin

struct	ogrenci_bilgi
{
	char	ad[15];
	char	soyad[15];
	int	yas;
	int	okul_no;
};

int	main()
{
	struct	ogrenci_bilgi	ogrenci1;
	strcpy(ogrenci1.ad,"selo");
	strcpy(ogrenci1.soyad,"gungor");
	ogrenci1.yas=22;
	ogrenci1.okul_no=1925;

	struct	ogrenci_bilgi	ogrenci2;
	ogrenci2=ogrenci1;

	printf("ogrenci adi: %s\n",ogrenci2.ad);
	printf("ogrenci soyadi: %s\n",ogrenci2.soyad);
	printf("ogrenci yas: %d\n",ogrenci2.yas);
	printf("ogrenci no: %d\n",ogrenci2.okul_no);
}
