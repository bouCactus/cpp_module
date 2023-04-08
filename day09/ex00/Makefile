# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aboudarg <aboudarg@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/05 12:54:02 by aboudarg          #+#    #+#              #
#    Updated: 2023/04/05 12:54:03 by aboudarg         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



NAME = btc

RM = rm -rf
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g -fsanitize=address
SRCS = main.cpp BitcoinExchange.cpp
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
