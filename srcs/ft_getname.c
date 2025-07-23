#include "header.h"

int	ft_getname (char *name[MAX_P])
{
	int	i;
	
	i = 0;
	if (i < MAX_P &&
	(!strcmp (name[i], " ")))
	{
		printf ("Qual o seu nome?\nR: ");
		scanf (" %[^\n]s", name[i]);
		i++;
	}
	putchar ('\n');
	
	return ft_check_char (char *name[i]);
}

int     ft_check_char (char *name[pos])
{
        int     j;

        j = 0;
        while (j < pos)
        {
                if (!strcmp (name[j], " "))
                        j++;
                else
                        return 0;
        }
        return 1;
}
