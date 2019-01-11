#include <stdio.h>
#include <stdlib.h>
#include "FOO.h"
void Text(){
	printf("IT Phone Home!!");
}


//typedef struct Person
//{
//   	int val;
//   	struct Person * next;
//} Person_t;

void print_list(Person_t * head)
{
    Person_t * current = head;
    printf("\nRequested list of values:");

    while (current != NULL) {
        printf("\n%d", current->val);
        current = current->next;
    }
}


//Send in arguments
void modify(Person_t ** head, int index, char *name, char *gender, char *study_program, int age, char *email, char *personal_number)
{
//modify first value
	//head->next->val = val;


//Modify decided value
	Person_t * current = *head;
	int i;

	for (i = 0; i < index; i++) {
        current = current->next;
    }
    current->name = name;
    current->gender = gender;
    current->study_program = study_program;
    current->age = &age;
    current->email = email;
    current->personal_number = personal_number;
}

void pushToFirst(Person_t ** head, int val) {
    Person_t * new_Person;
    new_Person = malloc(sizeof(Person_t));

    new_Person->val = val;
    new_Person->next = *head;
    *head = new_Person;
}

int pop(Person_t ** head) {
    int retval = -1;
    Person_t * next_Person = NULL;

    if (*head == NULL) {
        return -1;
    }

    next_Person = (*head)->next;
    retval = (*head)->val;
    free(*head);
    *head = next_Person;

    return retval;
}

int remove_by_index(Person_t ** head, int n) {
    int i = 0;
    int retval = -1;
    Person_t * current = *head;
    Person_t * temp_Person = NULL;

    if (n == 0) {
        return pop(head);
    }

    for (i = 0; i < n-1; i++) {
        if (current->next == NULL) {
            return -1;
        }
        current = current->next;
    }

    temp_Person = current->next;
    retval = temp_Person->val;
    current->next = temp_Person->next;
    free(temp_Person);

    return retval;

}

char *returnName(Person_t ** head, int index)
{
	int i = 0;
	char *retval;
	Person_t * current = *head;

	for (i = 0; i < index; i++) {
	    if (current->next == NULL) {
	        return 0;
	    }
	    current = current->next;
	}

	retval = current->name;

	return retval;
}

char *returnGender(Person_t ** head, int index)
{
	int i = 0;
	char *retval;
	Person_t * current = *head;

	for (i = 0; i < index; i++) {
	    if (current->next == NULL) {
	        return 0;
	    }
	    current = current->next;
	}

	retval = current->gender;

	return retval;
}

char *returnStudy_program(Person_t ** head, int index)
{
	int i = 0;
	char *retval;
	Person_t * current = *head;

	for (i = 0; i < index; i++) {
	    if (current->next == NULL) {
	        return 0;
	    }
	    current = current->next;
	}

	retval = current->study_program;

	return retval;
}

int returnAge(Person_t ** head, int index)
{
	int i = 0;
	int *retval;
	Person_t * current = *head;

	for (i = 0; i < index; i++) {
	    if (current->next == NULL) {
	        return 0;
	    }
	    current = current->next;
	}

	retval = current->age;

	return *retval;
}

char *returnEmail(Person_t ** head, int index)
{
	int i = 0;
	char *retval;
	Person_t * current = *head;

	for (i = 0; i < index; i++) {
	    if (current->next == NULL) {
	        return 0;
	    }
	    current = current->next;
	}

	retval = current->email;

	return retval;
}

char *returnPersonal_Number(Person_t ** head, int index)
{
	int i = 0;
	char *retval;
	Person_t * current = *head;

	for (i = 0; i < index; i++) {
	    if (current->next == NULL) {
	        return 0;
	    }
	    current = current->next;
	}

	retval = current->personal_number;

	return retval;
}

int returnWithValues(Person_t ** head, int vald)
{
	Person_t * current = *head;
	int counter = 0;
	int i;
	int n;

	//Add so it cycle till the end
	if(current->val == 7){
		counter++;
		printf("World");
	}
	while (current->next != NULL){
		current = current->next;
		printf("Hellod");
		if(current->val == 7){
			counter++;
			printf("World");
		}
	}
	printf("Waga");
	return counter;
}

void pushNext(Person_t * head, char *name, char *gender, char *study_program, int *age, char *email, char *personal_number)
{
	Person_t * current = head;
    while (current->next != NULL) {
    	printf("CHANGED TO NEXT!!!");
        current = current->next;
    }

    current->next = malloc(sizeof(Person_t));
    current->name = name;
    printf("%s", current->name);
    current->gender = gender;
    printf("\nHE");
    current->study_program = study_program;
    printf("\nStudy_program: Check");
    current->age = *age;
    printf("\nAge: Check:%d", current->age);
    current->email = email;
    printf("\nEmail: Check");
    current->personal_number = personal_number;
    printf("\npersonal_number: Check");
    current->next->next = NULL;
    printf("\nnext: Check");
}

void push(Person_t * head, char *name, char *gender, char *study_program, int *age, char *email, char *personal_number)
{
    /* now we can add a new variable */
    head->name = name;
    printf("%s", head->name);
    head->gender = gender;
    head->study_program = study_program;
    printf("\nStudy_program: Check");
    head->age = *age;
    printf("\nAge: Check:%d", head->age);
    head->email = email;
    printf("\nEmail: Check");
    head->personal_number = personal_number;
    printf("\npersonal_number: Check");
    head->next = malloc(sizeof(Person_t));
    head->next->next=NULL;
    printf("\nnext: Check");
}

	Person_t * head = NULL;

int structmain()
{
	//Second column of code

	//remove_by_index(&head, 3);
	//modify(&head, 22, 3);
	//printf("\n%d",returnAge(&head,2));
	//printf("\nFacts: %s,%c,%s,%d,%s,%s", returnName(&head, 3), returnGender(&head, 3), returnStudy_program(&head, 3), returnAge(&head, 3), returnEmail(&head, 3), returnPersonal_Number(&head, 3));
	printf("\nNumber of 7s are: %d", returnWithValues(&head,7));

	printf("The first value is: %d\n", head->val);
	pushToFirst(&head, 9);
	pop(&head);
	//modify(&head, 9,1);
	//modify(&head, 3,1);

	//Person_t * head, int val, char *name, char gender, char *study_program, int age, char *email

	print_list(head);

	return 1;
}
