//
//  swap2.c
//  Week04
//
//  Created by 한소희 on 2022/09/27.
//
// 참조에 의한 호출 예제 프로그램

// 포인터와 함수
#include <stdio.h>

void swap(int *px, int *py);  // 함수 원형 선언

int main(void) {
    int a = 100, b = 200;
    
    printf("a = %d, b = %d \n", a, b);
    swap(&a, &b);  // swap() 함수 호출. 변수의 주소가 전달됨.
    printf("a = %d, b = %d \n", a, b);
    
    return 0;
}

void swap(int *px, int *py) {
    int tmp;
    
    tmp = *px;  // tmp = a;
    *px = *py;  // a = b;
    *py = tmp;  // b = tmp;
}
