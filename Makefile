# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bimartin <bimartin@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/10 14:41:24 by bimartin          #+#    #+#              #
#    Updated: 2023/01/10 14:42:53 by bimartin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = push_swap

HEADER = push_swap.h

SRC = 	ft_printf/ft_charnstr.c ft_printf/ft_printf.c ft_printf/ft_ptr.c ft_printf/ft_putnumbers.c \ 
		moves_push.c moves_swap.c moves_rotate.c moves_reverserotate.c \
		push_swap.c
	

OBJ = $(SRC:.c=.o)

DEPS = $(SRC:.c=.d)

FLAGS = -Wall -Wextra -Werror -MMD -MP -g -I mlx

RM = rm -f

DEF_COLOR := \033[0;39m
GRAY := \033[0;90m
RED := \033[0;91m
GREEN := \033[0;92m
YELLOW := \033[0;93m
BLUE := \033[0;94m
MAGENTA := \033[0;95m
CYAN := \033[0;96m
WHITE := \033[0;97m

%.o : %.c
	@printf "$(BLUE)	Compiling: $(YELLOW)$< $(DEF_COLOR)								\r"
	@$(CC) $(FLAGS) -c $< -o $@


all: $(NAME)

-include $(DEPS)
$(NAME) : $(OBJ)
	@printf "$(CYAN)\r	=-=-=-=-=push_swap succesfully compiled.=-=-=-=-=\n$(DEF_COLOR)"
	@gcc -Wall -g -Werror -Wextra -L. -lmlx -framework OpenGL -framework Appkit $(OBJ) -o $(NAME)
	

clean :
	@$(RM) $(OBJ)
	@$(RM) $(DEPS)
	@echo "$(BLUE)	push_swap object files cleaned.$(DEF_COLOR)"

fclean : clean
	@$(RM) $(NAME)
	@echo "$(MAGENTA)	All objects, dependencies and executables from push_swap were removed.$(DEF_COLOR)"

re : fclean all

.PHONY : all clean fclean re
