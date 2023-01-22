

NAME =array
RM = rm -rf
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address
SRCS = main_1.cpp
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