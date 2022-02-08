#include<stdio.h>
#include<stdlib.h>
#define m² 40
#define iscilik 200

int	main()
{
	int	halimetre;
	int	ucret;

	printf("Lutfen alinacak halinin m² sini giriniz\n");
	scanf("%d",&halimetre);

	ucret=iscilik+halimetre*m²;
	printf("istediginiz m² ye gore iscilik(%dtl) dahil odeyeceginiz tutar %d tl",iscilik,ucret);
}
