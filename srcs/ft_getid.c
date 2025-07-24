#include "header.h"

int	ft_getid (int id[MAX_P])
{
	// get the Product's Id
	printf ("Introduz o ID do produto: ");
	scanf ("%d", &id[MAX_P]);
	// if is everything all right return
	// the number of id
	if (id[MAX_P] >= 0 && id[MAX_P] <= 5000)
		return id[MAX_P];
	// if something goes wrong will return 0
	return 0;
}
