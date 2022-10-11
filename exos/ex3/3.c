#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char mot[26], motf[26], c,cmp;
    int stop,i =0;
    file *f = fopen("3.txt","r") ;
    scanf("%s",&mot);
    while ( (c=fgetc(f)) != EOF )
    {
        if (isalpha(c)){
            motf[i]=c;
            i++;
        }else
        {
            if (i!=0)
            {
                motf[i] = '\0' ;
                if(strcmp(mot, motf))
                {
                    cmp ++;
                }
                i = 0;
            }


        }

    }

}