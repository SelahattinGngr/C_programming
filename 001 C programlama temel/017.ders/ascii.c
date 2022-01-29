/* ascii klavyedeki tüm karakterlerin sayısal karşılıgır (makine dili değil (0,1)). */
/* ' ' içine int değer atanırsa ascıı tablosundan çekiyor */
#include<stdio.h>
#include<stdlib.h>

int	main()
{
	int alfabe;
	int Alfabe2='B';
	
	for(alfabe = 'a'; alfabe <= 'z'; alfabe++)
	{
		printf("%c\n",alfabe);
	}
	
	// alfabeyi yazdırdık sebep sormayın
	printf("\n");
	
	// for kullanarak int alfabe'yi 2 farklı yerde kullandık ama farklı değer vermedım nıye bılmıyorum

	for(alfabe = 'a'; alfabe <= 'z'; alfabe=alfabe+2) 
	{
		printf("%c\n%c\n",alfabe,Alfabe2);
		Alfabe2=Alfabe2+2;
	}
	// burdada bir küçük bir büyük şeklinde alfabeyi yazdırdık
}
