NAME			=	libftprintf.a

CC				=	gcc
CFLAGS			=	-Wall -Wextra -Werror
AR				=	ar
ARFLAGS			=	rcs
RM				=	rm -rf

SRC				=	ft_printf ft_putnbr_base ft_putun_base ft_add ft_putunll_base
SRCS			=	${addsuffix .c, ${SRC}}

OBJS			=	${SRCS:%.c=%.o}

LIBFT			=	./libft/libft.a

${OBJ_DIR}/%.o:	%.c
					%{CC} ${CFLAGS} -c $< -o $@

all:			${NAME}

bonus:			all

${NAME}:		libft_make ${LIBFT} ${OBJS}
				cp ${LIBFT} ${NAME}
				${AR} ${ARFLAGS} ${NAME} ${OBJS}

libft_make:		
				make bonus -C ./libft

clean:
				make clean -C ./libft
				${RM} ${OBJS}

fclean:		clean
				make fclean -C ./libft
				${RM} ${NAME}

re:			fclean all

.PHONY:	all clean fclean re bonus
