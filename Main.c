#include <stdio.h>
#include <stdlib.h>
#include "FOO.h"


typedef struct
{
	char *name;
	int age;
}pers;

typedef struct node {
    int val;
    struct node * next;
} node_t;

int main()
{


	int kwjefnd = 0;
	node_t * head = NULL;
	head = malloc(sizeof(node_t));
	head->val = 1;
	head->next = malloc(sizeof(node_t));
	head->next->val = 2;
	head->next->next = NULL;


	pers *myperson = (pers*) malloc(sizeof(pers));
	myperson->name = "Daniel";
	myperson->age = 20;
	printf("Name: %s Age: %d\n", myperson->name, myperson->age);
	pers *secondperson = malloc(sizeof(pers));
	secondperson->name = "David";
	secondperson->age = 21;
	printf("Name: %s Age: %d\n", secondperson->name, secondperson->age);
	free(myperson);
	free(secondperson);

	char *name = "MEllamo";
	name = "TEllamos";
	Text();
	saver();
	structmain();
	getchar();
}

