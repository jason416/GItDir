Client:Client.o LinkList.o
	gcc -Wall -g Client.o LinkList.o -o Client
Client.o:Client.c
	gcc -Wall -c Client.c -o Client.o
LinkList.o:LinkList.c
	gcc -Wall -c LinkList.c -o LinkList.o
clean:
	rm *.o Client
.PHYON:clean
