#include<stdio.h>
#include<stdlib.h>

int	main()
{
	int	a,b,sonuc;
	printf("lutfen iki tamsayi girin\n");
	scanf("%d%d",&a,&b);
	sonuc=a*b;
	if((a==0) || (b==0))
	{
		printf("carpim degeri 0'dir");
	}
	else if(((a<0) && (b<0)) || ((a>0)&&(b>0)))
	{
		printf("carpim degeri pozitiftir");
	}
	else
	{
		printf("carpim degeri negatiftir");
	}

}
