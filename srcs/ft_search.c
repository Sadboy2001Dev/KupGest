#include "header.h"

int	ft_search (char name[MAX_P][MAX_CHR])
{
	int	i;

	i = 0;
	while (i < MAX_P)
	{
		if (!strcmp (name[MAX_P],name[i]))
				return i;
		i++;
	}
	return -1;
}
