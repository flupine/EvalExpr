##
## Makefile for evalexpr in /home/flupine/Documents/evalexpr
##
## Made by Faurest Lupine
## Login   <faurest.lupine@epitech.eu>
##
## Started on  ven. oct. 27 15:21:27 2017 Faurest Lupine
## Last update ven. oct. 27 16:21:11 2017 Faurest Lupine
##

NAME = eval_expr
SRC = src/eval_expr.c src/main.c
FLAGS = -I include/ -o $(NAME)
CC = gcc

all: $(NAME)

$(NAME):
	$(CC) $(SRC) $(FLAGS)

clean:
	rm $(NAME)

re: clean all
