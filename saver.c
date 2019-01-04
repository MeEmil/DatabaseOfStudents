#include <stdio.h>
#include <stdlib.h>

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
    fscanf(tmp, "%s %s %d %d %d %d %d\n", &getsstring, &get2string, &n1, &n2, &n3, &n4, &n5);
    //fscanf(tmp, "%d %d %d\n", &m1, &m2, &m3);
    //printf("\nHello:%c %d %d %d",getsstring,n1,n2,n3);
    //printf("\nHello:%d %d %d",m1,m2,m3);
    printf("!!!!: \n %s",&getsstring);
    printf("!!!!:\n %s",&get2string);
  
    fclose(in);
    fclose(tmp);

   //remove(temp_file);

    printf("\n\n");
    return 0;
}