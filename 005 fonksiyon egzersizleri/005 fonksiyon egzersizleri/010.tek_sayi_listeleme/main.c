#include<stdio.h>
#include<stdlib.h>

int	listeleme(int	n);

int	main()
{
	int	n;
	printf("lutfen hangi sayiya kadar tek sayilari siralamak istediginiz sayiyi girin\n");//cok sacma cumle oldu
	scanf("%d",&n);
	listeleme(n);
}
