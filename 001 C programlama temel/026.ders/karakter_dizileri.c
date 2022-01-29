#include<stdio.h>
#include<stdlib.h>

int	main()
{
	char selo[]={'s','e','l','o','\0'}; // \0 bir karakter dizisinin sonuna geldiğini belirtir.
	                                // yazılması zorunludur (string yazarken gecerlidir) 
	char selo2[]="selo";


	// kullanıcıdan strıng verı alma uygulaması
	
	char	isim[20]; // 20 karaktere kadar isim verebileceğimiz bir sınır koyduk

	printf("Lütfen Adınızı Girin\n");
	scanf("%s", &isim);
	printf("\nAdınız %s Doğrumu", isim);
}
