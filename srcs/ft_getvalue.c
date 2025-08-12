#include "header.h"

int	ft_getvalue (float value[MAX_P])
{
	int	i;

	i = 0;
	while (i <= MAX_P)
	{
		if (value[i] == -1.0)
		{
			printf ("Introduz o valor: ");
			scanf ("%f", &value[i]);
			// If everythings goes
			// well it'll return 1
			return 1;
		}
		else if (i != MAX_P)
		{
			// If the previous index was
			// filled 'i' will be increase
			// to the next index
			i++;
		}
			else
			{
				// If all index was
				// filled this message
				// will be showed
				puts ("Limte excedido\n");
				// And will be
				// returned 0
				return 0;
			}
	}
	// If somethings goes
	// wrong it'll return 0
	return 0;
}
