# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: scuter <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/01 16:40:00 by scuter            #+#    #+#              #
#    Updated: 2022/07/07 01:15:34 by scuter           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

CC = c++

STD = -std=c++98

FLAGS = -Wall -Wextra -Werror

SRC_NAME =	Contact.cpp \
			PhoneBook.cpp \
			main.cpp

INCLUDES = Contact.hpp \
		   PhoneBookhpp \

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
