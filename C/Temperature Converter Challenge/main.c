/*
 * main.c
 *
 *  Created on: 27 Feb 2016
 *      Author: John
 */

#include <stdio.h>

int main( void ){
	int lower,
		higher;

	setbuf(stdout, NULL); //disable stdout buffering as don't see prompts in eclipse

	printf("Please insert a lower limit (value >= 0) [10]: ");
	scanf("%d", &lower);
	printf("Please insert a higher limit (value > 10 && value <= 50000) [50]: ");
	scanf("%d", &higher);

	printf("Lower limit is '%d'\n Higher limit is '%d", lower, higher);


	return 0;
}
