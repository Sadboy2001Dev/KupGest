#include "header.h"

int	sub_menu (void)
{
	int	opt;

	puts ("\n############### OUTRAS OPÇÕES ###############\n");
	while (1)
	{
		printf ("1-Salvar ficheiro(s)\n2-Abrir ficheiro(s)\n");
		printf ("3-Excluir ficheiro(s)\n0-Voltar\n");
		printf ("\nSelecione: ");
		scanf ("%d", &opt);
		putchar ('\n');
		switch (opt)
		{
			case 0:
				menu ();
				break ;
			case 1:
				ft_save ();
				break ;
			case 2:
				ft_load ();
				break ;
			case 3:
				ft_delete ();
				break ;
			default:
				puts ("Opção inválida.Tente novamente.\n");
		}
	}
}

// Function to remove the archive

int	ft_delete (void)
{
	char	filename[MAX_CHR];
	FILE	*fp;

	puts ("############### EXCLUIR ###############\n");
	printf ("Nome do ficheiro a ser deletado: ");
	fflush (stdin);
	scanf (" %[^\n]s", filename);

	if ((fp = (fopen (filename, "wb"))) == NULL) {
		puts ("\nErro: ficheiro não foi encontrado\n");
		return 0;
	}
	if ((remove (filename)) != 0)
	{
		printf ("Erro a excluir %s\n\n", filename);
		return 0;
	}
	else
		puts ("\nFicheiro excluído com sucesso\n");
	fclose (fp);
	return menu ();
}
