#include<stdio.h>
#include<stdlib.h>

int	birden_ona(int	a);

int	main()
{
	int	a;
	for(a=1;a<=10;a++)
	{
		printf("%d! = %d\n",a,birden_ona(a));
	}
	return 0;
}
