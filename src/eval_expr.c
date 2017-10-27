/*
** eval_expr.c for src in /home/flupine/Documents/evalexpr/src
** 
** Made by Faurest Lupine
** Login   <faurest.lupine@epitech.eu>
** 
** Started on  mer. oct. 25 14:25:40 2017 Faurest Lupine
** Last update ven. oct. 27 14:59:17 2017 Faurest Lupine
*/

#include "include/my.h"

int		parse_op(char **expr);
int		parse_factors(char **expr);

int		parse_par(char **expr)
{
	int atom;

	while (**expr == ' ')
		(*expr)++;
	if (**expr == '(')
	{
		(*expr)++;
		atom = parse_op(expr);
		if (**expr == ')')
			(*expr)++;
		return (atom);
	}
	return (my_put_nbr(expr[1]));
}

int		parse_factors(char **expr)
{
	int		factor;
	int		factor2;
	char	op;

	factor = parse_par(expr);
	while (**expr == ' ')
		(*expr)++;
	op = **expr;
	if (op != '*' && op != '/')
		return (factor);
	(*expr)++;
	factor2 = parse_par(expr);
	if (op == '*')
		factor *= factor2;
	if (op == '/')
		factor /= factor2;
	return (factor);
}

int		parse_op(char **expr)
{
	int		summand;
	int		summand2;
	char	op;

	summand = parse_factors(expr);
	while (**expr)
	{
		while (**expr == ' ')
			(*expr)++;
		op = **expr;
		if (op != '+' && op != '-')
			return (summand);
		(*expr)++;
		summand2 = parse_factors(expr);
		if (op == '+')
			summand += summand2;
		if (op == '-')
			summand -= summand2;
	}
	return (summand);
}

int		eval_expr(char *str)
{
	return (parse_op(&str));
}
