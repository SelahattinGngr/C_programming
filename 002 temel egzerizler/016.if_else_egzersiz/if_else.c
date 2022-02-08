#include<stdio.h>
#include<stdlib.h>

int	main()
{
	int	a;
	printf("Lutfen pozitif bir tam sayi giriniz\n");
	scanf("%d",&a);

	if(a%13==0 && a%17==0)
	{
		printf("%d 13 ve 17 sayisina tam bolunuyor",a);
	}
	else if(a%13==0)
	{
		printf("%d 13 sayisina tam bolunuyor",a);
	}
	else if(a%17==0)
	{
		printf("%d 17 sayisina tam bolunuyor",a);
	}
	else if(a%13!=0 && a%17!=0)
	{
		printf("%d 13 ve 17 sayisina bolunmuyor",a);
	}
}
