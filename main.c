#include <stdio.h>
#include "revar.h"						//recursive calculation of sum/mean/variance
//#include "xc.h"						//we use pic24


int main(void) {
    int i;
    REVAR_TypeDef var;

    var_init(&var, 0);					//initialize the struct
    for (i=1; i<5; i++) var_calc(&var, i);	//add sample points
	//by this point, sum=10, mean = 2, variance = 2.5
    return 0;
}
