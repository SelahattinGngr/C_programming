#include<stdio.h>
#include<stdlib.h>

int	karesi(int a)
{
	int	sonuc=a*a;
	return(sonuc);
}

int	main()
{
	int	a;
	int	sonucum;
	printf("Lütfen karesi alinacak degeri girin\n");
	scanf("%d",&a);

	sonucum=karesi(a);
	printf("%d",sonucum);

}
