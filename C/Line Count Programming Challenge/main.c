/*
 * main.c
 *
 *  Created on: 27 Feb 2016
 *      Author: John
 */
#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
#include <string.h>

#include "main.h"

int main(int argc, char *argv[]){

	if(argc != 2){
		printf("Unexpected number of arguments\nExiting...");
		return 1;
	}

	char cwd[1024];
	if (getcwd(cwd, sizeof(cwd)) != NULL)
	   fprintf(stdout, "Current working dir: %s\n", cwd);

	int lines = 0;

	FILE *filePtr;
	if((filePtr = fopen(argv[1], "r")) != NULL){
		printf("file '%s' opened", argv[1]);

		int out;
		do{
			out = fgetc(filePtr);

			if(out == 10 || out == EOF){
				lines++;
			}

		}while(out != EOF);

		fclose(filePtr);
	}else{
		printf("ERROR could not open file '%s'", argv[1]);
		return 1;
	}

	printf("\n%d lines in file", lines);

	return 0;
}


