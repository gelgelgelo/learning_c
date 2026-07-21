#include <stdio.h>

/*
 * my reference: https://www.geeksforgeeks.org/c/operators-in-c/
 */

int main()
{
	int x = 86;
	int y = 64;	

	printf("doing operations on %d and %d\n", x, y);
	printf("+: %d\n", x + y);
	printf("-: %d\n", x - y);
	printf("*: %d\n", x * y);
	printf("/: %d\n", x / y);
	printf("%%: %d\n", x % y);
	printf("++x: %d\n", ++x);
	printf("--y: %d\n", --y);

/*
 * this gets treated as (x++) + y 
 *
 * 	printf("+++: %d\n", x+++y);
 *	
 * this throws a error idk why, its says lvalue something, but x can be 
 * modified since its not const? idk
 *	++x++;
 */
	
	printf("relational operators\n");	
	printf("==: %d\n", x == y);
	printf("!=: %d\n", x != y);
	printf("<=: %d\n", x <= y);
	printf(">=: %d\n", x >= y);
	printf("<: %d\n", x < y);
	printf(">: %d\n", x > y);

	printf("logical operators\n");
	printf("1 && 1: %d\n", x && y);
	printf("1 || 1: %d\n", x || y);
	printf("1 && 0: %d\n", x && !y);
	printf("1 || 0: %d\n", x || !y);
	printf("!1: %d\n",  !y);
	printf("!0: %d\n",  !!y);

	/*
	 * if ! is odd its 0 if even its 1
	 */
	printf("!!!!!1: %d\n",  !!!!!y);
	printf("!!!!!!1: %d\n",  !!!!!!y); 
	
/*
 * this is new for me and i dont know what any of these does maybe its the 
 * lack of math fundamentals and no knowledge of low level stuff because i
 * know that CPUs use this as for their logic
 */

	printf("bitwise operators\n");
	printf("x: %d, y: %d\n", x, y);
	printf("x & y: %d\n", x & y);	
	printf("32 & 64: %d\n", 32 & 64);	
	printf("x | y: %d\n", x | y);	
	printf("x ^ y: %d\n", x ^ y);	
	printf("~x: %d\n", ~x);	
	printf("x << y: %d\n", x << y);	
	printf("x >> y: %d\n", x >> y);	

}
