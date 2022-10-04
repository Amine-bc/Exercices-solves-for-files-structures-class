#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){

FILE *f1;
FILE *f2;
char fn1[255];
char fn2[255];
strcpy(&fn1,"file1");
strcpy(&fn2,"file2");
f1 = fopen("file1","a");
f2 = fopen("file2","r");
char c;

    fprintf(f1,"\n");
while ((c=fgetc(f2)) != EOF)
{
    fputc(c,f1); // here use always fputc not fprintf 
    // search why that error was happening
    // sahre on stack over flow
};
/*while ( (c=fgetc(f2)) != EOF)
{
    fprintf(f1,"%s",c);
}*/
/*}else {
printf("fix the files");
};
*/
fclose(f1);
fclose(f2);
    return 0;
};