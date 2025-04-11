savedcmd_memory.ko := ld -r -m elf_x86_64 -z noexecstack --no-warn-rwx-segments --build-id=sha1  -T /home/so/kernel/linux-6.13/scripts/module.lds -o memory.ko memory.o memory.mod.o .module-common.o
