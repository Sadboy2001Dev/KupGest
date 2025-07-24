#include "header.h"

int	ft_getquantity (int quantity[MAX_P])
{
	printf ("Informe a quantidade armazenado no stock: ");
	scanf ("%d", &quantity[MAX_P]);
	putchar ('\n');

	return quantity[MAX_P];
}
