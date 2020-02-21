#include <stdio.h>

#define IN 1
#define OUT 0

int main(int argc, char **argv){
	int c, nl, nw, nc, state;
	state = OUT;
	nl = nw = nc = 0;

	while ((c = getchar()) != EOF) {

		if (c == ' ' || c == '\n' || c == '\t')
				state = OUT;

		else if (state == OUT) {
			putchar('\n');
			state = IN;
			++nw;
		}
		putchar(c);
	}
	// printf("\n\nNew Lines = %d\nWords =  %d\nChars = %d\n", nl, nw, nc);
	return 0;
}