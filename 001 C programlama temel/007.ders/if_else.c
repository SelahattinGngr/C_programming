/* if, else if, else: koşul, şart komutudur. */
/* matematikte işlem önceliği mantığı ile aynı. */
/* işlem öncelikleri
   if
   else if
   else */

#include<stdio.h>
#include<stdlib.h>

int	main()
{
	int a;
	int b;

	printf("değer girin\n");
	scanf("%d",&a);

	if(a > 0) // a 0 sayısından büyük ise şartı verdik.
	{
		printf("verdiğiniz değer pozitif\n\n");
	}

	else if(a < 0) // a 0 sayısından küçük ise şartı verdik
	{
		printf("verdiğiniz değer negatif\n\n");
	}

	printf("değer girin\n");
	scanf("%d",&b);
	// aşşağıdaki değerlerde pozitifler negatif, negatifler pozitif çıktı verecek şekilde ayarlanmıştır tamamen troll amaçlıdır. 
	if(b > 0)
	{
		printf("verdiğiniz değer negatif\n\n");
	}

	else if(b < 0)
	{
		printf("verdiğiniz değer pozitif\n\n");
	}

	printf("değerlerinizin modu %d", a%b);
}
