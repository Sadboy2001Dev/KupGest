#include "header.h"

void	ft_print (int id[MAX_P], char name[MAX_P][MAX_CHR], float value[MAX_P], int quantity[MAX_P])
{
	int	i;

	i = 0;
	printf ("ID\t PRODUTO\t STOCK\t PREÇO\n");
	while (i < MAX_P)
	{
		printf ("%d\t %s\t %d\t %2.5f\n", id[i], name[i], quantity[i], value[i]);
		i++;
	}
}
