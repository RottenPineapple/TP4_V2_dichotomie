#
# @ Author: LORD
# @ Create Time: 2022-05-12 14:23:46
# @ Modified by: vlagard@btslivh.eu
# @ Modified time: 2022-05-12 14:24:58
# @ Description: Makefile
#

SRC	=	src/main.cpp	\
		src/recherche_lineaire.cpp	\
		src/recherche_dichotomique.cpp


NAME	=	./bin/TP3

CC	=	g++

CFLAGS	=	-I./includes/ $(SRC) -W -Wall -Wextra -pedantic -o 

all:	$(NAME)

$(NAME):
		$(CC) $(CFLAGS) $(NAME)

run:
	./bin/$(NAME)

clean:
	rm -rf *.o

fclean:	clean
		rm -rf $(NAME)

re:	fclean all