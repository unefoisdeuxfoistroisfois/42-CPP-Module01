.PHONY : all clean fclean re
.SILENT :

NAME    = replace
CXX     = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRC     = main.cpp
OBJ     = $(SRC:.cpp=.o)
RM      = rm -f

all:    $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
	@echo "\033[1;32mCOMPILATION REUSSIE\033[0m"

clean:
	$(RM) $(OBJ)
	@echo "\033[1;31mSUPPRESSION DES .O\033[0m"

fclean: clean
	$(RM) $(NAME)
	@echo "\033[1;31mSUPPRESSION DU BINAIRE\033[0m"

re: fclean all