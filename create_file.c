#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){

//ask the user for the name of the file he wants to create 
char file_name[256];
char file_full[266];
strcpy(file_full,"./exos/");
printf("What is the name of the file you want to process ? \n PS: add the extention please \n");
scanf("%s",&file_name);
FILE *f ;
strcat(file_full,file_name);
f = fopen(file_full,"w");
printf("What do you want to write ? / PS: max size is 255 characters \n");
char string_s[255];
char *temp;
scanf("%c",&temp); // temp statement to clear buffer
fgets(string_s,30,stdin);
printf("%s \n",string_s);
fprintf(f,"%s",string_s);




return 0;
};