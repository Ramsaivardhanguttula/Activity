
/**
 * @file main.c
 * @author G Ram Sai Vardhan (ramsaivardhanguttula@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-05-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>
#include <string.h>
#include "fun.h"
int main()
{
    char name[100];
    int i,l;
    printf("Enter name: ");//Asking the user
    scanf("%s", name);
    stringtoHexa(name);
    printf("Sum of Hexadecimal is %x\n",stringtoHexa(name));

    return 0;
}