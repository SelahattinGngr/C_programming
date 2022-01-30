/* iki karakder dizisini belirtilen değere kadar kıyaslar */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int	main()
{
	int	sonuc;
	char	selo[10]="selo";
	char	hasan[10]="hasan";

	sonuc=strncmp(selo,hasan,4);// ilk 4 karakteri karsilastir 
	printf("%d",sonuc);
	// strcmp ile farkı strcmp iki karakter dizisinin tamamını
	// strncmp ise belirtilen değere kadar. 
}
// strncmp fonksiyonunun icerigi assagidadir
/*
 int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
			return (1);
		}
		else if (s1[i] < s2[i])
		{
			return (-1);
		}
		i++;
	}
	return (0);
}
*/
