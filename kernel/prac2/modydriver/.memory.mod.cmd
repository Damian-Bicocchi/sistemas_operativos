savedcmd_memory.mod := printf '%s\n'   memory.o | awk '!x[$$0]++ { print("./"$$0) }' > memory.mod
