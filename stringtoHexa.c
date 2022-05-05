#include "fun.h"
#include <stdio.h>
#include <string.h>

int stringtoHexa(char name[])
{
    int i,l,sum= 0;
    char *x=name;// pointer which points to the base address of the string initially
    l= strlen(name);//length of the string is stored into l variable
    int arr1[l];//creating a new array
    for(i=0;i<=l;i++)
    {
        arr1[i]=(int)*(x+i);// Here pointer gets incremented and points to the next address and typecasting into and and storing into array
        sum=sum+arr1[i];
    }
    return sum;
}
