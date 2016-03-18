/*
Demonstrate the use of volatile type qualifier

In this example, we use long loops to modify a variable.
Under gcc -O3 optimization, the compiler will not care about
the modification of x, which was designated to be a non-volatile
or normal double.  y, on the other hand, is designated to be 
volatile. In doing so, the compiler is not allowed to optimize 
away the modification of y. This effect is tested by observing
the time it takes to complete the loops for x and y

Other lessons:
Using clock() in time.h to calculate times for loops 

References:
http://en.cppreference.com/w/c/language/volatile
*/
#include <stdio.h>
#include <time.h>

int main(){
	clock_t cyc = clock();		// processor time. Difference betw. current and previous times are used
								//  to calculate processing time for loops
	double x;
	int loops = 10000;
	for (int i = 0; i < loops; i++){
		for (int j = 0; j < loops; j++){
			x += x * i * j;
		}
	}
	int z;
	printf("Elapsed time of calculation (non volatile) = %f \n", (double)(clock()-cyc)/CLOCKS_PER_SEC);
	
	volatile double y;
	cyc = clock();
	for (int i = 0; i < loops; i++){
		for (int j = 0; j < loops; j++){
			y += y * i * j;
		}
	}
	printf("Elapsed time of calculation (volatile) = %f \n", (double)(clock()-cyc)/CLOCKS_PER_SEC);
}