#include<stdio.h>
#include<stdlib.h>

#define bugs 17
#define tweety 18
#define spiderman 19

int	main()
{
	char	hali;
	int	m2;
	printf("Almak istediginiz Halinin Kodunu ve M² sini giriniz\n");
	printf("Bugs = b, Tweety = t, Spiderman = s\n");
	scanf("%c%d",&hali,&m2);
	
	if(hali=='b')
	{
		printf("Bugs hali tipinden %d m² siparisiniz %dtl tutuyor",m2,bugs*m2);
	}
	else if(hali=='t')
	{
		printf("Tweety hali tipinden %d m² siparisiniz %dtl tutuyor",m2,tweety*m2);
	}
	else if(hali=='s')
	{
		printf("Spiderman hali tipinden %d m² siparisiniz %dtl tutuyor",m2,spiderman*m2);
	}
}
