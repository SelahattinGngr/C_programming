// ilk alinan boy en yakin olunca 0 olarak cikti veriyor sebebini bilmiyorum
#include<stdio.h>
#include<stdlib.h>
#define sinir 150

int	main()
{
	int	boy,no,minboy,minno,fark;
	printf("Ogrenci no:\n");
	scanf("%d",&no);
	printf("Ogrenci boy:\n");
	scanf("%d",&boy);

	minno=no;
	fark=abs(boy-sinir); // abs mutlak deger alma.
	
	while(no>0) // soruda negatif deger girince ogrenci no ve boy istemeyi kesmesini istedi bunun icin
	{	    // dongu kurduk alinan numara negatif ise tekrar no istemeyecek
		printf("Ogrenci no:\n");
		scanf("%d",&no);
		printf("Ogrenci boy:\n");
		scanf("%d",&boy);
		
		if(abs(boy-sinir)<fark)
		{
			fark=abs(boy-sinir);
			minno=no;
			minboy=boy;
		}
	}
	printf("\n%d numarali ogrenci %d boyu ile %dcm ye en yakin olandir.",minno,minboy,sinir);
}
