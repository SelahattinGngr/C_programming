// strncpy: bir karakter dizisinin icerigini baska bir karakter dizisine verilen deger kadar aktarır/kopyalar
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int	main()
{
	char	selo[]="Merhaba Ben Selo";
	char	cikti[50]="";

	strncpy(cikti,selo,8);
	printf("%s",cikti);
}

// strncpy fonksiyonu icerigi

/*
 char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
*/
