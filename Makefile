SRCS			= ft_strlen.c ft_isalpha.c ft_isdigit.c ft_isprint.c ft_isalnum.c ft_isascii.c ft_strchr.c ft_strrchr.c ft_atoi.c ft_tolower.c ft_toupper.c ft_strlcpy.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_memchr.c ft_strlcat.c

OBJS			= $(SRCS:.c=.o)

CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I.

NAME			= libft.a

all:			$(NAME)

$(NAME):		$(OBJS)
					ar rcs $(NAME) $(OBJS)

clean:
					$(RM) $(OBJS) $(BONUS_OBJS)

fclean:			clean
					$(RM) $(NAME)

re:				fclean $(NAME)

bonus:			$(OBJS) $(BONUS_OBJS)
					ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

.PHONY:			all clean fclean re bonusi
