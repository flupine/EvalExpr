##
## Makefile for evalexpr in /home/flupine/Documents/evalexpr
##
## Made by Faurest Lupine
## Login   <faurest.lupine@epitech.eu>
##
## Started on  ven. oct. 27 15:21:27 2017 Faurest Lupine
## Last update ven. oct. 27 17:08:16 2017 Faurest Lupine
##

NAME = eval_expr
SRC = src/eval_expr.c
FLAGS = -c -I include/
CC = cc

all: $(NAME)

$(NAME):
	$(CC) $(SRC) $(FLAGS)
	$(CC) src/main.c $(FLAGS)
	$(CC) *.o -L lib -o $(NAME) -lmy
	rm *.o
clean:
	rm $(NAME)

re: clean all
