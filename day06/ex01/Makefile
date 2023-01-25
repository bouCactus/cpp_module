# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aboudarg <aboudarg@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/24 15:38:01 by aboudarg          #+#    #+#              #
#    Updated: 2023/01/24 15:38:02 by aboudarg         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME=serialize
RM= rm -rf
CXX= c++
CXXFLAGS= -Wall -Wextra -Werror -std=c++98
SRCS= main.cpp serialize.cpp
CXXOBJS= $(SRCS:.cpp=.o)


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

.PHONY: clean fclean all

