# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aboudarg <aboudarg@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/20 16:12:56 by aboudarg          #+#    #+#              #
#    Updated: 2023/01/20 16:12:57 by aboudarg         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME= bureaucrat
RM = rm -rf
CXXFLAGS= -Wall -Wextra -Werror -std=c++98 -pedantic
SRCS = main.cpp Bureaucrat.cpp
CXXOBJ = $(SRCS:.cpp=.o)
CXX = c++

all: $(NAME)

.cpp .o:
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME): $(CXXOBJ)
	$(CXX) $(CXXFLAGS) $(CXXOBJ) -o $(NAME)

clean:
	$(RM) $(CXXOBJ) 
fclean: clean
	$(RM) $(NAME)

re: clean all

.PHONY: all clean fclean re
