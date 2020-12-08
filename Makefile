# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    readmake                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: meldora <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/04 15:05:37 by meldora           #+#    #+#              #
#    Updated: 2020/11/11 14:22:11 by skern            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a

HEADER		= libft.h

SRCS		= ft_calloc.c ft_isascii.c ft_itoa.c ft_memcmp.c ft_memset.c ft_putnbr_fd.c ft_strchr.c ft_strlcat.c ft_strmapi.c ft_strrchr.c ft_tolower.c\
			  ft_atoi.c ft_isalnum.c ft_isdigit.c ft_memccpy.c ft_memcpy.c ft_putchar_fd.c ft_putstr_fd.c ft_strdup.c ft_strlcpy.c ft_strncmp.c ft_strtrim.c\
			  ft_toupper.c ft_bzero.c ft_isalpha.c ft_isprint.c ft_memchr.c ft_memmove.c ft_putendl_fd.c ft_split.c ft_strjoin.c ft_strlen.c ft_strnstr.c ft_substr.c 

SRCS_B		= ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c 

OBJS_B		= ${SRCS_B:.c=.o}

OBJS		= ${SRCS:.c=.o}

CC			= gcc
AR			= ar
ARFLAGS		= rcs
RM			= rm -f

CFLAGS		= -Wall -Wextra -Werror

%.o:		%.c $(HEADER)
			${CC} ${CFLAGS} -I. -c $< -o ${<:.c=.o}

$(NAME):	${OBJS}
			${AR} ${ARFLAGS} $@ $^

bonus:		${OBJS_B}
			${AR} ${ARFLAGS} ${NAME} $^

all:		${NAME}

re:			fclean all

clean:
			${RM} ${OBJS}
			${RM} ${OBJS_B}

fclean:		clean
			${RM} ${NAME}
