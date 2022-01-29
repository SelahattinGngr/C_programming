// [] 'koşeli parantez' sadece arraylerde kullanılır.
// c# ve java da'da array vardır, ama onlarda anlaşılması daha zordur
// a[i] = i; a dizisinin i. elemanına i değerini koy.

// edit: array int selo[5] : selo 5 tane deger tutar 
// arraylar sayılırken 0 dan başlar 
// selo[5]={1,2,3,4,5} burda dizinin 3. karakterini yazdırmak istesek ekrana 4 cıktısı verir
// 	    0 1 2 3 4  seklinde işler


#include<stdio.h>
#include<stdlib.h>

int	main()
{
	int	selo[80];// 80 elemanlık bir selo dizisi tanımladık 
	int	i;

	for(i=0; i<=80; i++) // 0 dan 80 e kadar dönen bir döngü oluşturduk
	{
		selo[i]=2*i;// burda 0 dan 80 e kadar olan sayıların 2 ile çarpımını yapmasına dair komut verdık
		printf("%d\n",selo[i]);// burda da selo[i] değerlerini ekrana bastırmasını soyledık.
	}
}
