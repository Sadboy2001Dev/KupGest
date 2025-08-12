#include "header.h"

int	ft_search (int id[MAX_P])
{
	int	i;
	int	search;

	i = 0;
	puts ("############### PESQUISA ###############\n");
	printf ("Informe o ID do producto a ser pesquisado: ");
	scanf ("%d", &search);
	putchar ('\n');
	while (i < MAX_P)
	{
		if (id[i] == search)
		{
			printf ("\nID\t STOCK\t \tPREÇO\t\t PRODUCTO\n");
			printf ("------------------------------------------------------\n");
			printf ("%d\t %3d\t %12.2f\t\t %s\n", id[i], quantidade[i], valor[i], nome[i]);
			puts ("------------------------------------------------------\n");
			return 1;
		}
		i++;
        }
	puts ("\n\tNenhum resultado encontrado!");
	puts ("----------------------------------------------\n");
	return 0;
}
