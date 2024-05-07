#pragma once
typedef char element;

typedef struct  stacknode {	
	element data;
	struct stacknode* link;
} stacknode;

stacknode* top;				

int isstackempty();
void push(element item);
element pop();
element peek();
void printstack();