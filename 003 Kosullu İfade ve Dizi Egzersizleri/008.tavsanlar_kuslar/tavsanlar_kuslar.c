#include<stdio.h>
#include<stdlib.h>
#define cogalmakus 0.012
#define cogalmatavsan 0.038

int	main()
{
	int	tavsan=1042,kus=2272,yil=0;
	while(tavsan<kus)
	{
		tavsan+=tavsan*cogalmatavsan;
		kus+=kus*cogalmakus;
		yil++;
		printf("%d. yil tavsan %d: kus %d: kadardir\n",yil,tavsan,kus);
	}
	printf("tavsanlarin sayisi kuslarin sayisini %d yil sonra gececektir",yil);
}
