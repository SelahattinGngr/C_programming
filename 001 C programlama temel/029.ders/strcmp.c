// strcmp: iki karakter dizisini kıyaslamaya yarıyor

#include<stdio.h>
#include<stdlib.h>
#include<string.h> // karakter dizileri ile ilgili fonksiyon, veri türü ve makro tanımlamaları içerir.

int	main()
{
	int	sonuc;
	char	selo[10]="selo";
	char	hasan[10]="seloo";
	
	sonuc=strcmp(selo,hasan);
	printf("%d",sonuc); 
	// selo ve hasan girdileri arasindaki farki ascii tablosundaki degeri gostererek cikti verecektir

}

// strcmp fonksiyonunun icerigi assagidadir
/*
 int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
*/
