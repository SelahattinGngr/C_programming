/* = = (==) "x == y" (x değeri y değerine eşitse) */
/* ! = (!=) "x != y" (x değeri y değerine eşit değildir) */
/* > "x > y" (x değeri y değerinden büyüktür) */
/* < "x < y" (x değeri y değerinden küçüktür) */
/* > = (>=) "x >= y" (x değeri y değerinden büyük ve ya ona eşittir) */
/* < = (<=) "x <= y" (x değeri y değerinden küçük ve ya ona eşittir) */
/* = kullanılırken bir int, char veya float tipine değer verirken tek = kullanılır. */
/* if döngüsü içerisinde ve ya koşul sağlanması gereken bir durumda çif eşittir "==" kullanılır. */
#include<stdio.h>
#include<stdlib.h>

int	main()
{
	int a;
	
	printf("lütfen bir değer giriniz\n");
	scanf("%d",&a);
	// if, else 7. derste detaylı anlatıldı.
	if(a > 9) // a dokuzdan büyükse.
	{
		printf("sayınız 9'dan büyük");
	}
	else if(a < 9) // a dokuzdan küçükse.
	{
		printf("sayınız 9'dan küçük");
	}
	else if(a == 9) // a dokuza eşitse.
	{
		printf("sayınız 9");
	}
}
/* burada kullanıcıdan aldığımız değere göre bir şart sağladık. */
/* kullanıcıdan aldığımız değer "a" dır. */
