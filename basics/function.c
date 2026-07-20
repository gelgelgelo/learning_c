#include <stdio.h>

char get_letter()
{
	return 'a';
}

int get_num()
{
	return (int)69.6969;
}

double get_pi()
{
	return 3.14;
}

char *get_name()
{
	return "foo";
}

void get_nothing()
{
	return;
}

int add(int x, int y)
{
	return (int)x + y;
}

int minus2(int x)
{
	return (int)x - 2;
}

int main()
{

/*
 * conversion are frowned upon apparently
 */	

/*
 * this returns 3 since it got "casted" to a int i think
 */

	int num = get_pi();
	printf("%d\n", num);

	printf("%d\n", get_num());

/* 
 * this is cool it returns "f" which is our first char in the str.
 * also "*" is the dereference operator which we access the value
 * in the mem address.
 */
	printf("%d\n", *get_name()); 
	
	printf("%d\n", add(69.69, 67.67));

	int n = 69;
	int y = minus2(n);
	int *p_n = &n;
	int *p_y = &n; 
	printf("%d:%d\n", y, n);
/*
 * this doesnt make sense why are they the in the same memory address?
 * if theyre in the same memory address then that means they should have
 * the same value?
 */
	printf("%p:%p\n", p_y, p_n);
}

