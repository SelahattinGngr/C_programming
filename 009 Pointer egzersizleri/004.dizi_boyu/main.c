#include<stdio.h>
#include<stdlib.h>

int	main()
{
	char	a[100];
	char	*pt;
	printf("Bir Karakter Dizisi Giriniz:\n");
	gets(a);
	
	for(pt=a;*pt;pt++)

	printf("Diziniz %d karakterden olusmaktadir",pt-a); // adreslerin farkını alarak ekrana cikti verdik
}
