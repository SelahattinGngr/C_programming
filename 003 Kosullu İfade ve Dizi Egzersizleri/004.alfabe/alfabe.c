#include<stdio.h>
#include<stdlib.h>

int	main()
{
	char	c;
	int	ascii;
	printf("Lutfen bir harf girin\n");
	scanf("%c",&c);

	ascii=c;
	if(ascii>=65 && ascii<=90)
	{
		printf("%c %d. harf",c,ascii-(65-1));
	}
	else if(ascii>=97 && ascii<=122)
	{
		printf("%c %d. harf",c,ascii-(97-1));
	}
}
