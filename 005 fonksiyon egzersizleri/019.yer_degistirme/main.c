#include<stdio.h>
#include<stdlib.h>

void	yerdegistir(int	x,int y);

int	main()
{
	int	x,y;
	printf("lutfen x degiskenine ve y degiskenine deger veriniz\n");
	scanf("%d%d",&x,&y);
	printf("x= %d\n",x);
	printf("y= %d\n",y);
	yerdegistir(x,y);
}
