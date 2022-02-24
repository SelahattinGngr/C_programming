#include<stdio.h>
#include<stdlib.h>

int	fibonacci(int	a)
{
	int	ilk=0;
	int	ikinci=1;
	int	sonraki;
	int	i;

	printf("uretilecek fibonacci sayilari:\n");

	for(i=0;i<a;i++)
	{
		if(i<=1)
		{
			sonraki=i;
		}
		else
		{
			sonraki=ilk+ikinci;
			ilk=ikinci;
			ikinci=sonraki;
		}
		printf("%d\n",sonraki);
	}
}
