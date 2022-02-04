#include<stdio.h>
#include<stdlib.h>

int	main()
{
	int a,b,c,x;
	int d,e,f; // cıktılar icin olusturduk
	printf("Lutfen a'ya deger verin\n");
	scanf("%d",&a);
	printf("Lutfen b'ye deger verin\n");
	scanf("%d",&b);
	printf("Lutfen c'ye deger verin\n");
	scanf("%d",&c);
	printf("Lutfen x'e deger verin\n");
	scanf("%d",&x);

	d=x*x;
	e=a*d;
	f=b*x;
	printf("%d.%d² + %d.%d + %d = %d", a,x,b,x,c,e+f+c);
}	
