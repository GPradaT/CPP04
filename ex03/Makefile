# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gprada-t <gprada-t@student.42barcelona.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/23 22:30:03 by gprada-t          #+#    #+#              #
#    Updated: 2024/09/05 15:38:19 by gprada-t         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = InterfaceRecap

SRCS = AMateria.cpp Ice.cpp Cure.cpp Character.cpp main.cpp MateriaSource.cpp
OBJS = $(SRCS:.cpp=.o)
DEPS = $(SRCS:.cpp=.d)

CPPNDFLAGS = c++ -std=c++98 -Wall -Wextra -Werror -fsanitize=address -MMD -MP

all: $(NAME)

$(NAME): $(OBJS)
	$(CPPNDFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp %.hpp
	$(CPPNDFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS) $(DEPS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re

-include: $(DEPS) 

