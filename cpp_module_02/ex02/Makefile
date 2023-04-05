# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: scuter <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/11 17:36:48 by scuter            #+#    #+#              #
#    Updated: 2022/07/12 19:48:38 by scuter           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fixed
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = Fixed.cpp main.cpp
INCLUDES = -I ./
OBJ = $(SRC:%.cpp=%.o)

all: $(NAME)

%.o: %.cpp
	$(CC) $(FLAGS) -c -o $@ $< $(INCLUDES)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: fclean re clean all
