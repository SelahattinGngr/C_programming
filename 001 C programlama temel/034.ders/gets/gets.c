// gets: scanf komutunun alternatifi
// gcc gets calıstırırken bunu kullanmak tehlıkelı hatasını verıyor ama ./a.out dosyasını verıyor yanı kullanmakta sorun yok 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int	main()
{
	char	str[100];
	char	str1[100];
	printf("Lütfen maksimum 100 karakterden oluşan bir metin giriniz\n");
	gets(str);// gets girilen karakter dizisinde boşluk dahil kayıt eder.

	printf("Lütfen maksimum 100 karakterden oluşan bir metin giriniz\n");
	scanf("%s",&str1);// boşluktan sonrasını almaz
}
