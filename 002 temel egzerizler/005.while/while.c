#include<stdio.h>
#include<stdlib.h>

int	main()
{
	int	a;
	printf("Bir deger girin\n");
	scanf("%d",&a);

	while(a>0)
	{
		printf("%3d",a);
		a--;
	}
}
