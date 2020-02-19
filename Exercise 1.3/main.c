#include <stdio.h>

int main(int argc, char **argv){

    int fahr, celsius;
	int lower, upper, step;
	lower = 0;
	upper = 300;
	step = 20;
	/* lower limit of temperature scale */
	/* upper limit */
	/* step size */
	fahr = lower;
	
	printf("(Fahrenheit)\t(Celsius)\n");
	while (fahr <= upper) {
		celsius = 5 * (fahr - 32) / 9;
		printf("%d\t\t%d\n", fahr, celsius);
		fahr = fahr + step;
	}
	    
	return 0;
}