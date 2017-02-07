all: ssh_login clean

clean: 
	rm *.o

ssh_login: main.o
	gcc -o ssh_login main.o

main.o: main.c ssh_login.h
	gcc -c main.c