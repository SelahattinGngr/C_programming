#include<stdio.h>
#include<stdlib.h>

void	karekok(double sayi);

int	main()
{
	double	sayi;
	printf("karekoku alinacak sayiyi girin\n");
	scanf("%lf",&sayi);
	printf("%lf karekoku = %.5lf \n",sayi,karekok(sayi));
	return 0;
}
