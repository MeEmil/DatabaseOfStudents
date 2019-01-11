#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "FOO.h"



int personGrabber(char *nameptr, char *genderptr, char *study_programptr, char *emailptr,int *ageptr, char *personal_numberptr){
	*ageptr = 25;
	printf("Variable saved in  ageptr:%d", ageptr);
	printf("Variable pointed to by ageptr:%d", *ageptr);
	printf("Adress of nameptr:%d", &ageptr);
	printf("Enter name:");
	scanf("%s", nameptr);
	printf("HEY");
	printf("Adress of nameptr:%d", &ageptr);
	printf("Variable pointed to by ageptr:%d", *ageptr);
	printf("Variable saved in  ageptr:%d", ageptr);
	printf("Enter gender:");
	scanf("%s", genderptr);
	printf("Enter program:");
	scanf("%s", study_programptr);
	printf("Enter email:");
	scanf("%s", emailptr);
	printf("Enter age:");
	scanf("%d", ageptr);
	printf("%d\n", ageptr);
	printf("%d\n", *ageptr);
	//printf("%d\n", &ageptr);
	printf("Enter personal number:");
	scanf("%s", personal_numberptr);
}

int main()
{
	//Creates a head for people
	Person_t *head = NULL;
	head = malloc(sizeof(Person_t));
	head->next = NULL;

	char name[100];
	char gender[100];
	char study_program[100];
	char email[100];
	int age =19;
	char personal_number[100];

	char *nameptr = name;
	char *genderptr = gender;
	char *study_programptr = study_program;
	char *emailptr = email;
	int *ageptr = &age;
	char *personal_numberptr = personal_number;

	//personGrabber(nameptr, genderptr, study_programptr, emailptr, ageptr, personal_numberptr);
	printf("\n%d",age);
	char name1[] = "Emil";
	char gender1[] ="male";
	char study_program1[] ="computer_sciense";
	char email1[] ="emil@mail";
	int age1 =19;
	char personal_number1[] ="9904041234";
	printf("%s", name1);

	printf("Person Name: %s Gender: %s Program: %s Email: %s Age: %d personal_number: %s\n", name1, gender1, study_program1, email1, age1 , personal_number1);
	push(head, name1, gender1, study_program1, &age1, email1, personal_number1);
	printf("1:%s",head->name);
	printf("2:%d",head->age);

	//////////

	printf("\n%d",age);
	char name2[] = "Hanna";
	char gender2[] ="female";
	char study_program2[] ="Biology";
	char email2[] ="hanna@mail";
	int age2 =17;
	char personal_number2[] ="0204031334";
	printf("%s", name2);

	printf("Person Name: %s Gender: %s Program: %s Email: %s Age: %d personal_number: %s\n", name2, gender2, study_program2, email2, age2 , personal_number2);
	pushNext(head, name2, gender2, study_program2, &age2, email2, personal_number2);

	printf("1:%s",head->name);
	printf("2:%d",head->age);
	printf("3:%s",head->next->name);
	printf("4:%d",head->next->age);


	/////////////

	printf("\n%d",age);
	char name3[] = "Filip";
	char gender3[] ="male";
	char study_program3[] ="Music";
	char email3[] ="filip@mail";
	int age3 =33;
	char personal_number3[] ="8107031334";
	printf("%s", name3);

	printf("Person Name: %s Gender: %s Program: %s Email: %s Age: %d personal_number: %s\n", name3, gender3, study_program3, email3, age3 , personal_number3);
	pushNext(head, name3, gender3, study_program3, &age3, email3, personal_number3);

	printf("1:%s",head->name);
	printf("2:%d",head->age);
	printf("3:%s",head->next->name);
	printf("4:%d",head->next->age);
	printf("5:%s",head->next->next->name);
	printf("6:%d",head->next->next->age);

	//////////

	printf("\n%d",age);
	char name4[] = "Kjell";
	char gender4[] ="male";
	char study_program4[] ="Astronomy";
	char email4[] ="kjell@mail";
	int age4 =26;
	char personal_number4[] ="9007031634";
	printf("%s", name4);

	printf("Person Name: %s Gender: %s Program: %s Email: %s Age: %d personal_number: %s\n", name4, gender4, study_program4, email4, age4 , personal_number4);
	pushNext(head, name4, gender4, study_program4, &age4, email4, personal_number4);

	printf("1:%s",head->name);
	printf("2:%d",head->age);
	printf("3:%s",head->next->name);
	printf("4:%d",head->next->age);
	printf("5:%s",head->next->next->name);
	printf("6:%d",head->next->next->age);
	printf("7:%s",head->next->next->next->name);
	printf("8:%d",head->next->next->next->age);


	//Code that adds new user
	//personGrabber(nameptr, genderptr, study_programptr, emailptr, ageptr, personal_numberptr);
	//printf("Person Name: %s Gender: %s Program: %s Email: %s Age: %d personal_number: %s\n", nameptr, genderptr, study_programptr, emailptr, *ageptr , personal_numberptr);
	//pushNext(head, nameptr, genderptr, study_programptr, ageptr, emailptr, personal_numberptr);

	//head->age = 19;
	//printf("Hello");
}

