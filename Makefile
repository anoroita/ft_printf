# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anoroita <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/07 16:49:25 by anoroita          #+#    #+#              #
#    Updated: 2018/07/07 16:49:49 by anoroita         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

LIBFTDIR = libft/

INCSDIR = includes/

SRCSDIR = srcs/

OBJSDIR = objs/

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRCS = ft_printf.c \
		ft_print.c \
		ft_pointers.c \
		ft_size.c \
		ft_check.c \
		ft_check_next.c \
		ft_manage_s.c \
		ft_universal.c \
		ft_manage_us.c \
		ft_manage_flag.c \
		ft_manage_p.c \
		ft_manage_d.c \
		ft_manage_o.c \
		ft_manage_u.c \
		ft_manage_x.c \
		ft_manage_c.c \
		ft_manage_b.c \
		ft_manage_undefined.c \
		ft_manage_star.c \
		ft_manage_n.c \
		ft_manage_buffer.c \
		ft_paint.c

OBJS = $(addprefix $(OBJSDIR),$(SRCS:.c=.o))

$(OBJSDIR)%.o: $(SRCSDIR)%.c
	@mkdir -p $(OBJSDIR)
	$(CC) $(CFLAGS) -I $(INCSDIR) -I $(LIBFTDIR)$(INCSDIR) -o $@ -c $<

all: $(NAME)

$(NAME): $(OBJS)
	make -C $(LIBFTDIR)
	cp $(LIBFTDIR)libft.a $(NAME)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	rm -rf $(OBJSDIR)
	make -C $(LIBFTDIR) clean

fclean: clean
	rm -rf $(NAME)
	make -C $(LIBFTDIR) fclean

re: fclean all

.PHONY: all clean fclean re
