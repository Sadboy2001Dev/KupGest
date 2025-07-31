#include <stdio.h>
#include <string.h>

void	init (int id[10], char nome[10][100])
{
	int	i;

	i = 0;
	while (i < 5)
	{
		id[i] = -1;
		strcpy (nome[i], "EMPTY");
		i++;
	}
}

int	insert (int id[10], char nome[10][100])
{
	int i = 0;
	if (id[i] == -1)
	{
		strcpy (nome[i], "\0");
		printf("ID: ");
		scanf ("%d", &id[i]);
		printf ("Nome: ");
		scanf (" %[^\n]s", nome[i]);
	}
	else
		i++;
	return 1;
}

void	print (int id[10], char nome[10][100])
{
	int	i;

	i = 0;
	while (i < 5)
	{
		printf ("ID: %d\t Nome: %s\n", id[i], nome[i]);
		i++;
	}
}

int	main (void)
{
	char nome[10][100];
	int	i;
	int	id[10];

	i = 0;
	init (id, nome);
	insert (&id[i], &nome[i]);
	print (id, nome);
	insert (&id[1], &nome[1]);                        print (id, nome);
	insert (&id[2], &nome[2]);                        print (id, nome);
	insert (&id[3], &nome[3]);                        print (id, nome);
}
