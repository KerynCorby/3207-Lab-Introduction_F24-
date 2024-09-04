#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Create random charcter
char randchar(){
	//rand() recognizes ASCII, generates specific number in ASCII range
	//char typecasts turning random random integer into its assigned char
	return ((char) ('a' + rand() % 26));
}

