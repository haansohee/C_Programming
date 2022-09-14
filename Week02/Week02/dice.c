//
//  dice.c
//  Week02
//
//  Created by 한소희 on 2022/09/13.
//
// 주사위를 던져서 각 면이 나오는 횟수 출력하는 프로그램.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 6

int main(void) {
    int freq[SIZE] = { 0 };  // 모든 요소를 0으로 초기화. 생성된 빈도수 저장할 변수.
    int i;
//    for (i = 0; i < 10000; i++) {
//        ++freq[ rand() % 6 ];  // 주사위를 10000번 던짐. 난수의 값을 6으로 나눈 나머지를 주사위의 면으로 간주하고, 해당 면의 빈도를 하나 증가시킴.
//    }
    
    // srand() 함수 사용
    srand((unsigned)time(NULL));  // srand로 초기화.
    
    for (i = 0; i < 10000; i++) {  // 빈도수 생성
        ++freq[ rand() % 6 ];
    }

    printf("========================\n");
    printf("면 빈도 \n");
    printf("========================\n");
    
    for (i = 0; i < SIZE; i++) {
        printf("%d %3d \n", i+1, freq[i]);
    }
    
    return 0;
}
