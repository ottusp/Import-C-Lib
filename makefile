all:
	gcc _add_lib_c.c -o _add_lib_c
	sudo cp _add_lib_c /usr/local/bin
	rm -f _add_lib_c


