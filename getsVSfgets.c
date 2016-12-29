#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define f(x) (x*x)
typedef enum
{
    a ,
    b
}TEST;


int main( )
{
    char testChar[12];
    int length,i;
    #if 1
    FILE *pFile;
    pFile = fopen("1234.txt","r");
    //freopen("1234.txt","r",stdin);
    freopen("123.txt","w",stdout);
    while(fgets(testChar,12,pFile)!=NULL){
        length = strlen(testChar);
        #if 1
        for(i=0;i<length;i++)
            if(testChar[i] == '\n')
                testChar[i] = '\0';
        #endif
        length = strlen(testChar);
        printf("length =%d\t",length);
        printf("%s",testChar);

    }
    #else
    freopen("1234.txt","r",stdin);
    freopen("123.txt","w",stdout);
    while(gets(testChar)!=NULL){
        printf("%s",testChar);
    }

    #endif


}
