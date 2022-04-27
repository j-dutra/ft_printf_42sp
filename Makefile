# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joluiz-d <joluiz-d@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/29 17:39:01 by joluiz-d          #+#    #+#              #
#    Updated: 2022/02/20 20:20:04 by joluiz-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME       =  libftprintf.a
SRC        =  src
SRC_FILES  =	ft_itoa.c \
				ft_itoh.c \
				ft_parser.c \
				ft_printf.c \
				ft_strdup.c \
				ft_strlen.c \
				ft_toupper.c \
				ft_type_c.c \
				ft_type_d.c \
				ft_type_p.c \
				ft_type_s.c \
				ft_type_u.c \
				ft_type_x_lower.c \
				ft_type_x_upper.c \
				ft_utoa.c

OBJ         =  obj
OBJ_FILES   =  $(addprefix $(OBJ)/,$(SRC_FILES:.c=.o))
CC          =  clang
CFLAGS      =  -Wall -Wextra -Werror
INC         =  -I inc
MKD         =  mkdir -p $(@D)
RM = rm -rf
AR = ar -rcs
.DEFAULT_GOAL = all

all: $(NAME)

$(OBJ)/%.o: $(SRC)/%.c
	$(MKD)
	$(CC) $(CFLAGS) $(INC) -c $< -o $@

$(NAME): $(OBJ_FILES)
	$(AR) $(NAME) $(OBJ_FILES)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
