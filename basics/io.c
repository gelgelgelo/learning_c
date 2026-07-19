#include <stdio.h>

int main() 
{
	const char *names[10] = {
		"nigger",
		"jew",
		"chink",
		"nigga",
		"brit",
		"nigga",
		"nigerian",
		"jew",
		"chink",
		"brit",
	};

/*
 *	this is a cool trick i saw in the k&r book (page 154) i saw the 
 *	potential to create a column thingy and yea i know its too advanced
 *	sinced i used loops but i will tackle that in the future.
 *	
 *	i know theres a way to make the column dymanic using some math
 *	to check for the longest string in the array but nah this is too
 *	simple to make it complicated.
 *
 *	also before the %-(int) stuff i tried using %(int).(int) apparently
 *	this does not achieve the column thing that i want, trial and error
 *	thats what im talking about.
 */

	size_t s = sizeof(names) / sizeof(names[0]);
	
	for (size_t j = 0; j < s - 5; j++) {
		printf("%-10s", names[j]);
	}
	printf("\n");
	for (size_t j = 5; j < s; j++) {
		printf("%-10s", names[j]);
	}
	printf("\n");


	double pi = 3.1415926535;
	
	printf("%.2f\n", pi);

/*
 *	should i really experiment with more escape sequence? sure ill just
 *	play with the things i find interesting since if i need to look up 
 *	this in the future ill just use k&r for the \ stuffs.
 */

		
	
	return 0;
}
