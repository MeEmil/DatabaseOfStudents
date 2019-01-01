#include <stdio.h>
#include <stdlib.h>
void Text(){
	printf("IT Phone Home!!");
}



typedef struct Person{
	char *name;
	char gender;
	char *study_program;
	int age;
	char *email;
	struct Person * next;
	int val;
} Person_t;


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



void modify(Person_t ** head, int val, int n)
{
//modify first value
	//head->next->val = val;


//Modify decided value
	Person_t * current = *head;
	int i;

	for (i = 0; i < n-1; i++) {
        if (current->next == NULL) {
        }
        current = current->next;
    }
    current->val = val;
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

int remove_last(Person_t * head) {
    int retval = 0;
    /* if there is only one item in the list, remove it */
    if (head->next == NULL) {
        retval = head->val;
        free(head);
        return retval;
    }

    /* get to the second to last Person in the list */
    Person_t * current = head;
    while (current->next->next != NULL) {
        current = current->next;
    }

    /* now current points to the second to last item of the list, so let's remove current->next */
    retval = current->next->val;
    free(current->next);
    current->next = NULL;
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

	for (i = 0; i < index-1; i++) {
	    if (current->next == NULL) {
	        return 0;
	    }
	    current = current->next;
	}

	retval = current->name;

	return retval;
}

char returnGender(Person_t ** head, int index)
{
	int i = 0;
	char retval;
	Person_t * current = *head;

	for (i = 0; i < index-1; i++) {
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

	for (i = 0; i < index-1; i++) {
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
	int retval;
	Person_t * current = *head;

	for (i = 0; i < index-1; i++) {
	    if (current->next == NULL) {
	        return 0;
	    }
	    current = current->next;
	}

	retval = current->age;

	return retval;
}

char *returnEmail(Person_t ** head, int index)
{
	int i = 0;
	char *retval;
	Person_t * current = *head;

	for (i = 0; i < index-1; i++) {
	    if (current->next == NULL) {
	        return 0;
	    }
	    current = current->next;
	}

	retval = current->email;

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

void push(Person_t * head, int val, char *name, char gender, char *study_program, int age, char *email)
{
    Person_t * current = head;
    while (current->next != NULL) {
        current = current->next;
    }

    /* now we can add a new variable */
    current->next = malloc(sizeof(Person_t));
    current->next->name = name;
    current->next->gender = gender;
    current->next->study_program = study_program;
    current->next->age = age;
    current->next->email = email;
    current->next->val = val;
    current->next->next = NULL;
}

int structmain()
{
	//Second column of code
	Person_t * head = NULL;
	head = malloc(sizeof(Person_t));
	head->val = 7;
	head->next = NULL;
	head->next = malloc(sizeof(Person_t));
	head->next->val = 9;
	head->next->next = NULL;
	push(head, 3, "Emil", 'm', "sciense", 19, "example@example.com");
	push(head, 5, "Love", 'm', "sciense", 19, "example@example.com");
	push(head,7, "Hanna", 'm', "sciense", 19, "example@example.com");
	printf("\nFirst value: %d", head->val);
	printf("\nSecond value: %d", head->next->val);
	printf("\nThird value: %d", head->next->next->val);
	printf("\nFacts: %s,%c,%s,%d,%s", returnName(&head, 3), returnGender(&head, 3), returnStudy_program(&head, 3), returnAge(&head, 3), returnEmail(&head, 3));
	printf("\nFourth value: %d", head->next->next->next->val);
	printf("\nNumber of 7s are: %d", returnWithValues(&head,7));

	printf("The first value is: %d\n", head->val);
	pushToFirst(&head, 9);
	pop(&head);
	modify(&head, 9,1);
	modify(&head, 3,1);

	char *name;
	char gender;
	char *study_program;
	int age;
	char *email;
	struct Person * next;
	int val;
	//Person_t * head, int val, char *name, char gender, char *study_program, int age, char *email

	printf("HItehere");
	print_list(head);

	return 1;
}

