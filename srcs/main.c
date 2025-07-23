#include "header.h"

// Global var

char	nome[MAX_P][MAX_CHR];
int	id[MAX_P];
int	quantity[MAX_P];
float	value[MAX_P];

int	main (void) {

	// Booting
	ft_start (id, &nome[MAX_CHR], value, quantity);
	ft_insert(id, nome[MAX_P][MAX_CHR], value, quantity);
}
