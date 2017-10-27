##
## Makefile for evalexpr in /home/flupine/Documents/evalexpr
##
## Made by Faurest Lupine
## Login   <faurest.lupine@epitech.eu>
##
## Started on  ven. oct. 27 15:21:27 2017 Faurest Lupine
## Last update ven. oct. 27 16:34:46 2017 Faurest Lupine
##

NAME = eval_expr
SRC = src/eval_expr.c src/main.c
FLAGS =  -c -I include/ -L lib
CC = gcc

all: $(NAME)

$(NAME):
	$(CC) $(SRC) $(FLAGS)
	$(CC) -o $(NAME) -lmy
clean:
	rm $(NAME)

re: clean all
