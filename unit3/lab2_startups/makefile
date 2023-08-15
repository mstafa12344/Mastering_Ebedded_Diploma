#prebared by mustafa ali
cc=arm-none-eabi-
cflags=-mcpu=cortex-m3

startup.o:startup.s
	$(cc)as.exe  $(cflags) -gdwrf-2 $< -o $@
	
main.o:main.c
	$(cc)gcc.exe -c -I . -gdwarf-2 $(cflags) $< -o $@

linker.elf:main.o startup.o
	$(cc)ld.exe -T linker_script.ld startup.o main.o -o linker.elf  -Map=map_file.map
	
program.bin:linker.elf
	$(cc)objcopy.exe -O binary linker.elf program.bin
