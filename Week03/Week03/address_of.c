//
//  address_of.c
//  Week03
//
//  Created by 한소희 on 2022/09/20.
//
// 주소 연산자 & 예제 프로그램

#include <stdio.h>

int main(void) {
    int i = 0;
    char c = 69;
    double f = 12.3;
    
    // 변수 i, c, f의 주소와 값을 하나씩 출력한다.
    printf("i의 주소 : %u i의 값 : %d \n", &i, i);
    printf("c의 주소 : %u  c의 값 : %c \n", &c, c);
    printf("f의 주소 : %u f의 값 : %.1f \n", &f, f);
    
    return 0;
}
