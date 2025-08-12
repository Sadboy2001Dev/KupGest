#include "header.h"

// Function to save data

int	ft_save (void)
{
	FILE	*fp;
	char	filename[MAX_CHR];
	int	i;

	i = 0;
	printf ("Informe o nome do ficheiro a ser salvo: ");
	// Getting the file's
	// name to be saved it
	scanf (" %[^\n]s", filename);
	// Creating the file where the
	// data will be saved
	if ((fp = fopen (filename, "wb")) == NULL)
	{
		puts ("\nArquivo não pode ser salvo!\n");
		// Return zero when
		// things goes wrong
		return 0;
	}
	else
		puts ("\nArquivo salvo com sucesso!\n");
	while (i < MAX_P)
	{
		// Putting the data in the archive
		if (id[i] != -1)
		{
			fwrite (&id[i], sizeof(int), 1, fp);
			fwrite (&quantidade[i], sizeof (float), 1, fp);
			fwrite (&valor[i], sizeof (int), 1, fp);
			fwrite (nome[i], MAX_CHR, 1, fp);
		}
		i++;
	}
	// Closing the opened file
	fclose (fp);
	// Get back to the menu
	// When everythings goes well
	return menu ();
}

// Function to load the saved data

int	ft_load (void)
{
	FILE	*fp;
	char	filename [MAX_CHR];
	int	i;

	i = 0;
	printf ("Nome do ficheiro: ");
	// Getting the file's
	// name that will be open
	scanf (" %[^\n]s", filename);
	if ((fp = fopen (filename, "rb")) != NULL)
	{
		puts ("\nFicheiro aberto com sucesso!\n");
		while (i < MAX_P)                                     {
			// Getting the data
			// in the archive
			fread (&id[i], sizeof(int), 1, fp);
			fread (&quantidade[i], sizeof (float), 1, fp);
			fread (&valor[i], sizeof (int), 1, fp);
			fread (nome[i], MAX_CHR, 1, fp);
			i++;
		}
		// Close the file
		// after used it
		fclose (fp);
		// Go back to the menu
		// if nothing goes wrong
		return menu ();
	}
	else
		printf ("\nErro ao abrir o ficheiro \"%s\"\n\n", filename);

	return 0;
}
