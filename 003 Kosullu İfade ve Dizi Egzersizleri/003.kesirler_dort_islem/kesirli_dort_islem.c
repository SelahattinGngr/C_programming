#include<stdio.h>
#include<stdlib.h>

int	main()
{
	int	a,b;
	char	c;
	printf("isleminizi giriniz (+,-)\n");
	scanf("%c",&c);
	printf("Lutfen iki tamsayi girin\n");
	scanf("%d%d",&a,&b);
	
	if(0<a && 0<b)
	{
		switch(c)
		{
			case '+': printf("1/%d + 1/%d = %d/%d",a,b,a+b,a*b);
			break;
			case '-': printf("1/%d - 1/%d = %d/%d",a,b,a-b,a*b);
			break;
			default: printf("hatali islem girdiniz");
			break;
		}
	}
	else
	{
		printf("0 ile islem yapamam");
	}
}
