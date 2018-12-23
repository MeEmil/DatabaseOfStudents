#include <stdio.h>
#include <stdlib.h>
#include "FOO.h"

struct Person
{
	int age;
	char * first_name; 
	char gender;
};

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
	struct Person person1, person2, p[20];
	person1.age = 16;
	person1.gender = 'm';
	person1.first_name = "Emil";
	p[15].age = 77;
	//person1.first_name[0] = "very";
	printf("Name: %s Age: %d Gender: %c", person1.first_name, person1.age, person1.gender);
	printf("p[15].age = %d", p[15].age);
	getchar();
}

