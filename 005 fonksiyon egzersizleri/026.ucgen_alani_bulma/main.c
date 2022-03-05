#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float	eskenar(int a,int b,int c);

int	main()
{
	int	a,b,c;
	printf("eskenar ucgenin kenar uzunluklarini giriniz\n");
	scanf("%d%d%d",&a,&b,&c);
	printf("eskenar ucgenın alani = %.2f",eskenar(a,b,c));
}
