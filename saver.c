#include <stdio.h>
#include <stdlib.h>
#include "FOO.h"

int add(FILE *tmp, char *personal_number, char *name, char gender, char *study_program, int age, char *email)
{
    fprintf(tmp,"%s %s %c %s %d %s\n", personal_number, name, gender, study_program, age, email);
    printf("XXXX %s", personal_number);
    return 0;
}

int openi()
{
    FILE *file = fopen("C:/Users/Emil/Desktop/Github/tempt.txt", "rb");

    char *string;
    fseek(file, 0, SEEK_SET);
    fread(string, 4,1,file); 
    printf("\n%s", string);
    fread(string, 14,1,file); 
    printf("\n%s", string);
    if(string=="hello"){
        printf("IT PRINTS");
    }
    fclose(file);
    return 0;
}

int save()
{
    char string1[6];
    FILE *file = fopen("C:/Users/Emil/Desktop/Github/tempt.txt", "wb");
    char *string = "helloqwertyuiop";
    fwrite("size",4,1,file);
    fwrite(string,sizeof(string)+1,1,file);
    fclose(file);
    return 0;
}

int saver()
{
    int ch;
    const char 
        input_file[] = "C:/Users/Emil/Desktop/Github/input.txt",
        temp_file[] = "C:/Users/Emil/Desktop/Github/temp.txt";

    FILE *in = fopen(input_file, "r");
    FILE *tmp = fopen(temp_file, "w");

    if (in == NULL) {
        printf("Could not open test2.txt!\n");
        system("pause");
        exit(1);
    }

    if (tmp == NULL) {
        printf("Could not open temp.txt!\n");
        system("pause");
        exit(1);
    }

    char string ;
    char *getsstring;
    char *get2string;
    int n1 = 44;
    int n2, n3, n4, n5;
    int a1 = 11;
    int a2 = 22;
    int a3 = 33;
    int a4 = 44;
    int a5 = 55;
    int m1, m2, m3;

    int integer;
    //fscanf(in,"%d   %d", &integer, &n1);
    //printf("The integer!!!: %d %d",integer, n1);

    //while()
    //{
    //    fprintf(tmp, "%g %g %g %g %g sum: %g\n", a1, a2, a3, a4, a5, a1 + a2 + a3 + a4 + a5);

    //}

    //while (fscanf(in, "%lf %lf %lf %lf %lf", &n1, &n2, &n3, &n4, &n5) > 0) {
    //    printf("wagawagawagawagawagawagawaga");
    //    fprintf(tmp, "%g %g %g %g %g sum: %g\n", n1, n2, n3, n4, n5, n1 + n2 + n3 + n4 + n5);
    //}
//fprintf(tmp, "%s %s %d %d %d %d %d\n", "hi", "the re", a1, a2, a3, a4, a5);
        //fprintf(tmp, "%d %d %d\n",a4, a3, a5);
    //fscanf(tmp, "%s %s %d %d %d %d %d\n", &getsstring, &get2string, &n1, &n2, &n3, &n4, &n5);

    char *personal_number;
    char *name;
    char gender;
    char *study_program;
    int age;
    char *email;

    personal_number = "9904043625";
    name = "Emil";
    gender = 'm';
    study_program = "sciense";
    age = 19;
    email = "example@example.org";

    while (fscanf(in, "%s %d %d %d %d %d\n", &getsstring, &n1, &n2, &n3, &n4, &n5) > 0) {
        printf("%s %d %d %d %d %d\n", &getsstring, n1, n2, n3, n4, n5);
        fprintf(tmp, "%s %d %d %d %d %d\n", &getsstring, n1, n2, n3, n4, n5);
    }

    fprintf(tmp,"%s %s %c %s %d %s\n", personal_number, name, gender, study_program, age, email);
    add(tmp, "9904043625", "Emil", 'm', "sciense", 19, "example@example.org");
    //fscanf(tmp, "%d %d %d\n", &m1, &m2, &m3);
    //printf("\nHello:%c %d %d %d",getsstring,n1,n2,n3);
    //printf("\nHello:%d %d %d",m1,m2,m3);
    printf("!!!!: \n %s",&getsstring);
    
    fclose(in);
    fclose(tmp);

   //remove(temp_file);

    printf("\n\n");
    return 0;
}

void open_file(){
    const char temp_file[] = "C:/Users/Emil/Desktop/Github/temp.txt";
    FILE *tmp = fopen(temp_file, "w");
    if (tmp == NULL) {
        printf("Could not open test2.txt!\n");
        system("pause");
        exit(1);
    }
}

void close_file(FILE *file){
    fclose(file);
}