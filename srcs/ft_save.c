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
	if ((fp = fopen (filename, "wb+")) == NULL)
	{
		puts ("\nArquivo não pode ser salvo!\n");
		// Return zero when
		// things goes wrong
		return 0;
	}
	else
		puts ("\nArquivo salvo com sucesso!\n");
/*	fprintf (fp, "\nID\t STOCK\t \tPREÇO\t\t PRODUCTO\n");
	fprintf (fp, "----------------------------------------------------\n");*/
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
		//	fprintf (fp,"%d\t %3d\t %12.2f\t\t %s\n", id[i], quantidade[i], valor[i], nome[i]);
		i++;
	}
	// Closing the opened file
	fclose (fp);
	// Return one when everythings goes well
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
		fclose (fp);
		return menu ();
	}
	else
		puts ("\nErro ao abrir o ficheiro\n");
	//      fprintf (fp,"%d\t %3d\t %12.2f\t\t %s\n", id[i], quantidade[i], valor[i], nome[i]);                 i++;                                          }
	return 0;
}
