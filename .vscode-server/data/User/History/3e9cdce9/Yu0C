# Nombre del módulo
obj-m := memory.o

# Ruta del kernel (ajustar si es necesario)
KDIR := /home/so/kernel/linux-6.13
PWD := $(shell pwd)

# Compilar módulo (por defecto)
all:
	make -C $(KDIR) M=$(PWD) modules

# Limpiar archivos generados
clean:
	make -C $(KDIR) M=$(PWD) clean

# Ejecutar módulo: insertar, verificar, y quitar
run:
	sudo insmod memory.ko
	lsmod | grep memory
	
