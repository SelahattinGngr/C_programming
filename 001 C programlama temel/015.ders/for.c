/* for: while gibi bir döngü kurmamızı sağlıyor */
/* for döngüsünün 3 zorunlu koşulu var:
 * 1- int'a değer atamak
 * 2- koşul (while de olduğu gibi)
 * 3- değer arttırma eksiltme */
/* int değer vermek, koşul sağlamak, değer arttırıp dusurme direkt for'da yapılacak */

#include<stdio.h>
#include<stdlib.h>

int	main()
{
	// int a b c istediğini oluştur ama değer verme for içinde vercez
	/* int a, b, c;
	   =
	   int a;
	   int b;
	   int c; */
 	int a;
	
	for(a = 0; a < 10; a++)	// a değerini for içerisinde alacak
	{
		printf("%d",a);
	}
	// int a birden fazla yerde kullanılabılır o yuzden for ıcınde deger atıyoruz.
	printf("\n");
	for(a = 10; a > 0; a--)
	{
		printf("%d",a);
	}
}
