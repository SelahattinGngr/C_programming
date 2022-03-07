#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int	main()
{
	float	sayi;
	do
	{
		printf("lutfen pozitif tamsayi giriniz\n");
		scanf("%f",&sayi);
		if(sayi==0)
		{
			break;
		}
		else if(sayi>0)
		{
			printf("%.3f sayisinin karekoku = %.3f",sayi,sqrt(sayi));
		}
	}while(sayi<0);
	return 0;
}
