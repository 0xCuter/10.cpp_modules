# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: scuter <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/14 01:18:25 by scuter            #+#    #+#              #
#    Updated: 2022/07/16 20:09:27 by scuter           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bureaucracy
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = Bureaucrat.cpp Form.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp PresidentialPardonForm.cpp main.cpp
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
