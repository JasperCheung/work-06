all: link_l.c
	gcc link_l.c
run: 
	./a.out
clean:
	rm *~	
