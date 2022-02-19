#include<stdio.h>
#include<stdlib.h>

int	main()
{
	char	cumle[100];
	int	i=0;
	printf("Lutfen cumlenizi girin\n");
	gets(cumle);

	while(cumle[i])
	{
		printf("%c\n",cumle[i]);
		i++;
	}
	return 0;
}
