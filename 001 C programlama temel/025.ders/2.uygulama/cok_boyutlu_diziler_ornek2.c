#include<stdio.h>
#include<stdlib.h>

int	main()
{
	int	matrix1[4][8]={{1,2,3,4,5,6,7,8},{9,8,5,3,4,6,2,7},{5,4,3,8,1,6,2,0},{0,4,3,9,5,2,2,7}};
	int	matrix2[4][8]={{8,4,2,3,6,9,5,1},{0,1,6,3,4,8,5,7},{2,6,8,4,2,0,3,3},{9,8,5,2,0,1,4,6}};
	int	toplam[4][8];
	int	a;
	int	b;

	for(a=0;a<4;a++)
	{
		for(b=0;b<8;b++)
		{
			toplam[a][b]=matrix1[a][b]+matrix2[a][b];
			printf("%4d",toplam[a][b]);
		}
		printf("\n");
	}
}
// yukarda ne yapıldıgını anlıyorsanız tebrıkler ogrenmıssınız demektır,
// anlamıyorsanız son 3 4 dersı bastan bıdaha alın ben sımdı oyle yapcam.
 
// edit: mantığı anladım ama hala öğrenmedim ama ne yaptığımı biliyorum pes etmek yok.
