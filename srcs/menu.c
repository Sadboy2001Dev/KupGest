#include "header.h"

int	menu (int id[posit], char name[posit][MAX_CHR], float value[posit], int quantity[posit])
{
	int	opt;

	puts ("########## MENU ##########");
	while (1)
	{
		puts ("Opções");
		puts ("1-Inserir dados");
		puts ("2-Mostrar dados inseridos");
		puts ("3-Pesquisar producto");
		puts ("4-Salvar dados");
		puts ("0-Encerrar o programa");
		scanf ("%d", &opt);
		switch (opt)
		{
			case 1:
				ft_insert (&id[posit], &name[posit], &value[posit], &quantity[posit]);
				break ;
			case 2:
				ft_print (&id[posit], &name[posit], &value[posit], &quantity[posit]);
				break ;
		/*	case 3:
				ft_search ();
				break ;
			case 4:
				ft_save ();
				break ;*/
			case 0:
				exit (0);
		}
	}
}
