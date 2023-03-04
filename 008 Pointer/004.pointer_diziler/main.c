#include<stdio.h>
#include<stdlib.h>

// t = &t[0]

int	main()
{
	char	selo[100]="selahattin";
       	// selo = &selo[0]  selo dizimizin adresi 0. elemaninin adresine esittir.
	char	*p1;
	
	p1=selo;

	printf("5. karakterim %c dir\n",selo[4]); // diziden cagirarak karakteri ekrana bastirdik.

	printf("7. karakterim %c dir\n",*(p1+6)); // p1 selo[0] a esittir +6 ekleyerek 6 karakteri bastirmasini sagladik.
	printf("1. karakterim %c dir",*(p1)); // direkt selo[0] ekrana bastirmis olduk
}
