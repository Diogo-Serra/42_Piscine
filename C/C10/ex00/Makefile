# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: diserra <diserra@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/15 17:29:55 by diserra           #+#    #+#              #
#    Updated: 2025/09/15 17:31:28 by diserra          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    = ft_display_file
SRC     = ft_display_file.c
OBJ     = $(SRC:.c=.o)
CC      = cc
CFLAGS  = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

.PHONY: all clean fclean