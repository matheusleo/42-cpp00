NAME		:= ex00


SRC_DIR			= ./src/
SRC				=	*.cpp
SRC_FILES		= $(addprefix $(SRC_DIR), $(SRC))

OBJ_PATH 		= ./obj/
OBJ				= $(SRC:.cpp=.o)
OBJ_FILES	= $(addprefix $(OBJ_PATH), $(OBJ))

# General purpose
COMPILE		:= c++
FLAGS		:= -Wall -Wextra -Werror -std=c++98
RM			:= rm -rf

# Colors
OFF				:= \033[0m
RED				:= \033[0;31m
GREEN			:= \033[0;32m
BLUE			:= \033[0;34m

# Rules
all:			$(NAME)

$(NAME):		$(SRC_FILES)
				@$(COMPILE) $(FLAGS) -c $(SRC_FILES)
				@mkdir -p obj
				@mv $(OBJ) $(OBJ_PATH)
				@$(COMPILE) $(FLAGS) $(OBJ_FILES) -o $(NAME)
				@echo "$(NAME) compiled successfully!"

clean:
				@$(RM) $(OBJ_FILES)
				@$(RM) $(OBJ_PATH)
				@echo "$(RED)The object files from $(NAME) were sucessfully removed!$(OFF)"

fclean:			clean
				@$(RM) $(NAME)
				@echo "$(RED)The $(NAME) was removed!$(OFF)"

re:				fclean all

.PHONY:			all clean fclean re