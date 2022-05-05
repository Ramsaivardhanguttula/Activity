source = main.c stringtoHexa.c
include = fun.h
build : $(source) $(include)
	gcc $(source) $(include) -o Activity.out

run:
	./Activity.out