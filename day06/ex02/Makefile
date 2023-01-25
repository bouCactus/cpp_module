# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aboudarg <aboudarg@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/24 15:38:37 by aboudarg          #+#    #+#              #
#    Updated: 2023/01/24 15:38:38 by aboudarg         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



NAME=realType
RM = rm -rf
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic
SRCS = main.cpp Base.cpp identify.cpp A.cpp B.cpp C.cpp
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
