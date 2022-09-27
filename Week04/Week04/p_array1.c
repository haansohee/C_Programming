//
//  p_array1.c
//  Week04
//
//  Created by 한소희 on 2022/09/27.
//
// 포인터와 배열의 관계 예제 프로그램

#include <stdio.h>

int main(void) {
    int a[] = { 10, 20, 30, 40, 50 };  // int형 배열 선언.
    
    // 배열 a의 각 요소들의 주소 출력.
    printf("&a[0] = %u \n", &a[0]);
    printf("&a[1] = %u \n", &a[1]);
    printf("&a[2] = %u \n", &a[2]);
    printf("&a[3] = %u \n", &a[3]);
    printf("&a[4] = %u \n", &a[4]);
    
    printf("a = %u \n", a);
    
    return 0;
}
