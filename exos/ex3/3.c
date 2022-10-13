#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char mot[26], motf[26], c;
    int stop=0,i=0,cmp =0;
    motf[0] ="";
    FILE *f = fopen("3.txt","r") ;
    printf("Hello \n");
    scanf("%s",&mot);
    printf("%s",mot);
    printf("----------file----------\n");
    while ((c=fgetc(f))!= EOF) || (stop==
    {
        if (isalpha(c)){
            motf[i]=c;
            i++;
            printf("%s, i = %d \n",motf,i);
        }else
        {
            if (i!=0)
            {
                motf[i] = '\0' ;
                if(strcmp(mot, motf)==0)
                {
                    cmp ++;
                    printf("cmp = %d \n",cmp);
                }
                i = 0;
            }


        }

    }
    printf("\n ------------------- \n Nombre d'occurence: %i \n",cmp);

}