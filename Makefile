# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaeskim <jaeskim@student.42seoul.kr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/24 20:10:49 by jaeskim           #+#    #+#              #
#    Updated: 2020/10/09 14:50:54 by jaeskim          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

AR = ar
ARFLAGS = rcs

CC = gcc
CFLAGS = -Wall -Wextra -Werror

RM = rm
RMFLAGS = -f

INC_DIR = ./include
SRC_DIR = ./src
OBJ_DIR = ./obj

SRCS = $(wildcard $(SRC_DIR)/*.c)
OBJS = $(addprefix $(OBJ_DIR)/, $(notdir $(SRCS:.c=.o)))
INCS = $(wildcard $(INC_DIR)/*.h)

# Color

BG_BLACK   = \e[40m
BG_RED     = \e[41m
BG_GREEN   = \e[42m
BG_YELLOW  = \e[43m
BG_BLUE    = \e[44m
BG_MAGENTA = \e[45m
BG_CYAN    = \e[46m
BG_LGREY   = \e[47m
BG_DGREY   = \e[100m
BG_LRED    = \e[101m
BG_LGREEN  = \e[102m
BG_LYELLOW = \e[103m
BG_LBLUE   = \e[104m
BG_LMAGENTA= \e[105m
BG_LCYAN   = \e[106m
BG_WHITE   = \e[107m
 
FG_BLACK   = \e[30m
FG_RED     = \e[31m
FG_GREEN   = \e[32m
FG_YELLOW  = \e[33m
FG_BLUE    = \e[34m
FG_MAGENTA = \e[35m
FG_CYAN    = \e[36m
FG_LGREY   = \e[37m
FG_DGREY   = \e[90m
FG_LRED    = \e[91m
FG_LGREEN  = \e[92m
FG_LYELLOW = \e[93m
FG_LBLUE   = \e[94m
FG_LMAGENTA= \e[95m
FG_LCYAN   = \e[96m
FG_WHITE   = \e[97m
 
CL_BOLD   = \e[1m
CL_DIM    = \e[2m
CL_UDLINE = \e[4m
CL_BLINK  = \e[5m
CL_INVERT = \e[7m
CL_HIDDEN = \e[8m
 
NO_COLOR = \e[0m

all : $(NAME)

clean :
	$(RM) $(RMFLAGS) $(OBJS)

fclean : clean
	$(RM) $(RMFLAGS) $(NAME)

re : fclean all

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c $(INCS)
	@echo "$(FG_LCYAN)Create $@ from $<$(NO_COLOR)"
	@$(CC) $(CFLAGS) -I $(INC_DIR) -c $< -o $@

$(NAME) : $(OBJS)
	@echo "$(FG_LCYAN)Archive objects to $(NAME)$(NO_COLOR)"
	@$(AR) $(ARFLAGS) $@ $^
	@echo "$(CL_BOLD)$(FG_GREEN)Archive Success!!$(NO_COLOR)"

.PHONY: all init finish clean fclean re
