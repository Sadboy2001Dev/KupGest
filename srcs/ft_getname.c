#include "header.h"

int	ft_getname (char name[MAX_P][MAX_CHR])
{
	char	n[MAX_CHR];
	int	i;
	
	i = 0;
	while (i <= MAX_P)
	{
		if ((ft_check_char(&name[i])))
		{
			name[pos][0] = '\0';
			printf ("Nome do producto: ");
		//	fgets (name[i], MAX_CHR, stdin);
			fflush (stdin);
			scanf (" %[^\n]s", n);
		//	n[strlen (n) - 1] = '\0';
			fflush (stdin);
			strcpy(name[i], n);
			// 1 will be returned if
			// everything goes well and the name wasn't EMPTY
			return 1;
		}
		else if (++i == MAX_P)
		{
			// This message will be  showed if all index was fully filled
			puts ("Limite excedido\n");
			// If all index was filled thw return will be 0
			return 0;
		}
	}
	// If everythings goes wrong 0 will be returned
	return 0;
}

int     ft_check_char (char name[MAX_P][MAX_CHR])
{
        int     j;

        j = 0;
        while (j < MAX_P)
        {
                if (strcmp (name[j], "EMPTY"))
                        return j;
                j++;
        }
        return 0;
}
