# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: scuter <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/14 01:18:25 by scuter            #+#    #+#              #
#    Updated: 2022/07/14 12:49:32 by scuter           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = animals
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp main.cpp
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
