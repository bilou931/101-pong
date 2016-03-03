##
## Makefile for makefile in /home/behere_s/rendu/maths/101pong
## 
## Made by Sébastien Beheretche
## Login   <behere_s@epitech.net>
## 
## Started on  Thu Nov  5 17:36:32 2015 Sébastien Beheretche
## Last update Thu Nov  5 17:42:59 2015 Sébastien Beheretche
##

SRCS =		main.c\
		101pong.c

OBJS =		$(SRCS:.c=.o)

NAME =		101pong

RM =		rm -f

CC =		gcc

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS) -lm

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
