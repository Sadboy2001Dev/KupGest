// Starts a Header Guard

# ifndef HEADER_H
# define HEADER_H

// All libraries that will be used

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

// Defines the max product stored
# define MAX_P 10

// Define the Max charactere suported by a string

# define MAX_CHR 100

// Global variable (for use extern of the header)

extern char	nome[MAX_P][MAX_CHR];
extern int	id[MAX_P];
extern int	quantidade[MAX_P];
extern int	pos;
extern float	valor[MAX_P];

// Defines the prototypes of the functions that 
// can be called by the header

int	ft_getname (char name[MAX_P][MAX_CHR]);
int	ft_getid (int id[MAX_P]);
int	ft_getvalue (float value[MAX_P]);
int	ft_getquantity (int quantity[MAX_P]);
int	ft_stock (int *quantity[MAX_P]);
int	ft_check_char(void);
void    ft_start (int id[MAX_P], char name[MAX_P][MAX_CHR], float value[MAX_P], int quamtity[MAX_P]);
int	ft_search (int id[MAX_P]);
int	ft_insert (int id[MAX_P], char name[MAX_P][MAX_CHR], float value[MAX_P], int quantity[MAX_P]);
void	ft_print (int id[MAX_P], char name[MAX_P][MAX_CHR], float value[MAX_P], int quantity[MAX_P]);
int	menu (void);
int	sub_menu (void);
void	ft_close (void);
int	ft_save (void);
int	ft_load (void);
int	ft_delete (void);
//int	verify_id (int id[MAX_P]);

// End a Header Guard

# endif
