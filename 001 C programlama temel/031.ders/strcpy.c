// strcpy: bir karakter dizisinin içerigini baska bir karakter dizisine atamaya yarar

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char	selo[]="Merhaba Ben Selahattin Güngör";
	char	cikti[50];
	char	cikti2[50];

	strcpy(cikti,selo);// verinin alinacagi dizi her zaman solda olur 
	printf("%s",cikti); // esittir mantigi sagda hesapla sola aktar.

	strcpy(cikti2,"hakkı"); // strcpy ile2 cikti karakterine dizi atayabiliyoruz
	printf("%s",cikti2);
}
// strcpy fonksiyonunun icerigi assagıdadır
/*
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0') 
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
*/
