#include <stdio.h>

int main(int argc, char **argv){

      int c, blank = 0;

	while ((c = getchar()) != EOF) {
	    if (c == ' ' && blank == 0) {
	    	++blank;
	    	putchar(c);
	    } else if (c != ' ') {
	    	blank = 0;
	    	putchar(c);
	    }
	}

	return 0;
}