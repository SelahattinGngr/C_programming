#include<stdio.h>
#include<unistd.h>

int	main()
{
	int para;
	para = 1000;

	while(para > 0)
	{
		printf("Cebimde Kalan Para %d TL\n",para);
		para = para - 10;
	}
	while(para == 0)
	{
		write(1, "\n", 1);
		printf("Param Bitti AMK");
		para--;
	}
	return(0);
}
