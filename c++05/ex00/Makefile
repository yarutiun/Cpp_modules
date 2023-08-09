NAME 	= Bureaucrat...
CC 		= c++
CFLAGS 	= -Wextra -Wall -Werror -std=c++98
DEBUG 	= -g -fsanitize=address

# Clean
RM = rm -rf

# Source and object files
SRC =	main.cpp Bureaucrat.cpp
OBJ	=	$(SRC:.cpp=.o)

# Colors
GREEN	:= \x1b[32m
RESET	:= \033[0m

# Rules
all: $(NAME)
# $(DEBUG)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "$(GREEN)Executable <$(NAME)> compiled successfully.$(RESET)"

clean:
	@$(RM) $(OBJ)
	@echo "$(GREEN)Object files removed.$(RESET)"

fclean: clean
	@$(RM) $(NAME)
	@echo "$(GREEN)Removed executable.$(RESET)"
	
re: fclean all

.SILENT: $(OBJ)
.PHONY: all clean fclean re