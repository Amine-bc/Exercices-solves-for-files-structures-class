#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

FILE *f ;
char file_name[255];
printf("Enter the name of the file you want to open...\n");
scanf("%s",&file_name);
printf("\nThe content of the file %s : \n \n",file_name);
f = fopen(file_name,"r");
char c;
if (f == NULL) {
printf("File not found ");
exit(1);
}else
{
    printf(f);
while ((c=fgetc(f)) != EOF)
{
    putchar(c);
}
printf("\n \n \n");
};
return 0;
};