#prebared by Ali Khalid (Learn In Depth)
CC=arm-none-eabi-
CFLAGS=-mcpu=arm926ej-s -g
INCS=-I .
LIBS=
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o) # same as OBJS = $(patsubst %.c, %.0,$SRC) As $(wildcard *.s)
As = $(wildcard *.s)
AsOBJ= $(As:.s=.o)
all: learn-in-depth.bin
	@echo "====Everything Done ,Ali !!!===="
%.o: %.s
	$(CC)as.exe $(CFLAGS) $< -o $@ 2> log

%.o: %.c
	$(CC)gcc.exe $(CFLAGS) $(INCS) -c $< -o $@

learn-in-depth.elf: $(OBJ) $(AsOBJ)
	$(CC)ld.exe -T linker_script.ld $(LIBS) $(OBJ) $(AsOBJ) -o $@ -Map=Map_file.map

learn-in-depth.bin: learn-in-depth.elf
	$(CC)objcopy.exe -O binary $< $@

clean:
	rm -rf *.o *~
	@echo "Everything clean"