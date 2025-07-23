#include "header.h"

int	ft_getid (int *id)
{
	// get the Product's Id
	printf ("Introduz o ID do produto: ");
	scanf ("%d", &id);
	// if is everything all right return the number of id
	if (isnumber (id))
		return id;
	// if something goes wrong will return 0
	return 0;
}
