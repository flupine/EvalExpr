#ifndef HEADER_H
# define HEADER_H

# include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
int		ft_is_whitespace(char c);
int		ft_atoi(char **str);
int		parse_atom(char **expr);
int		parse_factors(char **expr);
int		parse_summands(char **expr);
int		eval_expr(char *str);

#endif
