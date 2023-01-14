# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aboudarg <aboudarg@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/13 17:39:25 by aboudarg          #+#    #+#              #
#    Updated: 2023/01/13 17:39:26 by aboudarg         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME= megaphone
RM = rm -rf
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic
SRCS = megaphone.cpp
CXXOBJS = $(SRCS:.cpp=.o)

.cpp.o:
	$(CXX) $(CXXFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(CXXOBJS)
	$(CXX) $(CXXFLAGS) $(CXXOBJS) -o $(NAME)

clean: $(CXXOBJS)
	$(RM) $(CXXOBJS)
fclean: clean
	$(RM) $(NAME)
re: clean all

.PHONY: all clean fclean re
