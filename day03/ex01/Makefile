# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aboudarg <aboudarg@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/18 07:58:28 by aboudarg          #+#    #+#              #
#    Updated: 2023/01/18 07:58:29 by aboudarg         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = ScavTrap

RM = rm -rf
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g
SRCS = main.cpp ClapTrap.cpp ScavTrap.cpp
CXXOBJ = $(SRCS:.cpp=.o)

.cpp.o:
	$(CXX) $(CXXFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(CXXOBJ)
		$(CXX) $(CXXFLAGS) $(CXXOBJ) -o $(NAME)

clean:
	$(RM) $(CXXOBJ)
fclean : clean
	$(RM) $(NAME)

re : clean all

.PHONY:		all clean fclean re