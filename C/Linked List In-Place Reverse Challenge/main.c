/*
 * main.c
 *
 *  Created on: 28 Feb 2016
 *      Author: John
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "main.h"

int main( void ){
	LinkedList *list = NULL;

	if(getNewNode(&list)){
		createList(&list);
		printList(list);

		list = reverseList(list, NULL);
		printList(list);
	}else{
		return 1;
	}

	return 0;
}

bool getNewNode( LinkedList **listPtr ){
	LinkedList *node = malloc( sizeof( LinkedList ) );

	if(node != NULL){
		node->next = NULL;

		*listPtr = node;

		return true;
	}

	return false;
}

void createList(LinkedList **strNode){
	LinkedList *curNode = *strNode;

	int i;
	for(i = 0; i <= 5; i++){
		if(i > 0){
			LinkedList *newNode;
			if(!getNewNode(&newNode)){
				strNode = NULL;
				break;
			}

			curNode->next = newNode;
			curNode = newNode;
		}

		curNode->value = i;
	}
}

void printList(LinkedList *list){
	printf("%d", list->value);

	if(list->next != NULL){
		printf(",");
		printList(list->next);
		return;
	}

	printf("\n");
}

LinkedList * reverseList(LinkedList *curNode, LinkedList *prevNode){
	LinkedList *next = curNode->next;
	if(prevNode != NULL){
		curNode->next = prevNode;
	}else{
		curNode->next = NULL;
	}

	if(next != NULL){
		LinkedList *ret = reverseList(next, curNode);

		return ret;
	}

	return curNode;

}
