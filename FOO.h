#ifndef FOO_H_  
#define FOO_H_

typedef struct Person{
	char *personal_number;
	char *name;
	char *gender;
	char *study_program;
	int *age;
	char *email;
	struct Person * next;
	int val;
} Person_t;

//From structsfile.c
int structmain();
int remove_by_index(Person_t ** head, int n);
void modify(Person_t ** head, int index, char *name, char *gender, char *study_program, int age, char *email, char *personal_number);
int pop(Person_t ** head);
char *returnName(Person_t ** head, int n);
void close_file(FILE *file);
void push(Person_t * head, char *name, char *gender, char *study_program, int *age, char *email, char *personal_number);
void pushNext(Person_t * head, char *name, char *gender, char *study_program, int *age, char *email, char *personal_number);
int returnAge(Person_t ** head, int index);

//From Writers.c
void Writer();

//From text.c
void Text();

//From saver.c
int saver();
int add(FILE *tmp, char *personal_number, char *name, char gender, char *study_program, int age, char *email);
int save();
int openi();

#endif // FOO_H_