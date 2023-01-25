# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aboudarg <aboudarg@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/24 15:37:51 by aboudarg          #+#    #+#              #
#    Updated: 2023/01/24 15:37:52 by aboudarg         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME=simpleCast
RM = rm -rf
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp 
CXXOBJS = $(SRCS:.cpp=.o)

.cpp.o:
	$(CXX) $(CXXFLAGS) -c $< -o $@

all: $(NAME)


$(NAME): $(CXXOBJS)
	$(CXX) $(CXXFLAGS) $(CXXOBJS) -o $(NAME)

clean:
	$(RM) $(CXXOBJS)

fclean: clean
	$(RM) $(NAME)

re: clean all

.PHONY: all clean fclean re
