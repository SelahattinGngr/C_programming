/* break: döngüyü durdurma/bitirme komutudur. */

#include<stdio.h>
#include<stdlib.h>

int	main()
{
	int a;

	for(a=0; a<=100; a++)
	{
		if(a==99)
		{
			printf("sayı %d oldu",a);
			break;
		}
		printf("%d\n",a);
	}
	printf("\n\n");
		
	for(a=100; a>=0; a--)
	{
		if(a==0)
		{
			printf("sayı %d oldu",a);
			break;
		}
		printf("%d\n",a);
	}
}
