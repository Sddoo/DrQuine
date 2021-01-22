# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hfrankly <hfrankly@student.21.ru>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/16 14:17:06 by clanglai          #+#    #+#              #
#    Updated: 2021/01/22 23:12:05 by hfrankly         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=nasm -f macho64
CC2=gcc

COLLEEN_SRC=Colleen.s
GRACE_SRC=Grace.s
SULLY_SRC=Sully.s

COLLEEN_OUT=Colleen
GRACE_OUT=Grace
SULLY_OUT=Sully

COLLEEN_OBJ=$(COLLEEN_SRC:.s=.o)
GRACE_OBJ=$(GRACE_SRC:.s=.o)
SULLY_OBJ=$(SULLY_SRC:.s=.o)

OTHER=Sully_* Grace_kid.s

all: colleen grace sully

%.o:%.s
	@$(CC) $<

colleen: $(COLLEEN_OBJ)
	@gcc $(COLLEEN_OBJ) -o $(COLLEEN_OUT)

grace: $(GRACE_OBJ)
	@gcc $(GRACE_OBJ) -o $(GRACE_OUT)

sully: $(SULLY_OBJ)
	@gcc $(SULLY_OBJ) -o $(SULLY_OUT)

clean:
	rm -rf $(COLLEEN_OBJ) $(GRACE_OBJ) $(SULLY_OBJ) Sully_*.o

fclean: clean
	rm -rf $(COLLEEN_OUT) $(GRACE_OUT) $(SULLY_OUT) $(OTHER)

re: fclean all
