#include<stdio.h>
#include<stdlib.h>

void	karesi(int *sonucum,int *x)
{
	*sonucum=*x**x;
}

int	main()
{
	int	a;
	int	sonuc;
	printf("Lütfen karesi alinacak sayiyi girin\n");
	scanf("%d",&a);
	
	karesi(&sonuc,&a);
	printf("%d",sonuc);
}
