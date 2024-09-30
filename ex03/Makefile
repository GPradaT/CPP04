# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gprada-t <gprada-t@student.42barcelona.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/23 22:30:03 by gprada-t          #+#    #+#              #
#    Updated: 2024/09/30 09:16:50 by gprada-t         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = InterfaceRecap

SRCS = AMateria.cpp Ice.cpp Cure.cpp Fire.cpp Water.cpp \
		Character.cpp MateriaSource.cpp main.cpp
SRCS_TEST = AMateria.cpp Ice.cpp Cure.cpp Fire.cpp Water.cpp \
		Character.cpp MateriaSource.cpp test.cpp
OBJS = $(SRCS:.cpp=.o)
OBJS_TEST = $(SRCS_TEST:.cpp=.o)
DEPS = $(SRCS:.cpp=.d)
DEPS_TEST = $(SRCS_TEST:.cpp=.d)

CPPNDFLAGS = c++ -g -std=c++98 -Wall -Wextra -Werror -fsanitize=address -MMD -MP

all: $(NAME)

$(NAME): $(OBJS)
	$(CPPNDFLAGS) $(OBJS) -o $(NAME)

test: $(OBJS_TEST)
	$(CPPNDFLAGS) $(OBJS_TEST) -o $(NAME)

%.o: %.cpp %.hpp Makefile
	$(CPPNDFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS) $(DEPS) $(OBJS_TEST) $(DEPS_TEST)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re test

-include: $(DEPS) $(DEPS_TEST)
