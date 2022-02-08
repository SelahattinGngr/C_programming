#include<stdio.h>
#include<stdlib.h>

int	main()
{
	float	km=1.609;
	int	mil;
	printf("Lutfen bir mil degeri yazin\n");
	scanf("%d",&mil);

	printf("%d mil %.3f km yapar",mil,mil*km);
}
