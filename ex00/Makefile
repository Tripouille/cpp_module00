NAME				= megaphone
SRCS				= megaphone.cpp
OBJS				= ${SRCS:.cpp=.o}

CC					= clang++
CFLAGS				= -g3 -Wall -Wextra -Werror -fsanitize=address

all:				${NAME}

.cpp.o:
					${CC} ${CFLAGS} -c $< -o ${<:.cpp=.o}

$(NAME):			${OBJS}
					${CC} ${CFLAGS} ${OBJS} -o ${NAME}

clean:
					rm -rf ${OBJS}

fclean:				clean
					rm -rf ${NAME}

re:					fclean all

.PHONY:				all clean fclean re
