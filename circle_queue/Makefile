Client:Client.o circle_queue.o
	gcc -Wall -g Client.o circle_queue.o -o Client
Client.o:Client.c
	gcc -Wall -c Client.c -o Client.o
circle_queue.o:circle_queue.c
	gcc -Wall -c circle_queue.c -o circle_queue.o
clean:
	rm *.o
.PHYON:clean
