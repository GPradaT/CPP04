# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gprada-t <gprada-t@student.42barcelona.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/23 22:30:03 by gprada-t          #+#    #+#              #
#    Updated: 2024/07/24 13:26:57 by gprada-t         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = WorldOnFire

SRCS = Animal.cpp Brain.cpp Cat.cpp Dog.cpp
OBJS = $(SRCS:.cpp=.o)
DEPS = $(SRCS:.cpp=.d)

CPPNDFLAGS = c++ -std=c++98 -Wall -Wextra -Werror -fsanitize=address -MMD -MP

all: $(NAME)

test: main_test.o $(OBJS)
	$(CPPNDFLAGS) $(OBJS) main_test.o -o test

$(NAME): main.o $(OBJS)
	$(CPPNDFLAGS) $(OBJS) main.o -o $(NAME)

%.o:%.cpp %.hpp
	$(CPPNDFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS) $(DEPS) main_test.o main.o

fclean: clean
	rm -rf test $(NAME)

re: fclean all

.PHONY: all clean fclean re test

-include: $(DEPS)

