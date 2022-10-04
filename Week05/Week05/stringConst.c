//
//  stringConst.c
//  Week05
//
//  Created by 한소희 on 2022/10/04.
//

#include <stdio.h>

int main(void) {
    char *p = "HelloWorld";
    printf("%s \n", p);
    
    p = "Welcome to C World!";
    printf("%s \n", p);
    
    p = "Goodbye";
    printf("%s \n", p);
    
//    p[0] = 'a';  // Error
    
    return 0;
} 
