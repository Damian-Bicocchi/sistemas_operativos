all: get_task_info

get_task_info: get_task_info.c
	@echo "Compilando get_task_info"
	@gcc -o get_task_info get_task_info.c

clean:
	@rm -f get_task_info

run: get_task_info
	./get_task_info