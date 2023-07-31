NAME = push_swap
SRCS = check_args.c radix.c simple.c ft_atoi.c ft_split.c utils.c index.c push.c rev_rotate.c swap.c init_stack.c rotate.c t_list.c
OBJS = push_swap.a

CC = gcc
FLAGS = -Wall -Wextra -Werror -Iincludes

all: $(OBJS)
	$(CC) main.c $(OBJS) -o $(NAME)

$(OBJS): $(OBJS)
	$(CC) $(FLAGS) -c $(SRCS)
	ar rc $(OBJS) *.o

clean:
	rm -rf *.o
	rm -rf $(NAME)

fclean: clean
	rm -rf $(OBJS) 

re: fclean all

.PHONY: all clean fclean re