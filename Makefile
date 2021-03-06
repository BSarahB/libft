# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbenmesb <mbenmesb@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/03 01:06:12 by mbenmesb          #+#    #+#              #
#    Updated: 2021/01/03 01:06:16 by mbenmesb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

HEADER = libft.h

CC = clang

SRCS	=	ft_atoi.c			\
			ft_bzero.c			\
			ft_calloc.c			\
			ft_isalnum.c		\
			ft_isalpha.c		\
			ft_isascii.c		\
			ft_isdigit.c		\
			ft_itoa.c			\
			ft_memcpy.c			\
			ft_memset.c			\
			ft_memccpy.c		\
			ft_memmove.c		\
			ft_memchr.c			\
			ft_memcmp.c			\
			ft_putchar_fd.c		\
			ft_putstr_fd.c		\
			ft_putendl_fd.c		\
			ft_putnbr_fd.c		\
			ft_substr.c			\
			ft_strchr.c			\
			ft_strdup.c			\
			ft_strjoin.c		\
			ft_strrchr.c		\
			ft_strlcat.c		\
			ft_strlcpy.c		\
			ft_strncmp.c		\
			ft_strnstr.c		\
			ft_strtrim.c		\
			ft_strmapi.c		\
			ft_split.c			\
			ft_toupper.c		\
			ft_tolower.c		\
			ft_isprint.c		\
			ft_strlen.c

BSRCS	=	ft_lstnew.c					\
			ft_lstadd_front.c			\
			ft_lstsize.c				\
			ft_lstlast.c				\
			ft_lstadd_back.c			\
			ft_lstclear.c				\
			ft_lstmap.c					\
			ft_lstiter.c				\
			ft_lstdelone.c

BOBJS	=	$(BSRCS:.c=.o)

OBJS = $(SRCS:.c=.o)

RM = rm -f

CFLAGS = -Wall -Wextra -Werror -I $(HEADER)

.c.o:
		$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME):	$(OBJS)
			ar rc $(NAME) $(OBJS)
			ranlib $(NAME)

all:		$(NAME)

bonus:		$(BOBJS)
			ar rc $(NAME) $(BOBJS)
			ranlib $(NAME)

clean:
			$(RM) $(OBJS) $(BOBJS)

fclean:		clean
			$(RM) $(NAME)

re:		fclean all

.PHONY:		clean fclean re all
		
		
	
