#include <stdio.h>
#include "add.h"

/*
 * so header files are just function declaration in a another file so other 
 * files or program can use the pre existing code thats defined in the header
 * file.
 *
 * for example stdio.h is a header file for stdio.c which contains functions
 * like printf and etc.
 */

int main()
{
	printf("sum: %d\n", add(64, 32));
	return 0;
}

/*
 * this is how printf is defined in the header file cool, i didnt know printf
 * returns a int of maybe this is the wrong func declaration idk but this makes
 * sense since it takes a string then a format then the variable we pass.
 *
 * extern int printf (const char *__restrict __format, ...);
 */

