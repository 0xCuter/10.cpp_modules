# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: scuter <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/27 17:07:56 by scuter            #+#    #+#              #
#    Updated: 2022/07/07 01:18:48 by scuter           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = megaphone
CC = c++
STD = -std=c++98
FLAGS = -Wall -Wextra -Werror

SRC_NAME =	megaphone.cpp \

OBJ_NAME = $(SRC_NAME:.cpp=.o)

OBJ = $(OBJ_NAME)


all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(STD) $(FLAGS) -o $(NAME) $(OBJ)
	@echo "Compiled."

$(OBJ_DIR)%.o: %.cpp
	$(CC) $(STD) $(FLAGS) -c $< -I. -o $@

clean:
	@rm -f $(OBJ)
	@echo "Removed object files."

fclean: clean
	@rm -f $(NAME)
	@echo "Removed binary files."

re: fclean all

.PHONY: all clean fclean re
