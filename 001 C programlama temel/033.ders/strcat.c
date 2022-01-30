// strcat iki karakter dizisini birleştirir

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int	main()
{
	char	bos[50];
	char	bos1[]="selo";
	strcpy(bos,"merhaba");

	strcat(bos," ben ");
	strcat(bos,bos1);

	printf("%s",bos);// bos karakter dizisinin icerisine strcpy ve strcat ile karakter ekledik
}
