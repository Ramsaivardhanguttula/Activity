#include "fun.h"
#include <stdio.h>
#include <string.h>

int stringtoHexa(char name[])
{
    int i,l,sum= 0;
    char *x=name;
    l= strlen(name);
    int arr1[l];
    for(i=0;i<=l;i++)
    {
        arr1[i]=(int)*(x+i);
        sum=sum+arr1[i];
    }
    return sum;
}
