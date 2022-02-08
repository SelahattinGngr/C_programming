#include<stdio.h>
#include<stdlib.h>

int	main()
{
	int	x,y,z,sonuc;
	printf("x yuzler basamagi\n");
	scanf("%d",&x);
	printf("y onlar basamagi\n");
	scanf("%d",&y);
	printf("z birler basamagi\n");
	scanf("%d",&z);

	sonuc=100*x+10*y+z;
	printf("sonuc %d",sonuc);
}
