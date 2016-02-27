/*
 * main.c
 *
 *  Created on: 27 Feb 2016
 *      Author: John
 */

#include <stdio.h>
#include <stdbool.h>
#include "main.h"

int main( void ){
	int lower,
		higher;

	setbuf(stdout, NULL); //disable stdout buffering as don't see prompts in eclipse

	do{
		prompt(&lower, &higher);
	}while(!validate(lower, higher));

	printf("Lower limit is '%d'\nHigher limit is '%d", lower, higher);

	printf("\n\n");
	printf("Celsius\t\tFahrenheit\n");
	printf("---------\t---------\n");
	while(lower <= higher){
		printf("%d\t\t%f\n", lower, convertToFahrenheit(lower));
		lower+=4;
	}

	return 0;
}

void prompt(int *lower, int *higher){
	printf("Please insert a lower limit (value >= 0): ");
	scanf("%d", lower);
	printf("Please insert a higher limit (value > 10 && value <= 50000): ");
	scanf("%d", higher);
}

bool validate(int lower, int higher){
	bool ret = true;

	if(lower < 0){
		printf("ERROR lower limit < 0)\n");
		ret = false;
	}

	if(higher < 10){
		printf("ERROR higher limit < 10)\n");
		ret = false;

	}else if(higher > 50000){
		printf("ERROR higher limit > 50000)\n");
		ret = false;

	}

	return ret;
}

double convertToFahrenheit(int val){
	return (double)val * (9.0/5.0) + 32.0;
}


