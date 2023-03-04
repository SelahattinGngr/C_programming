#include<stdio.h>
#include<stdlib.h>

/*
 typedef struct
 {
 	float x_ekseni;
	float y_ekseni;

 }nokta;

	bu sekilde de struct yapimiza isim verebiliriz
	mainde cagirirken struct nokta p yerine direkt
	                  nokta p (p isim temsilidir herhangi birsey olabilir)

 */

struct	nokta
{
	float	x_ekseni;
	float	y_ekseni;
};

int	main()
{
	struct	nokta	p={3.564,2.266};

	printf("x eksenimiz: %.3f\n",p.x_ekseni);
	printf("y eksenimiz: %.3f",p.y_ekseni);
}
