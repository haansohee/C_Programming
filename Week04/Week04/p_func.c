//
//  p_func.c
//  Week04
//
//  Created by 한소희 on 2022/09/27.
//
// 배열 매개 변수 예제 프로그램

#include <stdio.h>

void sub(int b[], int size);  // 함수 원형 선언.

int main(void) {
    int a[3] = { 1, 2, 3 };
    
    printf("%d, %d, %d\n", a[0], a[1], a[2]);
    
    sub(a, 3);  // 배열 a를 sub()함수로 전달. 배열의 이름은 배열의 주소이므로 배열의 주소가 전달되는 것임.
    
    printf("%d, %d, %d\n", a[0], a[1], a[2]);
    
    return 0;
}

void sub(int b[], int size) {  // 매개 변수 b는 전달된 배열을 가리키는 포인터.
    // b[]를 통하여 원본 배열 a[]가 변경됨.
    b[0] = 4;
    b[1] = 5;
    b[2] = 6;
}
