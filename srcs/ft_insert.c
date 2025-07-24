#include "header.h"

int     ft_insert (int id[MAX_P], char name[MAX_P][MAX_CHR], float value[MAX_P], int quantity[MAX_P])
{
	ft_start (id, name, value, quantity);
	ft_getid (&id[MAX_P]);
	ft_getname (&name[MAX_P]);
	ft_getvalue (&value[MAX_P]);
	ft_getquantity(&quantity[MAX_P]);
	
	return 0;
}

void	ft_start (int id[MAX_P], char name[MAX_P][MAX_CHR], float value[MAX_P], int quantity[MAX_P])
{
	int	i;

	i = 0;
	while (i < MAX_P)
	{
		name[i][0] = '\0';
		value[i] = 0.0;
		quantity[i] = 0;
		id[i] = -1;
		i++;
	}
}
