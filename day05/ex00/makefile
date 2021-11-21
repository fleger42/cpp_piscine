NAME = ex00

CXX = clang++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

HEADER = Bureaucrat.hpp

SRCS = main.cpp Bureaucrat.cpp

OBJ = $(SRCS:cpp=o)

all: $(NAME)

$(NAME): $(OBJ)
	@echo "\n"
	@echo "\033[0;32mCompiling..."
	@$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ) -I $(HEADER)
	@echo "\n\033[0mDone !"

%.o: %.c
	@printf "\033[0;33mGenerating objects... %-33.33s\r" $@
	@${CXX} ${CXXFLAGS} -I $(HEADER) -c $< -o $@

clean:
	@echo "\nRemoving binaries..."
	@rm -f $(OBJ)
	@echo "\033[0m"

fclean:
	@echo "\nDeleting objects..."
	@rm -f $(OBJ)
	@echo "\nDeleting executable..."
	@rm -f $(NAME)
	@echo "\033[0m"

re: fclean all

.PHONY: clean fclean re test norm