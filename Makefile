
FLAGS:=-Wall -Wextra -Werror
test:
	$(CC) $(FLAGS) get_next_line_utils.c get_next_line.c -o gnl
	./gnl
	rm gnl
norm:
	norminette *.c *.h
	
	$(CC) $(FLAGS) get_next_line_utils.c get_next_line.c
