//
//  strstr.c
//  Week06
//
//  Created by 한소희 on 2022/10/11.
//

#include <stdio.h>
#include <string.h>

int main(void) {
    char s[] = "A joy that's shared is a joy made double";
    char sub[] = "joy";
    char *p;
    int loc;
    
    p = strstr(s, sub);
    
    loc = (int)(p - s);
    if (p != NULL) {
        printf("%s에서 첫번째 %s가 %d에서 발견되었음. \n", s, sub, loc);
    } else {
        printf("%s가 발견되지 않았음. \n", sub);
    }
    return 0;
}
