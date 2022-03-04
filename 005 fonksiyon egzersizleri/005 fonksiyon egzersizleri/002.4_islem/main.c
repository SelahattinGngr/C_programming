#include<stdio.h>
#include<stdlib.h>

float	dort_islem(float a,float b,char islem);

int	main()
{
	int	a,b;
	char	islem;
	printf("Hangi islemi yaptirmak istiyorsunuz\n");
	scanf("%c",&islem);
	printf("Lutfen iki tane tamsayi girin\n");
	scanf("%d%d",&a,&b);
	printf("islemin sonucu %.2f",dort_islem(a,b,islem));
}
