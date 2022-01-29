#include<stdio.h>
#include<stdlib.h>

int	main()
{              // ilk 20 satırları ikinci 20 sütünları belirtiyor
	int matrix[20][20];
	int a;
	int b;

	for(a=0;a<20;a++)
	{
		for(b=0;b<20;b++)
		{
			if(a==b)
			{
				matrix[a][b]=1;
			}
			else
			{
				matrix[a][b]=0;
			}
			printf("%2d",matrix[a][b]); // %2d 2 kullanılmasının amacı 2 bosluk bırakması
		}
		printf("\n");
	}
}

// udemy boz training adlı kurs veren hocadan c programlama dersi aldıysanız iade edin
// adam bu yazdığımın 2 katı uzunluğunda yazdı aynı sonucu verdi aq
// j = je değildir ji dir!!!!!
