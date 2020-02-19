#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char **argv){


    int c;
	while ((c = getchar()) != EOF){
		 // The strcmp() function shall compare the string pointed to by s1 to the string pointed to by s2. 
		 if(strcmp(argv[0], "upper") == 0) putchar(toupper(c));
		 if(strcmp(argv[0], "lower") == 0) putchar(tolower(c));
	}

	return 0;
}