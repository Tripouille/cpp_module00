NAME				= phonebook
SRCS				= $(addprefix srcs/, main.cpp Info.cpp Contact.cpp Phonebook.cpp check_info_format.cpp)
OBJS				= ${SRCS:.cpp=.o}
INCLUDES			= $(addprefix includes/, Info.hpp Contact.hpp Phonebook.hpp check_info_format.hpp)

CC					= clang++
CFLAGS				= -g3 -Wall -Wextra -Werror -fsanitize=address -I includes

all:				${NAME}

${OBJS}:			${INCLUDES}

.cpp.o:
					${CC} ${CFLAGS} -c $< -o ${<:.cpp=.o}

$(NAME):			${OBJS} ${INCLUDES}
					${CC} ${CFLAGS} ${OBJS} -o ${NAME}

clean:
					rm -rf ${OBJS}

fclean:				clean
					rm -rf ${NAME}

re:					fclean all

.PHONY:				all clean fclean re
