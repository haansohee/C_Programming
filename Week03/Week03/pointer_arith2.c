//
//  pointer_arith2.c
//  Week03
//
//  Created by 한소희 on 2022/09/20.
//
// 간접 참조 연산자와 증감 연산자 예제 프로그램

#include <stdio.h>

int main(void)
{
    int i = 10;
    int *pi = &i;
    
    printf(" i = %d , pi = %p \n", i, pi);
    (*pi)++;  // pi가 가리키는 주소의 값을 증가
    printf(" i = %d , pi = %p \n", i, pi);
    
    *pi++;  // pi가 가리키는 주소 값을 증가
    printf(" i = %d , pi = %p \n", i, pi);
}
