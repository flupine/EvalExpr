##
## Makefile for evalexpr in /home/flupine/Documents/evalexpr
##
## Made by Faurest Lupine
## Login   <faurest.lupine@epitech.eu>
##
## Started on  mer. oct. 25 14:29:16 2017 Faurest Lupine
## Last update ven. oct. 27 14:54:25 2017 Faurest Lupine
##
NAME = eval_expr
SRC = src/main.c src/eval_expr.c
OPTIONS = -I ./ -o $(NAME)

all:
	gcc $(SRC) $(OPTIONS)

clean:
	/bin/rm $(NAME)

fclean: clean all
