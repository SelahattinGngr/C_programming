/* assagidakileri iceren bi c programı yazın 
 * iki adet karakter dizisi olusturun birisi "bonne" ikincisi "soiree" 
 * "bonsoire" cıktısını elde edin */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int	main()
{
	char	a[]="bonne";
	char	b[]="soiree";
	char	c[50]=""; // bos deger vermedıgınde hata verıyor 

	strncpy(c,a,3);
	strncat(c,b,5);
	printf("%s",c);
}
