#include "header.h"

int	ft_getvalue (float *value) {
	// Output info
	printf ("Informe o valor: ");
	scanf ("%f", &value);
	// Verify if is number and return one if it is
	if (isnumber (value))
		return 1;
	// if isn't return zero
	return 0;
}
