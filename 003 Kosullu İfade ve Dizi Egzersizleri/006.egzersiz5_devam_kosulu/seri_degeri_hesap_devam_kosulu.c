// yazdigim kod calismiyor egitmenin verdigi kod henuz gormedigim konular icerdigi icin yarim birakiyorum
#include<stdio.h>
#include<stdlib.h>

int	main()
{						//2n-1/x^2n
	char	devam;
	int	n,i;
	float	x,seri=0;
	do
	{
		printf("lutfen n'ye pozitif bir tam sayi degeri verin\n");
		scanf("%d",&n);
		printf("lutfen x'e bir reel sayi degeri verin\n");
		scanf("%f",&x);
	
			for(i=1;i<=2*n-1;i+=2)// i=1 dememizin sebebi soruda 1 den yazmaya baslattik
			{	
				int a=1,b=1;	     // i 2 arttırmamızın sebebi seriyi +2 +2 arttirdi (5.png)
				while(a<2*n)
				{
					b*=x;
					a++;
				}
				seri+=i/x;
			}
			printf("seri : %.2f\n",seri);
			printf("Devam edecekmisiniz (evet ise e yazin)\n");
			scanf("%c",&devam);
	}while(devam=='e');
	printf("hoscakalin");
}
