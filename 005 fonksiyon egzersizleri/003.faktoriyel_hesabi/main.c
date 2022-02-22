#include<stdio.h>
#include<stdlib.h>

int	faktoriyel(int	a);

int	main()
{
	int	a;
	printf("Lutfen faktoriyeli alinacak tamsayi degerini girin\n");
	scanf("%d",&a);
	printf("%d sayinizin faktoriyeli = %d",a,faktoriyel(a));
}
