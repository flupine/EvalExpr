/*
** my_atoi.c for my in /home/flupine/Documents/evalexpr/lib/my
** 
** Made by Faurest Lupine
** Login   <faurest.lupine@epitech.eu>
** 
** Started on  ven. oct. 27 15:16:50 2017 Faurest Lupine
** Last update ven. oct. 27 17:17:34 2017 Faurest Lupine
*/

int		my_atoi(char **str)
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
