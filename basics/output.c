#include <stdio.h>

int main() 
{
	const char *names[10] = {
		"james",
		"nathan",
		"carl",
		"nathaniel",
		"britney",
		"nostra",
		"nolan",
		"jonathan",
		"clementine",
		"bradley",
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

	size_t sn = sizeof(names) / sizeof(names[0]);
	
	for (size_t j = 0; j < sn - 5; j++) {
		printf("%-10s", names[j]);
	}
	printf("\n");
	for (size_t j = 5; j < sn; j++) {
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

/*
 * 	here i tested if i can you know assign the new line to a var since
 * 	im planning to do something btw below is valid it treats it as a 
 * 	newline.
 *
 *	char *newline = "\n";
 *	printf("test%s", newline);
 */

	char *es[7] = {
		// this produces a bell sound in my terminal, i dont hear shit
		"\a", 
		"\b", // backspace deletes a char
		"\f", // wth is formfeed
		"\n", // newline
		"\r", // return carriage, no idea wth is this
		"\t", // tab char
		"\v", // vertical tab, cool what does this look like
	};
	
	size_t ses = sizeof(es) / sizeof(es[0]);
	
	for (size_t i = 0; i < ses; i++) {
		printf("|6969|%s|67|\n", es[i]);
		printf("----------------\n");
	}

/*
 * okay i saw in the linux kernel this is how i should format my comments lol.
 *
 * so based from the output of the code above here are my assumptions.
 *
 * \a should make a bell sound, does not for me
 *
 * \b it deletes a character on the left.
 *
 * \f for me it puts a tab character on the next line like \v
 *
 * \n ofc creates a newline
 * 
 * \r it puts the cursor on the beginning then overwrites the current output
 *
 * \t its a tab, just like pressing tab on your text editor.
 *
 * \v ye like \f
 */
	
	return 0;
}
