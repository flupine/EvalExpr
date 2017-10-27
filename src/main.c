/*
** main.c for src in /home/flupine/CPool_evalexpr_2017/src
** 
** Made by Faurest Lupine
** Login   <faurest.lupine@epitech.eu>
** 
** Started on  mer. oct. 25 13:58:58 2017 Faurest Lupine
** Last update mer. oct. 25 14:01:29 2017 Faurest Lupine
*/

int main(int ac , char **av)
{
	if (ac == 2)
	{
		my_put_nbr(eval_expr(av[1]));
		my_putchar(’\n’) ;
		return(0);
	}
	return(84);
}
