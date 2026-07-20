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

void minus2_value(int *x)
{
	*x -= 2;
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
	int *p_y = &y; 
	
/*
 * this doesnt make sense why are they the in the same memory address?
 * if theyre in the same memory address then that means they should have
 * the same value?
 *
 * edit:
 * fuckkk this is what i get for getting in the flow state this happened to 
 * me so many times, maybe i should turn on syntax highlighting.
 */

	printf("y: %d, n: %d\n", y, n);
	minus2_value(p_n);

/*
 *  why is n still 69, shouldnt it be 67 since i changed its value
 *  by pointer to its addr?
 *
 *  edit:
 *  turns out i have to reassign the value of *x after doing the operation
 *  which now makes sense.
 */
	printf("n's value: %d, and n's mem addr: %p\n", n, &n);
	printf("y's addr: %p, n's addr: %p\n", p_y, p_n);

}

