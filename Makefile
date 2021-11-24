all:
	gcc typesize.c -o typesize

install:
	make
	sudo cp ./typesize /usr/bin/
