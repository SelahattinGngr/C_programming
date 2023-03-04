#include<stdio.h>
#include<stdlib.h>

int	faktoriyel(int *sayi)
{
	int	i,sonuc=1;

	for(i=*sayi;i>=1;i--)
	{
		sonuc*=(*sayi);
		(*sayi)--;
	}

     /* for(i=*sayi;i>0;i--)
	{                         // seklinde de yapabilirdik
		sonuc*=i;
	} */
	return sonuc;
}

int	main()
{
	int	N,ilksayi;

	printf("faktoriyeli hesaplanacak N Pozitif tamsayisi girin\n");
	scanf("%d",&N);
	ilksayi=N;
	printf("%d! = %d\n",ilksayi,faktoriyel(&N));
}
