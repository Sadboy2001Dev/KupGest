#include "header.h"

// Global var

char	nome[MAX_P][MAX_CHR];
int	id[MAX_P];
int	quantity[MAX_P];
float	value[MAX_P];

int	main (void) {

	// Booting
	start (nome, id, quantity, value);
	ft_insert();
}
