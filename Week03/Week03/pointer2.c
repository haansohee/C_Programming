//
//  pointer2.c
//  Week03
//
//  Created by 한소희 on 2022/09/20.
//
// 간접 참조 연산자 예제 프로그램 2

#include <stdio.h>

int main(void)
{
    int x = 10, y = 20;
    int *p = NULL;  // NULL로 초기화하며 선언.
    
    p = &x;  // 변수 x의 주소를 가리키는 p
    printf("pointer p가 변수 x의 주소를 가리키고 있을 때 : p = %u, *p = %d \n", p, *p);
    
    p = &y;  // 변수 y의 주소를 가리키는 p
    printf("pointer p가 변수 y의 주소를 가리키고 있을 때 : p = %u, *p = %d \n", p, *p);
}
