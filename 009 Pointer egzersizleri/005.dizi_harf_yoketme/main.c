#include<stdio.h>
#include<stdlib.h>

int	main()
{
	char	a[100];
	char	*pt;
	char	b;

	printf("Karakter Dizisi Giriniz\n");
	gets(a);
	printf("Diziden Kaldirmak istediginiz Harfi Giriniz\n");
	scanf("%c",&b);

	printf("karakter dizisinin son hali: ");
	/*for(pt=a;*pt;pt++)
	{
		if(*pt!=b)
		{
			printf("%c",*pt);
		}
	}*/

	// while kullanarak ayni işlemi tekrar yaptık
	
	pt=a;
	
	while(*pt)
	{
		if(*pt!=b)
		{
			printf("%c",*pt);	
		}
		pt++;
	}
}
