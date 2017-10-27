/*
** main.c for EvalExpr in /home/flupine/Documents/EvalExpr
** 
** Made by Faurest Lupine
** Login   <faurest.lupine@epitech.eu>
** 
** Started on  mer. oct. 25 14:28:35 2017 Faurest Lupine
** Last update mer. oct. 25 14:28:37 2017 Faurest Lupine
*/
#include "header.h"

int		main(int ac, char **av)
{
	if (ac > 1)
	{
		ft_putnbr(eval_expr(av[1]));
		ft_putchar('\n');
	}
	return (0);
}
