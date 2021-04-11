# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaeskim <jaeskim@student.42seoul.kr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/24 20:10:49 by jaeskim           #+#    #+#              #
#    Updated: 2021/03/20 14:22:44 by jaeskim          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

AR = ar
ARFLAGS = crs

CC = gcc
CFLAGS = -Wall -Wextra -Werror

ifneq ($(DEBUG),true)
	CFLAGS = -O3
endif
ifeq ($(DEBUG),true)
	CDEBUG = -g
endif

RM = rm
RMFLAGS = -f

INC_DIR = include
SRC_DIR = src
OBJ_DIR = obj

HEADERS = $(addprefix $(INC_DIR)/, \
	libft.h	\
	libft_type.h	\
	ft_lst.h	\
	ft_lst_type.h	\
	ft_string.h	\
	ft_write.h	\
	ft_math.h	\
	ft_type.h	\
	ft_memory.h	\
	get_next_line.h	\
	ft_d_lst.h	\
	ft_d_lst_type.h	\
)

SRC_LST_DIR = $(SRC_DIR)/lst
SRC_LST = $(addprefix $(SRC_LST_DIR)/, \
	ft_lstadd_back.c	\
	ft_lstadd_front.c	\
	ft_lstclear.c	\
	ft_lstdelone.c	\
	ft_lstiter.c	\
	ft_lstlast.c	\
	ft_lstmap.c	\
	ft_lstnew.c	\
	ft_lstsize.c	\
	ft_lstsort.c	\
)

SRC_MATH_DIR = $(SRC_DIR)/math
SRC_MATH = $(addprefix $(SRC_MATH_DIR)/, \
	ft_pow.c	\
	ft_max.c	\
)

SRC_MEMORY_DIR = $(SRC_DIR)/memory
SRC_MEMORY = $(addprefix $(SRC_MEMORY_DIR)/, \
	ft_bzero.c	\
	ft_calloc.c	\
	ft_memccpy.c	\
	ft_memchr.c	\
	ft_memcmp.c	\
	ft_memcpy.c	\
	ft_memmove.c	\
	ft_memset.c	\
	ft_malloc.c	\
)

SRC_STRING_DIR = $(SRC_DIR)/string
SRC_STRING = $(addprefix $(SRC_STRING_DIR)/, \
	ft_atoi.c	\
	ft_itoa.c	\
	ft_split.c	\
	ft_split_cnt.c \
	ft_strchr.c	\
	ft_strdup.c	\
	ft_strjoin.c	\
	ft_strlcat.c	\
	ft_strlcpy.c	\
	ft_strlen.c	\
	ft_strmapi.c	\
	ft_strcmp.c	\
	ft_strncmp.c	\
	ft_strndup.c	\
	ft_strnstr.c	\
	ft_strrchr.c	\
	ft_strtrim.c	\
	ft_substr.c	\
	ft_convert_base_unsigned.c	\
	ft_convert_base.c	\
	ft_strjoin_free.c	\
)

SRC_TYPE_DIR = $(SRC_DIR)/type
SRC_TYPE = $(addprefix $(SRC_TYPE_DIR)/, \
	ft_isalnum.c	\
	ft_isalpha.c	\
	ft_isascii.c	\
	ft_isdigit.c	\
	ft_isprint.c	\
	ft_tolower.c	\
	ft_toupper.c	\
	ft_iseven.c		\
)

SRC_WRITE_DIR = $(SRC_DIR)/write
SRC_WRITE = $(addprefix $(SRC_WRITE_DIR)/, \
	ft_putchar_fd.c	\
	ft_putendl_fd.c	\
	ft_putnbr_fd.c	\
	ft_putstr_fd.c	\
)

SRC_GNL_DIR = $(SRC_DIR)/get_next_line
SRC_GNL = $(addprefix $(SRC_GNL_DIR)/, \
	get_next_line.c	\
)

SRC_D_LST_DIR = $(SRC_DIR)/d_list
SRC_D_LST = $(addprefix $(SRC_D_LST_DIR)/, \
	ft_d_lstnew.c	\
	ft_d_lstadd_front.c	\
	ft_d_lstadd_back.c	\
	ft_d_size.c	\
	ft_d_lstlast.c	\
	ft_d_lstdelone.c	\
	ft_d_lstclear.c	\
)

SRCS = \
	$(SRC_LST)	\
	$(SRC_MATH)	\
	$(SRC_MEMORY)	\
	$(SRC_STRING)	\
	$(SRC_TYPE)	\
	$(SRC_WRITE)	\
	$(SRC_GNL)	\
	$(SRC_D_LST)

vpath %.c \
	$(SRC_DIR)	\
	$(SRC_LST_DIR)	\
	$(SRC_MATH_DIR)	\
	$(SRC_MEMORY_DIR)	\
	$(SRC_STRING_DIR)	\
	$(SRC_TYPE_DIR)	\
	$(SRC_WRITE_DIR)	\
	$(SRC_GNL_DIR)	\
	$(SRC_D_LST_DIR)

OBJS = $(addprefix $(OBJ_DIR)/, $(notdir $(SRCS:.c=.o)))

# Color
CL_BOLD   = \e[1m
CL_DIM    = \e[2m
CL_UDLINE = \e[4m

NO_COLOR = \e[0m

BG_TEXT = \e[48;2;45;55;72m
BG_BLACK = \e[48;2;30;31;33m

FG_WHITE = $(NO_COLOR)\e[0;37m
FG_TEXT = $(NO_COLOR)\e[38;2;189;147;249m
FG_TEXT_PRIMARY = $(NO_COLOR)$(CL_BOLD)\e[38;2;255;121;198m

LF = \e[1K\r$(NO_COLOR)
CRLF= \n$(LF)

all : $(NAME)

clean :
	@$(RM) $(RMFLAGS) $(OBJS) $(OBJS_BONUS)
	@printf "$(LF)🧹 $(FG_TEXT)Cleaning $(FG_TEXT_PRIMARY)$(NAME)'s Object files...\n"

fclean : clean
	@$(RM) $(RMFLAGS) $(NAME)
	@printf "$(LF)🧹 $(FG_TEXT)Cleaning $(FG_TEXT_PRIMARY)$(NAME)\n"

re : fclean all

$(OBJ_DIR)/%.o : %.c
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(CDEBUG) $(CFLAGS) -I $(INC_DIR) -c $< -o $@
	@printf "$(LF)🚧 $(FG_TEXT)Create $(FG_TEXT_PRIMARY)$@ $(FG_TEXT)from $(FG_TEXT_PRIMARY)$<"

$(NAME) : $(HEADERS) $(OBJS)
	@printf "$(LF)🚀 $(FG_TEXT)Successfully Created $(FG_TEXT_PRIMARY)$(NAME)'s Object files $(FG_TEXT)!"
	@printf "$(CRLF)📚 $(FG_TEXT)Archiving! $(FG_TEXT_PRIMARY)$@"
	@$(AR) $(ARFLAGS) $@ $(OBJS)
	@printf "$(LF)🎉 $(FG_TEXT)Successfully Archived $(FG_TEXT_PRIMARY)$@ $(FG_TEXT)!\n"

.PHONY: all clean fclean re
