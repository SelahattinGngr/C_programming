#include <stdio.h>
/* string: birden çok char veri tipinin birleşimidir. */
/* scanf: kullanıcıdan veri alan komuttur, alınan veriyi işleyip değerlendirir. */
/* %s string veri tipi (karakter dizisi) belirtmek için kullanılır */
int main()
{
	int	a[10];
	printf("değer dizisi girin\n");
	scanf("%s", &a);
	printf("diziniz\n%s",a);
}
