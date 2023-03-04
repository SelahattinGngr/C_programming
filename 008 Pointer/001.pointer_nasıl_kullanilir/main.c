#include <stdio.h>
#include <stdlib.h>

// pointer verilen adresteki degeri okumaya yarar!!!!

int main()
{
	int selo = 10;
	int *s;

	s = &selo; // selo degiskeninin adresini s ye aktardik

	printf("%d\n", s);	   // burda s ye selo nun adresini aktardigimiz icin cikti olarak selo nun adresini verir.
	printf("%d\n", *s);	   // pointer s yazdirdigimizda selo adresindeki degeri ekrana cikti olarak verir.
	printf("%d\n", selo);  // selo degiskenini ekrana bastırdık *s ile ayni ciktiyi verecek
	printf("%d\n", &selo); // & kullanarak selo degiskeninin adresini cikti verdik.

	*s = 45; // *s 45 degerini atadik

	printf("%d\n", *s); // *s en son aldigi degeri ekrana cikti verecek
	printf("%d", s);	// s &selo nun adresini tuttugu icin ekrana ayni adresi verecek
	printf("%d", selo); // &selo nun adresine yeni almis oldugu degeri yazacak
}
