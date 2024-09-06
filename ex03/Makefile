# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gprada-t <gprada-t@student.42barcelona.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/23 22:30:03 by gprada-t          #+#    #+#              #
#    Updated: 2024/09/06 10:30:43 by gprada-t         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = InterfaceRecap

SRCS = AMateria.cpp Ice.cpp Cure.cpp Fire.cpp Water.cpp \
		Character.cpp MateriaSource.cpp main.cpp
OBJS = $(SRCS:.cpp=.o)
DEPS = $(SRCS:.cpp=.d)

CPPNDFLAGS = c++ -g -std=c++98 -Wall -Wextra -Werror -fsanitize=address -MMD -MP

all: $(NAME)

test: SRCS += test.cpp
test: OBJS = $(SRCS:.cpp=.o)
test: DEPS = $(SRCS:.cpp=.d)
test: $(NAME)

$(NAME): $(OBJS)
	$(CPPNDFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp %.hpp Makefile
	$(CPPNDFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS) $(DEPS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re

-include: $(DEPS)
