#include<stdio.h>
#include<stdlib.h>

int	main()
{
	int	a,b,c;
	printf("Lütfen İki Deger giriniz\n");
	scanf("%d%d",&a,&b);
	printf("a degeri %d\n",a);
	printf("b degeri %d\n\n",b);

	c=a;
	a=b;
	b=c;

	printf("degisimden sonra a degeri %d\n",a);
	printf("degisimden sonra b degeri %d",b);
}
