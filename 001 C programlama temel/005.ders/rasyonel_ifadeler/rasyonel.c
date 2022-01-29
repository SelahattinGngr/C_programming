/* float: ondalıklı sayıların noktadan sonraki değerlerini gösterir. */
/* %f: float veri tipini belirtmek için kullanılır. */
/* ondalıklı sayı yazarken nokta kullanın, virgülde hata veriyor. */
#include<stdio.h>
#include<stdlib.h>

int	main()
{
	float a;
	float b;
	float c;

	printf("sayı girin\n");
	scanf("%f",&a);
	printf("sayı girin\n");
	scanf("%f",&b);
	printf("sayı girin\n");
	scanf("%f",&c);

	printf("değerlerin sonucu %f",a*b/c); 
}
/* float veri tipi noktadan sonra 6 karakter gösterir, bunu sınırlandırmak için %.2f (noktadan sonra 2 değeri gösterir) */

/* int veri tipindeki değerleri float olarak çıkarmak için,  

  int a;
  int b;

  printf("tam sayı girin\n");
  scanf("%d",&a);
  printf("bir sayı daha girin\n");
  scanf("%d",&b),

  printf("işlem sonucu %f",(float)a/b); (işlem herhangi biri olabilir) */
