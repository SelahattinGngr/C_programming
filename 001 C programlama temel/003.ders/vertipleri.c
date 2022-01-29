#include <stdio.h>
#include <stdlib.h>

int	main()
{
	int tamsayi=1;
	char karakter='s';
	float ondalik=3.31;
	double ondalik2=31.31;

	printf("int bellekte %d byte yer tutar\n",sizeof(int));
	printf("char bellekte %d byte yer tutar\n", sizeof(char));
	printf("float bellekte %d byte yer tutar\n", sizeof(float));
	printf("double bellekte %d byte yer tutar\n", sizeof(double));
}
