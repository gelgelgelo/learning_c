#include <stdio.h>

int main()
{

/*	
 *	i learned that the sizeof function returns size_t type thats why
 *	i have to use %zu instead of %d i can also use %ld which is long int
 *	it means it can store double than a normal int.
 *
 *	also size_t is almost like unsigned int or more accurately 
 *	unsigned long int.
 */
	printf("char size in bytes: %zu\n", sizeof(char));
	printf("int size in bytes: %zu\n", sizeof(int));
	printf("float size in bytes: %zu\n", sizeof(float));
	printf("double size in bytes: %zu\n", sizeof(double));
	printf("char* size in bytes: %zu\n", sizeof(char*));
	printf("long size in bytes: %zu\n", sizeof(long));
	printf("short size in bytes: %zu\n", sizeof(short));
	printf("long int size in bytes: %zu\n", sizeof(long int));
	printf("short int size in bytes: %zu\n", sizeof(short int));
	printf("size_t size in bytes: %zu\n", sizeof(size_t));
	printf("size of unsigned int in bytes: %zu\n", sizeof(unsigned int));
	printf("size of long unsigned int in bytes: %zu\n",
		sizeof(long unsigned int));
	
	char letter = 'a';
	int year = 2005;
	// floats can only hold half as much as doubles.
	float pi= 3.14; 
	// can hold double the capacity of float hence the name.
	double bigger_pi = 3.1415926535; 
	char *name = "vladimir putin";

/*
 *	according to the k&r book theres many way to print a double each has
 *	its own differences just pick one thats best for the use case
 */
	printf("%c\n", letter);
/*
 *	yes booleans are just int 1 and 0
 */
	printf("%d\n", true);
	printf("%d\n", false);
	printf("%d\n", year);
	printf("%f\n", pi);
	printf("%f\n", bigger_pi);
	printf("%s\n", name);
	
/*	
 *	this is allowed but you will get a warning and a undefined behaviour
 */
	printf("%d\n", pi);
	printf("%f\n", year);
/*
 *	this is allowed too but i got a char as a output	
 */
	printf("%c\n", name);
/*
 * 	this throws a segmentation fault i would guess since %s expects a
 * 	memory address since char* is a pointer that holds a address something
 * 	like that idk.
 *
 *	printf("%s\n", letter);
 */
	return 0;
}

