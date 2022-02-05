#include<stdio.h>
#include<stdlib.h>

int	main()
{
	int	a;
	int	sonuc=0;
	int	ilk;
	printf("Lutfen bir deger girin\n");
	scanf("%d",&a);

	ilk=a;

	while(a>=1)
	{
		sonuc=sonuc+a;
		a--;
	}
	a++;
	printf("%d\n",sonuc);

	while(a<=ilk-1)
	{
		printf("%d",a);
		printf("+");
		a++;
	}
	printf("%d = %d",ilk,sonuc);
}
