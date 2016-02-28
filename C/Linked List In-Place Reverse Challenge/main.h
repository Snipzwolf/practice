/*
 * main.h
 *
 *  Created on: 28 Feb 2016
 *      Author: John
 */

#ifndef MAIN_H_
#define MAIN_H_

struct LinkedListNode{
	int value;
	struct LinkedListNode *next;
};

typedef struct LinkedListNode LinkedList;


bool getNewNode( LinkedList **listPtr );
void createList(LinkedList **strNode);
void printList(LinkedList *list);
LinkedList * reverseList(LinkedList *curNode, LinkedList *prevNode);

#endif /* MAIN_H_ */
