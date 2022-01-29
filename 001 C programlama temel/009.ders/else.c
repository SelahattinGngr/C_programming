#include<stdio.h>
#include<stdlib.h>

int	main()
{
	int a;

	printf("değer verin\n");
	scanf("%d",&a);

	if(a > 0) // a 0'dan büyük ise şartı verdik
	{
		printf("verdiğiniz değer pozitif");
	}
	else if(a == 0) // if şartını karşılamazsa else if şartını dener
	{
		printf("verdiğiniz değer nötr");
	}
	else // if, else if şartlarını karşılayamazsa else şartına döner
	{
		printf("verdiğiniz değer negatif");
	}
	// else: if, else if şartlarının karşılamadığı durumlarda kullanılır. else bir şart verilmez.
}
