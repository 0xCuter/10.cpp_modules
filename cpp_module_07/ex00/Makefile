# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: scuter <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/17 02:14:39 by scuter            #+#    #+#              #
#    Updated: 2022/07/18 02:02:03 by scuter           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = templates
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp
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
