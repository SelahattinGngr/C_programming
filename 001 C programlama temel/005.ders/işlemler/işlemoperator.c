/* (+ - / * %) işlem operatörleri */

#include<stdio.h>
#include<stdlib.h>

int	main()
{
	int a;
	int b;
	int c;

	printf("sayı girin\n");
	scanf("%d",&a);
	printf("sayı girin\n");
	scanf("%d",&b);
	printf("sayı girin\n");
	scanf("%d",&c);
	
	printf("işlemler sonucu %d",a+b*c);
}
/* burada a,b,c adında 3 tane int veri tipi oluşturup kullanıcıdan onlara değerler vermesini ve alınan bu değerleri matematiksel işlemlerle yeni bir değer ortaya çıkartıyoruz. */
