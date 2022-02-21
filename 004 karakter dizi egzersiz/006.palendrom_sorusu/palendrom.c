#include<stdio.h>
#include<stdlib.h>

void	dizi_oku(char a[])
{
	int	i=0;
	while(a[i])
	{
		printf("%c",a[i]);
		i++;
	}
	printf("\n");
	return 0;
}

int	bosluk_sil(char a[])
{
	int	i=0;
	while(a[i])
	{
		if(a[i]==' ')
		{
			i++;
			continue;
		}
		else
		{
			printf("%c",a[i]);
		}
		i++;
	}
	printf("\n");
}

int	kac_eleman(char	a[])
{
	int	i=0,sayac=0;

	while(a[i])
	{
		i++;
		sayac++;
	}
	//printf("eleman sayisi = %d\n",sayac);
	return sayac;
}

int	sondan_basa(char a[])
{
	int	i=0,j;
	j=kac_eleman(a)-1;
	while(0<a[j])
	{
		printf("%c",a[j]);
		j--;	
	}
}

int	palendrom(char a[])
{
	int	i=0,j,c;
	j=kac_eleman(a)-1;
	
	while(a[i])
	{
		if(a[i]==a[j])
		{
			c=1;
		}
		else
		{
			c=0;
		}
		j--;
		i++;
	}
	if(c==1)
	{
		printf("\npalendromdur");
	}
	else
	{
		printf("\npalendrom degildir");
	}
	return 0;
}

int	main()
{
	char a[100];
	int  l;
	printf("Lutfen bir karakter dizisi giriniz\n");
	gets(a);
	printf("\n");
	dizi_oku(a);
	bosluk_sil(a);
	l=kac_eleman(a);
	printf("eleman sayisi = %d\n",l);
	sondan_basa(a);
	palendrom(a);
}
