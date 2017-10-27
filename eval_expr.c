/*
** eval_expr.c for EvalExpr in /home/flupine/Documents/EvalExpr
** 
** Made by Faurest Lupine
** Login   <faurest.lupine@epitech.eu>
** 
** Started on  mer. oct. 25 14:25:40 2017 Faurest Lupine
** Last update mer. oct. 25 15:32:01 2017 Faurest Lupine
*/
#include "header.h"

int		parse_atom(char **expr)
{
	int atom;

	while (**expr == ' ')
		(*expr)++;
	if (**expr == '(')
	{
		(*expr)++;
		atom = parse_summands(expr);
		if (**expr == ')')
			(*expr)++;
		return (atom);
	}
	return (ft_atoi(expr));
}

int		parse_factors(char **expr)
{
	int		factor;
	int		factor2;
	char	op;

	factor = parse_atom(expr);
	while (**expr == ' ')
		(*expr)++;
	op = **expr;
	if (op != '*' && op != '/')
		return (factor);
	(*expr)++;
	factor2 = parse_atom(expr);
	if (op == '*')
		factor *= factor2;
	if (op == '/')
		factor /= factor2;
	return (factor);
}

int		parse_summands(char **expr)
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
		if (op != '+' && op != '-' && op != '%')
			return (summand);
		(*expr)++;
		summand2 = parse_factors(expr);
		if (op == '+')
			summand += summand2;
		if (op == '-')
			summand -= summand2;
		if (op == '%')
			summand %= summand2;
	}
	return (summand);
}

int		eval_expr(char *str)
{
	return (parse_summands(&str));
}
