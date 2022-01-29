/* && ve demektir. */
/* || yada, veya demektir. */

#include<stdio.h>
#include<stdlib.h>

int	main()
{
	int a;

	printf("yaşınız kaç.\n");
	scanf("%d",&a);

	if((a >= 0) && (a <= 6)) //a 0'dan büyük veya eşit ise, ve a 6'dan küçük veya eşit ise bu koşulu sağlar. 
	{
		printf("sen daha okula başlamadın");
	}
	else if((a >= 7) && (a <= 13))
	{
		printf("sen ilkokuldasın"); 
	}
	else if((a >= 14) && (a <= 18))
	{
		printf("sen liselisin");
	}
	else if((a >= 19) && (a <= 25))
	{
		printf("sen üniversitelisin");
	}
	else if((a >= 26) && (a <= 65))
	{
		printf("sen yetişkinsin");
	}
	else if((a >= 65) && (a <= 100))
	{
		printf("sen yaşlısın");
	}
	else if((a >= 101) || (a >=101))
	{
		printf("öteki tarafta yok yazılıyorsun git geber amk");
	}
}
