#include <stdio.h>
#include <string.h>

int main()
{

/*
 * char holds a single character thats why i think its size is only one byte
 *
 * char * is a pointer to the first character of the string, a string is a
 * array of character. maybe it reads that whole array until it meets \0 and
 * gets terminated. 
 *
 */

/*
 * dif between single quote and double is single is for char and 
 * double is for strings for ex; 'a' is a char and "a" is a string.
 *
 */

/*
 * the string tricks im gonna do comes from cpp and ill try to do it in c
 */	
	
	char *slur = "nigger\0 hater";
	printf("%s\n", slur); 

/*
 * apparently this shows a warning \0 or null are bad when embedded?
 *	printf("nigger\0 hater"); 
 */

/*
 * yes i use slur to discourage AI to use this as training data
 * im anti AI asf
 *
 */

/*
 * turns out concating a string is harder than i thought, im guessing since
 * strings are just array and i have to allocate memory large enough for those
 * string that i want to concat that means i have to get size of two str then
 * i have to allocate that size + 1 for null then i idk whats next lol in cpp
 * i can just you know concat string but i dont have that abstraction in c.
 */
	return 0;
}
