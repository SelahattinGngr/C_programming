// assagıdakılerı ıceren bır c programı yazın
// iki boyutlu bır dızı olusturun
// dızının elemanları 1 2 3 4 5 olsun
// dizinin 4. elemanının 3. karakterini ekrana bastırın

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int	main()
{
	int	a[5][5]={{1,2,3,4,5},{5,4,2,3,1},{2,3,1,5,4},{4,1,2,3,5},{3,2,1,5,4}};

	printf("%d",a[4][3]);

	return(0);
}
