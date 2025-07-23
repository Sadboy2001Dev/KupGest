#include "header.h"

void     ft_insert (int id[MAX_P], char *name[MAX_P], float value[MAX_P], int quantity[MAX_P])
{
	ft_start (id[MAX_P], name[MAX_P][MAX_CHR], value[MAX_P], quantity[MAX_P]);
	ft_getname (name[pos]);
	ft_getid (id[pos]);
	ft_getvalue (value[pos]);
	ft_getquantity(quantity[pos]);
	pos++;
}

void	ft_start (int id[MAX_P], char name[MAX_P][MAX_CHR], float valeu[MAX_P], int quantity[MAX_P])
{
	int	i;

	i = 0;
	while (i < MAX_P)
	{
		strcpy (name[i], " ");
		value[i] = 0;
		quantity[i] = -1;
		id[i] = -1;
		i++;
	}
}
