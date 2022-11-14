output: cpuSched.o
	gcc cpuSched.o -o cpuSched

cpuSched.o: cpuSched.c
	gcc -c cpuSched.c

clean: 
	rm *.o output


