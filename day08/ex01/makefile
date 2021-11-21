NAME = ex01

CXX = clang++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

HEADER =

SRCS = main.cpp span.cpp

OBJ = $(SRCS:cpp=o)

all: $(NAME)

$(NAME): $(OBJ)
	@echo "\n"
	@echo "\033[0;32mCompiling..."
	@$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)
	@echo "\n\033[0mDone !"

%.o: %.c
	@printf "\033[0;33mGenerating objects... %-33.33s\r" $@
	@${CXX} ${CXXFLAGS} -c $< -o $@

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