/*
** my_put_nbr.c for my in /home/flupine/CPool_evalexpr_2017/lib/my
**
** Made by Faurest LUPINE
** Login   <faurest.lupine@epitech.eu>
**
** Started on  Wed Oct 04 09:01:01 2017 Faurest LUPINE
** Last update mer. oct. 25 15:26:24 2017 Faurest Lupine
*/

#include <unistd.h>

void	my_putchar(char c);


int		ft_negative(char str)
{
	int sign;

	if (str == '-')
		sign = -1;
	else
		sign = 1;
	return (sign);
}


int		my_put_nbr(char *str)
{
		int integer;
		int i;
		int sign;

		sign = 1;
		i = 0;
		integer = 0;
		while (str[i] == ' ' || str[i] == '\f' || str[i] == '\t'
		|| str[i] == '\n' || str[i] == '\r' || str[i] == '\v')
			i++;
		if (str[i] == '+' || str[i] == '-')
		{
			sign = ft_negative(str[i]);
			i++;
		}
		while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
		{
			integer = integer * 10 + (str[i] - '0') * sign;
			i++;
		}
		return (integer);

}
