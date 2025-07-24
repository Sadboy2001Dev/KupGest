#include "header.h"

int	ft_getvalue (float value[MAX_P]) {
	// Output info
	printf ("Informe o valor: ");
	scanf ("%f", &value[MAX_P]);
	// Verify if is number and return one if it is
	if (value[MAX_P] >= 0.0)
		return 1;
	// if isn't return zero
	return 0;
}
