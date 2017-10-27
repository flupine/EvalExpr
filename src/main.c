/*
** main.c for src in /home/flupine/Documents/evalexpr/src
** 
** Made by Faurest Lupine
** Login   <faurest.lupine@epitech.eu>
** 
** Started on  mer. oct. 25 13:58:58 2017 Faurest Lupine
** Last update ven. oct. 27 15:59:46 2017 Faurest Lupine
*/

#include "include/my.h"

int main(int ac , char **av)
{
	if (ac == 2)
	{
		my_put_nbr(eval_expr(av[1]));
		my_putchar('\n') ;
		return(0);
	}
	return(84);
}
