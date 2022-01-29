/* 7 den 27 ye kadar olan sayıların çarpımı. */

#include<stdio.h>
#include<stdlib.h>
int	main()
{
	int yedi;
	int carpim=7;

	for(yedi = 7; yedi <= 27; yedi++)
	{
		carpim= carpim * yedi;
	}
	printf("7 den %d ye kadar olan sayıların çarpımı %d", yedi, carpim);
}
