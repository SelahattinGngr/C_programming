/* switch case: ben buna cevap verememem. */

#include<stdio.h>
#include<stdlib.h>

int	main()
{
	int gun;
	printf("Haftanin hangi gününü öğrenmek istiyorsun\n");
	scanf("%d", &gun);

	switch(gun)
	{
		case 1: printf("Pazartesi");
		break;
		case 2: printf("Sali");
		break;
		case 3: printf("Carsamba");
		break;
		case 4: printf("Persembe");
		break;
		case 5: printf("Cuma");
		break;
		case 6: printf("Cumartesi");
		break;
		case 7: printf("Pazar");
		break;
		default : printf("Hangi Gezegenden Geldin Bu Hangi Gün Amk");
		break;
	}
	return(0);
}
