#include "header.h"

// Global var

char	nome[MAX_P][MAX_CHR];
int	id[MAX_P];
int	quantidade[MAX_P];
float	valor[MAX_P];

// Linker (main)
int	main (void) {
	ft_start (id, nome, valor, quantidade);
	menu ();
}
