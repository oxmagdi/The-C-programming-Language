#include <stdio.h>

int main(int argc, char **argv){

      int c, 
          nl = 0,
          tap = 0,
          blank = 0;

	while ((c = getchar()) != EOF) {
		if (c == '\n') ++nl;
		else if (c == '\t') ++tap;
		else if (c == ' ') ++blank;
	}
	
	printf("\n\nnew lines = %d \ntaps = %d\nblanks = %d\n", nl, tap, blank);

	return 0;
}