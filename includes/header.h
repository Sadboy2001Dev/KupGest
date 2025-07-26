// Starts a Header Guard

# ifndef HEADER_H
# define HEADER_H

// All libraries that will be used

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Defines the max product stored
# define MAX_P 10

// Define the Max charactere suported by a string

# define MAX_CHR 100

                                                // Integer to show the actual position
						extern int posit;

// Defines the prototypes of the functions that 
// can be called by the header

int	ft_getname (char name[MAX_P][MAX_CHR]);
int	ft_getid (int id[posit]);
int	ft_getvalue (float value[MAX_P]);
int	ft_getquantity (int quantity[MAX_P]);
int	ft_stock (int *quantity[MAX_P]);
int	ft_check_char (char name[MAX_P][MAX_CHR]);
void    ft_start (int id[MAX_P], char name[MAX_P][MAX_CHR], float value[MAX_P], int quamtity[MAX_P]);
int	ft_search (char name[MAX_P][MAX_CHR]);
int	ft_insert (int id[posit], char name[MAX_P][MAX_CHR], float value[MAX_P], int quantity[MAX_P]);
void	ft_print (int id[MAX_P], char name[MAX_P][MAX_CHR], float value[MAX_P], int quantity[MAX_P]);
int	menu (int id[posit], char name[posit][MAX_CHR], float value[posit], int quantity[posit]);

// Defines the struct that will be used


// End a Header Guard

# endif
