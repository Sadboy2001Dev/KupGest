#include "header.h"

// Global var

char	nome[MAX_P][MAX_CHR];
int	id[MAX_P];
int	quantidade[MAX_P];
float	valor[MAX_P];
int	pos = 0;

int	main (void) {

	// Booting
	ft_start (id, nome, valor, quantidade);
/*	ft_insert(&id[pos], &nome[pos], &valor[pos], &quantidade[pos]);
	ft_print (&id[pos], &nome[pos], &valor[pos], &quantidade[pos]);*/
	menu (); /*(&id[pos], &nome[pos], &valor[pos], &quantidade[pos]);*/
/*	if (ft_getid (&id[pos]))
		if (ft_getquantity (&quantidade[pos]))
			if (ft_getvalue(&valor[pos]))
				if (ft_getname(&nome[pos])) printf ("%d %d %.2f %s\n", id[pos], quantidade[pos], valor[pos], nome[0]);
	pos++;*/
}
