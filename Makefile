all: libsimplefs.a app
libsimplefs.o: simplefs.c
	gcc -Wall -g -c simplefs.c
libsimplefs.a: simplefs.o
	ar cr libsimplefs.a simplefs.o
	ranlib libsimplefs.a
app.o: app.c
	gcc -Wall -g -c -I. app.c
app: app.o libsimplefs.a
	gcc -Wall -g -o app app.o -I. -L. -lsimplefs
clean:
	rm -fr *.a *.o *~ app libsimplefs.a
