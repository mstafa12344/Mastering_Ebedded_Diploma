#prebared by mustafa ali
cc=arm-none-eabi-
cflags=-mcpu=arm926ej-s

startup.o:startup.s
	$(cc)as.exe  $(cflags) -g $< -o $@
	
main.o:main.c
	$(cc)gcc.exe -c -I . -g $(cflags) $< -o $@

uart.o:uart.c
	$(cc)gcc.exe -c -I . -g $(cflags) $< -o $@
	

linker.elf:uart.o main.o startup.o
	$(cc)ld.exe -T linker_skript.ld startup.o uart.o main.o -o linker.elf
	
program.bin:linker.elf
	$(cc)objcopy.exe -O binary linker.elf program.bin
