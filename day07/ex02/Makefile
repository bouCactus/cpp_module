# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aboudarg <aboudarg@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/25 14:58:33 by aboudarg          #+#    #+#              #
#    Updated: 2023/01/25 14:58:34 by aboudarg         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



NAME =array
RM = rm -rf
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address
SRCS = main.cpp
CXXOBJ = $(SRCS:.cpp=.o)


.cpp.o:
	$(CXX) $(CXXFLAGS) -c $< -o $@

all: $(NAME)

$(NAME) : $(CXXOBJ)
	$(CXX) $(CXXFLAGS) $(CXXOBJ) -o $(NAME)

clean:
	$(RM) $(CXXOBJ)

fclean: clean
	$(RM) $(NAME)

re: clean all

.PHONY: clean fclean all re