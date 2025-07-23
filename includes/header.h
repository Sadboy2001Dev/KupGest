// Starts a Header Guard

# ifndef HEADER_H
# define HEADER_H

// All libraries that will be used

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Defines the prototypes of the functions that 
// can be called by the header

int	ft_getname (char *name[MAX_P]);
int	ft_getid (int *id);
int	ft_getvalue (float *value);
int	ft_getquantity (int *quantity);
int	ft_stock (int *quantity);
int	ft_check_char (char *name[MAX_P]);
void    ft_start (int id[MAX_P], char name[MAX_P][MAX_CHR], float valeu[MAX_P], int quantity[MAX_P])
int	ft_search (char *name[MAX_P]);
int	ft_insert (int id[MAX_P], char *name[MAX_P], float value[MAX_P], int quantity[MAX_P]);
// Defines the Max product that will be stored

# define MAX_P 10

// Define the Max charactere suported by a string

# define MAX_CHR 100

// Integer to show the actual position

int	posit = 0;

// Defines the struct that will be used


// End a Header Guard

# endif
