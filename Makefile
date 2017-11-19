all: biblioteka glowny

biblioteka:
	@echo Kompiluje biblioteke
	gcc -c biblioteka.c -o $@.o

glowny: biblioteka.o
	@echo Kompiluje glowny
	gcc glowny.c biblioteka.o -o $@
	./$@


