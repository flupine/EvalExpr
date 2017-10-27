/*
** my_atoi.c for my in /home/flupine/Documents/evalexpr/lib/my
** 
** Made by Faurest Lupine
** Login   <faurest.lupine@epitech.eu>
** 
** Started on  ven. oct. 27 15:16:50 2017 Faurest Lupine
** Last update ven. oct. 27 15:38:45 2017 Faurest Lupine
*/

int		my_atoi(char *str)
{
	int i;
	int negative;
	int number;

	i = 0;
	negative = 0;
	number = 0;
	while ((str[i] == ' ') || (str[i] == '\n') || (str[i] == '\v')
	|| (str[i] == '\f') || (str[i] == '\r') || (str[i] == '\t'))
		i++;
	if (str[i] == 45)
		negative = 1;
	if ((str[i] == 43) || (str[i] == 45))
		i++;
	while ((str[i] >= 48) && (str[i] <= 57))
	{
		number *= 10;
		number += ((int)str[i] - 48);
		i++;
	}
	if (negative == 1)
		return (-number);
	else
		return (number);
}
