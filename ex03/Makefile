NAME= fixed
CXX= c++
RM= rm -rf
CXXFLAGS= -Werror -Wextra -Wall -std=c++98
SRC= main.cpp Fixed.cpp Point.cpp bsp.cpp
OBJ=$(SRC:.cpp=.o)

all: $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
