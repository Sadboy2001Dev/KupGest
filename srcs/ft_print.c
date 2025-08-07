#include "header.h"

void	ft_print (int id[MAX_P], char name[MAX_P][MAX_CHR], float value[MAX_P], int quantity[MAX_P])
{
	int	i;

	i = 0;
	printf ("ID\t STOCK\t \tPREÇO\t\t PRODUCTO\n");
	printf ("----------------------------------------------------\n");
	while (i < MAX_P)
	{
		if (strcmp (name[i], "EMPTY"))
		{
			printf ("%d\t %3d\t %12.2f\t\t %s\n", id[i], quantity[i], value[i], name[i]);
		}
		i++;
	}
	puts ("----------------------------------------------------\n");
}
