#include "header.h"

int	pos = 0;

int	menu (void)
{
	int	opt;

	puts ("\n############### MENU ###############\n");
	while (1)
	{
		puts ("1-Inserir dados");
		puts ("2-Mostrar dados inseridos");
		puts ("3-Pesquisar producto");
		puts ("4-Outras opções");
		puts ("0-Encerrar o programa\n");
		printf ("Selecione: ");
		scanf ("%d", &opt);
		putchar ('\n');
		switch (opt)
		{
			case 1:
				ft_insert (&id[pos], &nome[pos], &valor[pos], &quantidade[pos]);
				break ;
			case 2:
				ft_print (&id[pos], &nome[pos], &valor[pos], &quantidade[pos]);
				break ;
			case 3:
				ft_search (&id[pos]);
				break ;
			case 4:
				sub_menu ();
				break ;
			case 0:
				ft_close ();
			default:
				puts ("Opção inválida.Tente novamente.\n");
		}
	}
}

void	ft_close (void)
{
	int	i;
	int	j;

	i = 0;
	puts ("Processing...");
	while (i <= 60)
	{
		j = 0;
		while (j <= 1000000)
			j++;
		i++;
	}
	puts ("\n[Process completed] - Programa encerrado...");
	exit (0);
}
