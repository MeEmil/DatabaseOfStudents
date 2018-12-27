#include <stdio.h>
#include <stdlib.h>
void Text(){
	printf("IT Phone Home!!");
}



struct Person{
	int age;
	char *first_name; 
	char male;
	struct Person * next;
};


typedef struct node
{
   	int val;
   	struct node * next;
} node_t;

void print_list(node_t * head) {
    node_t * current = head;

    while (current != NULL) {
        printf("%d\n", current->val);
        current = current->next;
    }
}

void push(node_t * head, int val) {
    node_t * current = head;
    while (current->next != NULL) {
        current = current->next;
    }

    /* now we can add a new variable */
    current->next = malloc(sizeof(node_t));
    current->next->val = val;
    current->next->next = NULL;
}

void pushToFirst(node_t ** head, int val) {
    node_t * new_node;
    new_node = malloc(sizeof(node_t));

    new_node->val = val;
    new_node->next = *head;
    *head = new_node;
}

int pop(node_t ** head) {
    int retval = -1;
    node_t * next_node = NULL;

    if (*head == NULL) {
        return -1;
    }

    next_node = (*head)->next;
    retval = (*head)->val;
    free(*head);
    *head = next_node;

    return retval;
}

int remove_last(node_t * head) {
    int retval = 0;
    /* if there is only one item in the list, remove it */
    if (head->next == NULL) {
        retval = head->val;
        free(head);
        return retval;
    }

    /* get to the second to last node in the list */
    node_t * current = head;
    while (current->next->next != NULL) {
        current = current->next;
    }

    /* now current points to the second to last item of the list, so let's remove current->next */
    retval = current->next->val;
    free(current->next);
    current->next = NULL;
    return retval;

}

int structmain()
{



	//Second column of code
	node_t * head = NULL;
	head = malloc(sizeof(node_t));
	head->val = 2;
	head->next = malloc(sizeof(node_t));
	head->next->val = 7;
	head->next->next = NULL;

	printf("The first value is: %d\n", head->val);
		printf("The sexond value is: %d", head->next->val);
	pushToFirst(&head, 9);
	pop(&head);
	print_list(head);
	return 1;
	//Create one struct
	//Create one linked struct
}

