
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
