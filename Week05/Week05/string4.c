//
//  string4.c
//  Week05
//
//  Created by 한소희 on 2022/10/04
//
// 주어진 문자열 길이를 구하는 방법 예제

#include <stdio.h>

int main(void) {
    char str[30] = "C language is easy";
    int i = 0;
    
    while(str[i] != 0) {
        i++;
    }
    printf("문자열 \"%s\"의 길이는 %d입니다. \n", str, i);
    
    return 0;
}
