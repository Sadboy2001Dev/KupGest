#include "header.h"

int	ft_getquantity (int quantity[MAX_P])
{
	int	i;

	i = 0;
	while (i <= MAX_P)
	{
		if (quantity[i] == -1)
		{
			printf ("Informe a quantidade armazenada: ");
			scanf ("%d", &quantity[i]);
			// Return 1 if everythings goes well
			return 1;
		}
		else if (i != MAX_P)
		{
			// If the previous index was filled 'i' will be increase to the next index
			i++;
		}
			else
			{
				// If all index was filled this message will be showed
				puts ("Limtr excedido\n");
				// And it'll be returned a 0
				return 0;
			}
	}
	// Or if something goes wrong it'll return 0
	return 0;
}
