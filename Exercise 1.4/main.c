#include <stdio.h>

int main(int argc, char **argv){

    int fahr, celsius;
	int lower, upper, step;
	lower = -17;
	upper = 300;
	step = 11;
	/* lower limit of temperature scale */
	/* upper limit */
	/* step size */
	celsius = lower;
	
	printf("(Celsius)\t(Fahrenheit)\n");
	while (celsius <= upper) {
		fahr = (celsius * 1.8) + 32;
		printf("%d\t\t%d\n", celsius, fahr);
		celsius = celsius + step;
	}
	    
	return 0;
}