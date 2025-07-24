#include "header.h"

int	ft_getname (char name[MAX_P][MAX_CHR])
{
	int	i;
	
	i = 0;
	if (i < MAX_P &&
	(!strcmp (name[i], "\0")))
	{
		printf ("Qual o seu nome?\nR: ");
		scanf (" %[^\n]s", name[i]);
		i++;
	}

	return ft_check_char (&name[i]);
}

int     ft_check_char (char name[MAX_P][MAX_CHR])
{
        int     j;

        j = 0;
        while (j < MAX_P)
        {
                if (!strcmp (name[j], " "))
                        j++;
                else
                        return 0;
        }
        return 1;
}
