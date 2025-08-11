#include "header.h"

// Function to save data

int	ft_save (void)
{
	FILE	*fp;
	char	filename[MAX_CHR];
	int	i;

	i = 0;
	printf ("Informe o nome do ficheiro a ser salvo: ");
	scanf (" %[^\n]s", filename);
//	strcat (filename,".pdf");
	// Creating the file where the
	// data will be saved
	if ((fp = fopen (filename, "a+")) == NULL)
	{
		puts ("\nArquivo não pode ser salvo!\n");
		// Return zero when
		// things goes wrong
		return 0;
	}
	else
		puts ("\nArquivo salvo com sucesso!\n");
	fprintf (fp, "\nID\t STOCK\t \tPREÇO\t\t PRODUCTO\n");
	fprintf (fp, "----------------------------------------------------\n");
	while (i < MAX_P)
	{
		// Putting the data in the archive
		if (id[i] != -1)
			fprintf (fp,"%d\t %3d\t %12.2f\t\t %s\n", id[i], quantidade[i], valor[i], nome[i]);
		i++;
	}
	// Closing the opened file
	fclose (fp);
	// Return one when everythings goes well
	return 1;
}

// Function to load the saved data

int	ft_load (void)
{
	return 0;
}
