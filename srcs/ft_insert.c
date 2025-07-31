#include "header.h"

int     ft_insert (int id[MAX_P], char name[MAX_P][MAX_CHR], float value[MAX_P], int quantity[MAX_P])
{
	if (ft_getid(&id[pos]))
		if (ft_getquantity(&quantity[pos]))
			if (ft_getvalue(&value[pos]))
				if (ft_getname (&name[pos]))
				{
					puts ("Sucesso na inserção de dados");
					putchar ('\n');
					return 1;
				}
				else
					puts ("Falha ao inserir o(s) nome(s)");
			else
				puts ("Falha ao inserir o(s) valore(s)");
		else
			puts ("Falha ao inserir a quantidade");
	else
		puts ("Falha ao inserir os dados");
	
	putchar ('\n');
	return 0;

}

void	ft_start (int id[MAX_P], char name[MAX_P][MAX_CHR], float value[MAX_P], int quantity[MAX_P])
{
	int	i;

	i = 0;
	while (i < MAX_P)
	{
		strcpy (name[i], "EMPTY");
		value[i] = 0.0;
		quantity[i] = 0;
		id[i] = -1;
		i++;
	}
}
