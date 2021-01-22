# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hfrankly <hfrankly@student.21.ru>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/16 14:17:06 by clanglai          #+#    #+#              #
#    Updated: 2021/01/22 22:50:27 by hfrankly         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC= gcc -Wall -Wextra -Werror
COLLEEN_SRC=Colleen.c
COLLEEN_OUT=Colleen
GRACE_SRC=Grace.c
GRACE_OUT=Grace
SULLY_SRC=Sully.c
SULLY_OUT=Sully
OBJ_FILES=	Sully*.o \
			Grace.o \
			Collen.o
SULLY_TO_DEL=Sully_*

all: colleen grace sully

colleen: $(COLLEEN_OUT)
	@$(CC) -o $(COLLEEN_OUT) $(COLLEEN_SRC)

grace: $(GRACE_OUT)
	@$(CC) -o $(GRACE_OUT) $(GRACE_SRC)

sully: $(SULLY_OUT)
	@$(CC) -o $(SULLY_OUT) $(SULLY_SRC)

clean:
	@rm -rf $(OBJ_FILES)

fclean: clean
	@rm -rf $(COLLEEN_OUT) $(GRACE_OUT) $(SULLY_OUT) $(SULLY_TO_DEL) Grace_kid.c

test_colleen:
	./Colleen > test
	diff test Colleen.c

test_grace:
	./Grace
	diff Grace_kid.c Grace.c

re: fclean all
