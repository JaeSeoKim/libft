# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaeskim <jaeskim@student.42seoul.kr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/24 20:10:49 by jaeskim           #+#    #+#              #
#    Updated: 2020/11/24 22:44:14 by jaeskim          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

AR = ar
ARFLAGS = crs

CC = gcc
CFLAGS = -Wall -Wextra -Werror

ifeq ($(DEBUG),true)
	CDEBUG = -g
endif

RM = rm
RMFLAGS = -f

INC_DIR = include
SRC_DIR = src
OBJ_DIR = obj

HEADERS = $(addprefix $(INC_DIR)/, \
	ft_utf8.h	\
	libft.h	\
	ft_lst.h	\
	ft_dtoa.h	\
	ft_bigint.h	\
	ft_lst_type.h	\
	ft_string.h	\
	ft_dtoa_type.h	\
	ft_libft_type.h	\
	ft_write.h	\
	ft_math.h	\
	ft_type.h	\
	ft_memory.h	\
	ft_bigint_type.h	\
	ft_dtoa_util.h	\
	ft_printf.h	\
	ft_printf_util.h	\
	ft_printf_util_type.h	\
	get_next_line.h	\
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
	ft_frees.c	\
)

SRC_STRING_DIR = $(SRC_DIR)/string
SRC_STRING = $(addprefix $(SRC_STRING_DIR)/, \
	ft_atoi.c	\
	ft_itoa.c	\
	ft_split.c	\
	ft_strchr.c	\
	ft_strdup.c	\
	ft_strjoin.c	\
	ft_strlcat.c	\
	ft_strlcpy.c	\
	ft_strlen.c	\
	ft_strmapi.c	\
	ft_strncmp.c	\
	ft_strndup.c	\
	ft_strnstr.c	\
	ft_strrchr.c	\
	ft_strtrim.c	\
	ft_substr.c	\
	ft_convert_base_unsigned.c	\
	ft_convert_base.c	\
	ft_dtoa.c	\
	ft_strjoin_free_both.c	\
	ft_strjoin_free_first.c	\
	ft_strjoin_free_second.c	\
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

SRC_UTF8_DIR = $(SRC_DIR)/utf8
SRC_UTF8 = $(addprefix $(SRC_UTF8_DIR)/, \
	ft_encoding_utf8_char.c	\
	ft_encoding_utf8.c	\
	ft_putwchar_fd.c	\
	ft_wchar_len.c	\
)

SRC_WRITE_DIR = $(SRC_DIR)/write
SRC_WRITE = $(addprefix $(SRC_WRITE_DIR)/, \
	ft_putchar_fd.c	\
	ft_putendl_fd.c	\
	ft_putnbr_fd.c	\
	ft_putstr_fd.c	\
)

SRC_DTOA_DIR = $(SRC_DIR)/dtoa
SRC_DTOA = $(addprefix $(SRC_DTOA_DIR)/, \
	ft_dtoa.c	\
	ft_dtoa_f.c	\
	ft_dtoa_e.c	\
	ft_dtoa_g.c	\
	ft_dtoa_e_round.c	\
	ft_dtoa_util.c	\
	ft_dtoa_setup_decimal.c	\
	ft_dtoa_setup_integer.c	\
)

SRC_BIGINT_DIR = $(SRC_DIR)/bigint
SRC_BIGINT = $(addprefix $(SRC_BIGINT_DIR)/, \
	ft_bigint_new.c	\
	ft_bigint_del.c	\
	ft_bigint_add.c	\
	ft_bigint_to_str.c \
	ft_bigint_multiply.c	\
)

SRC_PRINTF_DIR = $(SRC_DIR)/printf
SRC_PRINTF = $(addprefix $(SRC_PRINTF_DIR)/, \
	ft_print.c	\
	ft_printf.c	\
	ft_sprintf.c	\
)
SRC_PRINTF_UTIL_DIR = $(SRC_PRINTF_DIR)/util
SRC_PRINTF_UTIL = $(addprefix $(SRC_PRINTF_UTIL_DIR)/, \
	ft_convert_base_custom.c	\
	ft_custom_dtoa.c	\
	ft_get_extend_num.c	\
	ft_get_extend_string.c	\
	ft_init_format.c	\
	ft_init_parsing.c	\
	ft_n_encoding_utf8.c	\
	ft_parse_check.c	\
	ft_parse_extend_type.c	\
	ft_parse_flag.c	\
	ft_parse_precision.c	\
	ft_parse_type.c	\
	ft_parse_width.c	\
	ft_print_char.c	\
	ft_print_float_nan.c	\
	ft_print_float.c	\
	ft_print_hex.c	\
	ft_print_number.c	\
	ft_print_octal.c	\
	ft_print_percent.c	\
	ft_print_pointer.c	\
	ft_print_string.c	\
	ft_print_unsigned_number.c	\
	ft_putchar_n_out.c	\
	ft_putchar_out.c	\
	ft_putstr_out.c	\
	ft_putwchar_out.c	\
	ft_write_cnt.c	\
)

SRC_GNL_DIR = $(SRC_DIR)/get_next_line
SRC_GNL = $(addprefix $(SRC_GNL_DIR)/, \
	get_next_line.c	\
)

SRCS = \
	$(SRC_LST)	\
	$(SRC_MATH)	\
	$(SRC_MEMORY)	\
	$(SRC_STRING)	\
	$(SRC_TYPE)	\
	$(SRC_UTF8)	\
	$(SRC_WRITE)	\
	$(SRC_DTOA)		\
	$(SRC_BIGINT)	\
	$(SRC_PRINTF)	\
	$(SRC_PRINTF_UTIL)	\
	$(SRC_GNL)

vpath %.c \
	$(SRC_DIR)	\
	$(SRC_LST_DIR)	\
	$(SRC_MATH_DIR)	\
	$(SRC_MEMORY_DIR)	\
	$(SRC_STRING_DIR)	\
	$(SRC_TYPE_DIR)	\
	$(SRC_WRITE_DIR)	\
	$(SRC_UTF8_DIR)	\
	$(SRC_DTOA_DIR)	\
	$(SRC_BIGINT_DIR)	\
	$(SRC_PRINTF_DIR)	\
	$(SRC_PRINTF_UTIL_DIR)	\
	$(SRC_GNL_DIR)

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

TEST_FILE = ft_test.c

$(TEST_FILE:.c=.out) : $(NAME) $(TEST_FILE)
	$(CC) -g -I $(INC_DIR) $(TEST_FILE) -o $(TEST_FILE:.c=.out) -L. -lft

test : $(TEST_FILE:.c=.out)
	@printf "$(FG_TEXT_PRIMARY)$(BG_BLACK)🚧 [TEST RESULT]! 🚧$(CRLF)$(FG_TEXT)"
	@./$(TEST_FILE:.c=.out)
	@rm $(TEST_FILE:.c=.out)
	@rm -rf $(TEST_FILE:.c=.out.dSYM)

.PHONY: all clean fclean re
