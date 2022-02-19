#include<stdio.h>
#include<stdlib.h>

int	main()
{
	char	cumle[100];
	int	i=0;
	printf("Lutfen Cumlenizi girin\n");
	gets(cumle);// girilen cumle turkce karakter iceriyorsa +1 deger verıyor sebebini bilmiyorum
	while(cumle[i])
	{
		i++;
	}
	printf("cumleniz %d karakterden olusuyor",i);
}
