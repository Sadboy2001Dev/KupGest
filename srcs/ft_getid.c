#include "header.h"

int	ft_getid (int id[MAX_P])
{
	int	i;

	i = 0;
	while (i <= MAX_P)
	{
		if (id[i] == -1)
		{
			printf ("Introduz o ID do producto: ");
			scanf ("%d", &id[i]);
			// verify_id (&id[i]);
			// it will return 1 if everything is ok!
			return 1;
		}
		else if (i != MAX_P)
		{
			i++;
		}
			else
			{
				puts ("Limite excedido\n");
				// it'll return 0 if the i be equals to MAX PRODUCT
				return 0;
			}

	}
	// Or if something goes wrong it'll return 0 also
	return 0;
}

/*int	verify_id (int id[MAX_P])
{
	int	j;

	j = 0;
	while (j < MAX_P)
	{
		if (id[j] != id[MAX_P])
			return 1;
		else if (id[j] == id[MAX_P])
		{
			puts ("Erro: número de ID já existe.");
			id[MAX_P] = -1;
			return 0;
		}
		j++;
	}
	return 0;
}*/
