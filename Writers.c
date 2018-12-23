#include <stdio.h>

void Writer()
{
// printf() displays the string inside quotation
 	FILE *f = fopen("file.txt", "w");
	if (f == NULL)
 	{
 		printf("Error opening file!\n");
	}
 /* print some text */
 	const char *text = "Write this to file";
 	fprintf(f, "Some text: %s\n", text);
 /* print integers and floats */
 	int i = 1;
 	float py = 3.1415927;
 	fprintf(f, "Integer: %d, float: %f\n", i, py);
 /* printing single chatacters */
 	char c = 'A';
 	fprintf(f, "A character: %c\n", c);
 	fclose(f);
 	printf("Heo");
 	getchar();
}