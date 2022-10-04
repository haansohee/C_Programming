//
//  getchar.c
//  Week05
//
//  Created by 한소희 on 2022/10/04.
//
// getchar()의 사용 예제

#include <stdio.h>

int main(void) {
    int ch;
    
    while ((ch = getchar()) != EOF) {
        putchar(ch);
    }
    
    return 0;
}
