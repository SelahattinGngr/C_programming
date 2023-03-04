#include<stdio.h>
#include<stdlib.h>

int	main()
{
	int	*ad1,*ad2;
	int	n=10,p=20;

	ad1=&n;
	ad2=&p;

	printf("atama yapmadan once degeri %d\n",*ad1);
	printf("adresi %d\n",ad1);

	*ad1=*ad2+6; // *ad1 10 degerine sahipti, *ad2 de bulunan 20 degerine 6 ekleyip uzerine yazdik.

	printf("atama yaptiktan sonra %d\n",*ad1);
	printf("adresi %d\n\n\n",ad1);
}
