#include "header.h"

// Global var

char	nome[MAX_P][MAX_CHR];
int	id[MAX_P];
int	quantity[MAX_P];
float	value[MAX_P];

int	posit = 0;

int	main (void) {

	// Booting
	ft_start (id, nome, value, quantity);
	ft_insert(&id[posit], &nome[posit], &value[posit], &quantity[posit]);
}
