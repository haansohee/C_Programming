//
//  main.c
//  week11
//
//  Created by 한소희 on 2022/11/08.
//
// 포인터 배열 예제

#include <stdio.h>

int main(void) {
    int i, n;
    char *fruits[] = {  // 문자형 포인터 배열
        "apple",
        "blueberry",
        "orange",
        "melon"
    };
    
    n = sizeof(fruits) / sizeof(fruits[0]);  // 배열 원소 개수 계산
    for (i = 0; i < n; i++) {
        printf("%s \n", fruits[i]);
    }

    return 0;
}
