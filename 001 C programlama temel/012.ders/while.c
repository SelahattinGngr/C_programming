/* while: döngü komutudur. */

#include<stdio.h>
#include<stdlib.h>

int	main()
{
	int a;
	a = 0;

	while(a <= 100) // a intine 0 değerini verdik ve 100 den küçük ve ya eşit olması şartını verdik.
	{
		printf("%d\n",a);
		a++; // a 0 değerindeydı her dongu sonunda a +1 değer kazanarak donguye devam eder.
	}
	return(0);
}
/* a++ = a+1: ikiside aynı seyı ıfade eder. */
