# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: scuter <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/08 18:26:09 by scuter            #+#    #+#              #
#    Updated: 2022/07/08 18:28:02 by scuter           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harl

CC = c++

STD = -std=c++98

FLAGS = -Wall -Wextra -Werror

SRC_NAME =	main.cpp \
			Harl.cpp \

INCLUDES = 	Harl.hpp

OBJ_NAME = $(SRC_NAME:.cpp=.o)

OBJ = $(addprefix $(OBJ_DIR),$(OBJ_NAME))


all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(STD) $(FLAGS) -o $(NAME) $(OBJ)
	@echo "Compiled."

$(OBJ_DIR)%.o: %.cpp $(INCLUDES)
	$(CC) $(STD) $(FLAGS) -c $< -I. -o $@

clean:
	@rm -f $(OBJ)
	@echo "Removed object files."

fclean: clean
	@rm -f $(NAME)
	@echo "Removed binary files."

re: fclean all

.PHONY: all clean fclean re
