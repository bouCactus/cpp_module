
NAME= bureaucrat
RM = rm -rf
CXXFLAGS= -Wall -Wextra -Werror -std=c++98 -g
SRCS = main.cpp Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp
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
	