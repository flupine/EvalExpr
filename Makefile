##
## Makefile for EvalExpr in /home/flupine/Documents/EvalExpr
##
## Made by Faurest Lupine
## Login   <faurest.lupine@epitech.eu>
##
## Started on  mer. oct. 25 14:29:16 2017 Faurest Lupine
## Last update mer. oct. 25 14:29:19 2017 Faurest Lupine
##
NAME = eval_expr
SRC = ./main.c ./functions.c ./eval_expr.c
OPTIONS = -I ./ -o $(NAME)

all:
	gcc $(SRC) $(OPTIONS)

clean:
	/bin/rm $(NAME)

fclean: clean all
