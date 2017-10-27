/*
** functions.c for EvalExpr in /home/flupine/Documents/EvalExpr
** 
** Made by Faurest Lupine
** Login   <faurest.lupine@epitech.eu>
** 
** Started on  mer. oct. 25 14:28:15 2017 Faurest Lupine
** Last update mer. oct. 25 14:28:20 2017 Faurest Lupine
*/

#include "header.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

int		ft_atoi(char **str)
{
	int res;

	res = 0;
	while (**str >= '0' && **str <= '9')
	{
		res = res * 10 + (**str - '0');
		(*str)++;
	}
	return (res);
}
