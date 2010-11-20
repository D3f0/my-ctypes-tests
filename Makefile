# http://www.adp-gmbh.ch/cpp/gcc/create_lib.html
LIBS = libmylib.so.1.0.1

.PHONY: all clean re libs 

all: libs prueba 

libs: ${LIBS}

prueba: main.o 
	LD_LIBRARY_PATH=. gcc -Wall $^ -o $@ -L. -lmylib

# Compilar estaticamente el código de la librería
# OJO: No es una librería estática, simplemente el linker
# tiene a disposición el código
prueba_static: main.o mylib.o
	gcc main.o mylib.o -o prueba_static

%.o: %.c
	gcc -Wall -fPIC -c $^ -o $@


#test: main.o
#	gcc $^ -o $@

# Generación de la libraría
libmylib.so.1.0.1: mylib.o
	gcc -shared -ldl -fPIC -Wl,-soname,libmylib.so.1 -o $@ $^

clean:
	@rm -rf *.o main ${LIBS}

re: clean all