#include<stdio.h>
#include<stdlib.h>

// enum: tek tip sembolik listelere denir. enumlara isim verilir {} arasında virgul ile ayirarak maddeler yazilir

// birden fazla enumeration yapilirken kurallar vardir
	// ayni sembolu birden fazla kere kullanmak (karmasik olmamasi icin)
	// enum yapilmamis bir degiskeni enum yaparken kullanmak
			// örn enum renk
			// {
			// 	mavi,kirmizi,mor
			// };
			//
			// enum renk selo=turkuaz;
				// turkuaz iceride olmadigi icin kullanilmaz
	// enum icinde ayni degere sahip birbirinden farkli degiskenler olabilir


enum	renkler  // enum renkler adinda yapi olusturup 3 adet rengi maddeledik
{
	mavi,    // 0
	kirmizi, // 1
	yesil    // 2
};		 // yazilan maddeler dizi gibi 0 dan baslar cikti istedigimizde hangi sirada ise onu verir.
		 // maddelerden birine herhangi bir atama yaparsak bir sonraki madde verilen degerin devami olur
		 					// örnek  mavi, kirmizi=100, yesil
							// mavi 0 degerinde kirmizi 100 yesil 101 degerindedir
/* typedef enum
   {
   	mavi,
	kirmizi,
	yesil
   }renk;
 
   		struct yapisinda gordugumuz gibi typedef kullanilarak daha kisa kullanim elde edebiliriz

		örnek main
			{
				renk selo=kirmizi;
				printf("%d",selo);
					
					assagidaki cikti ile ayni degeri verecektir
			}
 */

int	main()
{
			// enum renkler yapisina selo degisken adini tanimladik
	enum	renkler	selo=kirmizi;

	printf("%d",selo);
}
