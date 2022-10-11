//
//  stringArray1.c
//  Week06
//
//  Created by 한소희 on 2022/10/11.
//

#include <stdio.h>

int main(void) {
    int i;
    char menu[5][10] = {
        "init",
        "open",
        "close",
        "read",
        "write" };
    for (i = 0; i < 5; i++) {
        printf("%d번째 메뉴 : %s \n", i, menu[i]);
    }
    
    return 0;
}
