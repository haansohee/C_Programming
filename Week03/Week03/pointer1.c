//
//  pointer1.c
//  Week03
//
//  Created by 한소희 on 2022/09/20.
//
// 간접 참조 연산자 예제 프로그램 1

#include <stdio.h>

int main(void)
{
    int i = 3000;
    int *p = NULL;
    
    p = &i;
    
    printf("p = %u \n", p);
    printf("&i = %u \n", &i);
    
    printf("i = %d \n", i);
    printf("*p = %d \n", *p);  // p가 가리키고 있는 주소의 값이 출력됨.
    
    return 0;
}
