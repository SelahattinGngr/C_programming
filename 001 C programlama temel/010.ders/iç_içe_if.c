#include<stdio.h>
#include<stdlib.h>

int	main()
{
	int a;
	int b;
	printf("kaçıncı sınıfsınız?(1-8)\n");
	scanf("%d",&a);
	printf("okul numaranız kaç?\n");
	scanf("%d",&b);

	if(a <= 4)
	{
		if(b%2==1)
		{
			printf("okul numaranız tek ve sabah grubunda ders alıyorsunuz.");
		}
		else
		{
			printf("okul numaranız çift ve sabah grubunda ders alıyorsunuz.");
		}
	}
	else if(a > 8)
	{
		printf("1-8 arasında dedik amk");
	}
	else
	{
		if(b%2==1)
		{
			printf("okul numranız tek ve öğle grubunda ders alıyorsunuz.");
		}
		else
		{
			printf("okul numaranız çift ve öğle grubunda ders almaktasınız.");
		}
	}
}
