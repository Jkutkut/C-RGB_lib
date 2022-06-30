# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jre-gonz <jre-gonz@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/30 19:33:35 by jre-gonz          #+#    #+#              #
#    Updated: 2022/06/30 22:55:09 by jre-gonz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Binaries variables
BIN			=	./bin# Bin location
SRC			=	./src# Source location
INCLUDE_L	=	./include# Include location

# Compiler options
CC			=	gcc
FLAGS		=	-Wall -Wextra -Werror
INCLUDE		=	-I $(INCLUDE_L)
COMPILE		=	@$(CC) $(FLAGS) $(INCLUDE)
COMPILE_LIB	=	@ar -rcs
NAME		=	rbglib.a

# Colors:
NC			=	\033[0m
RED			=	\033[0;31m
GREEN		=	\033[0;32m
LRED		=	\033[1;31m
LGREEN		=	\033[1;32m
YELLOW		=	\033[1;33m
LBLUE		=	\033[1;34m
TITLE		=	\033[38;5;33m

# Code
TOOLS		=	ft_strlen.c \
				ft_hextoc.c

RGBLIB		=	is_rgb_str.c \
				storgb.c

SOURCE		=	$(TOOLS:%=tools/%) \
				$(RGBLIB)

SOURCE_CODE	=	$(SOURCE:%=$(SRC)/%)

OBJ			=	$(SOURCE_CODE:$(SRC)/%.c=$(BIN)/%.o)


# Triggers

all: $(NAME)

$(NAME): $(OBJ)
	@echo "\n${TITLE}Compiling${NC} ${YELLOW}rbglib${NC} into ${YELLOW}$(NAME)${NC}\c"
	$(COMPILE_LIB) $(NAME) $(OBJ)
	@echo " ${GREEN}[OK]${NC}\n"

$(BIN)/%.o: $(SRC)/%.c
	@echo "- ${TITLE}Compiling${NC} $< -> $@\c"
	@mkdir -p ${dir $@}
	@$(COMPILE) -c $< -o $@
	@echo " ${GREEN}[OK]${NC}"

# Clean logic

.PHONY: re fclean

re: fclean all

fclean: clean
	@echo "- ${RED}Removing${NC} $(NAME)"
	@rm -f $(NAME)
	@echo "Project ${YELLOW}rbglib ${GREEN}clean${NC}.\n"

clean:
	@echo "- ${RED}Removing${NC} binary directory"
	@rm -rf $(BIN)


# Tests
tester: .test/storgb_test.c $(NAME) 
	@echo "\n$(TITLE)Compiling$(YELLOW) tester$(NC)\c"
	$(COMPILE) $^ -I include -o $@
	@echo " $(GREEN)[OK]$(NC)"
	@echo "\n$(TITLE)Executing$(YELLOW) tester$(NC)"
	@./$@
