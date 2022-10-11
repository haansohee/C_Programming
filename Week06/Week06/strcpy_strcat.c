//
//  strcpy_strcat.c
//  Week06
//
//  Created by 한소희 on 2022/10/11.
//

#include <stdio.h>
#include <string.h>

int main(void) {
    char str[80];
    
    strcpy(str, "Hello World from ");
    strcat(str, "strcpy ");
    strcat(str, "and ");
    strcat(str, "strcat!");
    
    printf("문자열 : %s \n", str);
    
    return 0;
}
