#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char a1[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G'};
    char a2[7]="ABCDEFG";
    char combineString[100] ,s[100];
    printf("a1 = %s\n",a1);
    printf("a2 = %s\n",a2);
    printf("sizeof(a1) = %d\n",sizeof(a1));
    printf("sizeof(a2) = %d\n",sizeof(a2));
    printf("strlen(a1) = %d\n",strlen(a1));
    printf("strlen(a2) = %d\n",strlen(a2));

    sprintf(combineString,"%s%s",a1,a2);
    printf("combineString = %s\n",combineString);

    sprintf(combineString,"%.*s%.*s",sizeof(a1),a1,sizeof(a2),a2);
    printf("combineString = %s\n",combineString);

    char a3[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G','\0'};
    char a4[8]="ABCDEFG";
    printf("a3 = %s\n",a3);
    printf("a4 = %s\n",a4);
    printf("sizeof(a3) = %d\n",sizeof(a3));
    printf("sizeof(a4) = %d\n",sizeof(a4));
    printf("strlen(a3) = %d\n",strlen(a3));
    printf("strlen(a4) = %d\n",strlen(a4));

    sprintf(combineString,"%s%s",a3,a4);
    printf("combineString = %s\n",combineString);


}
