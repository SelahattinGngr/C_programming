#include<stdio.h>
#include<stdlib.h>

typedef	struct
{
	char	ad[15];
	float	x;
	float	y;
}nokta;

void	yazdir(nokta p[],int a)
{
	for(int i=0;i<a;i++)
	{
		printf("isim %s  x ekseni %.3f  y ekseni %.3f\n",p[i].ad,p[i].x,p[i].y);
	}
}

int	main()
{
	nokta dizi[5]={{"selo",1,2},{"evrim",2.657,4.231},{"hasan",5,9.123},{"mirac",42,10},{"onur",9,3}};
	yazdir(dizi,5);	
}
