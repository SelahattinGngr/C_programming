#include<stdio.h>
#define os 2
#define cvp 10
typedef	struct
{
	int	no;
	char	cevap[100];
}ogrencis;

typedef	struct
{
	int	no;
	int	not;
}sonucs;
int	main()
{
	ogrencis ogrenci[os];
	sonucs sonuc[os];
	char	anahtar[cvp];
	int	i,j;
	int	dogru,yanlis,bos;

	printf("lutfen cevap anahtarini giriniz\n");
	for (i = 0;i < cvp;i++)
	{
		getchar();
		scanf("%s",&anahtar[i]);
	}

	printf("ogrenci bilgilerini giriniz\n");
	for (i = 0;i < os;i++)
	{
		printf("ogrenci no: ");
		scanf("%d",&ogrenci[i].no);
		dogru = yanlis = bos = 0;
		for (j = 0;j < cvp;j++)
		{
			getchar();
			scanf("%s",&ogrenci[i].cevap[j]);
			if (anahtar[j] == ogrenci[i].cevap[j])
				dogru++;
			else if(ogrenci[i].cevap[j] == ' ')
				bos++;
			else
				yanlis++;
		}
		sonuc[i].no = ogrenci[i].no;
		printf("dogru: %d, yanlis: %d, bos: %d\n",dogru,yanlis,bos);
		sonuc[i].not=dogru - (yanlis / 4);
	}

	for (i = 0;i < os;i++)
	{
		printf("ogrenci no: %d, not: %d\n",sonuc[i].no,sonuc[i].not);
	}
}
