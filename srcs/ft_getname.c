#include "header.h"

int	ft_getname (char name[MAX_P][MAX_CHR])
{
	char	n[MAX_CHR];
	int	i;
	int	count;

	i = 0;
	while (i < MAX_P)
	{
		if (1)
		{
			// count receive the position to be filled
			count = ft_check_char ();
			printf ("Nome do producto: ");
			// Clean the buffer before using it
			fflush (stdin);
			scanf (" %[^\n]s", n);
			// Clean the buffer after using it
			fflush (stdin);
			// force the first imdex to be filled
			if (id[0] == -1)
				strcpy (name[0], n);
			// condition to fill to others index (1,..., 9)
			else
				strcpy (name[count], n);
			// 1 will be returned if
			// everything goes well and the name wasn't EMPTY
			return 1;
		}
		i++;
	}
	if (++i == MAX_P)
	{
	// This message will be  showed if all index was fully filled
		puts ("Limite excedido\n");
	// If all index was filled the return will be 0
		return 0;                                 }
	// If everythings goes wrong 0 will be returned
	return 0;
}

int     ft_check_char (void)
{
        int     j;

        j = 0;
        while (j < MAX_P)
        {
		// verify if the id is empty and return the right index to be filled
		if (id[j] == -1)
                       return j;
                j++;
        }
	// if everything goes wrong the function will return zero
        return 0;
}
