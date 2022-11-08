//
//  fp1.c
//  week11
//
//  Created by 한소희 on 2022/11/08.
//
// 함수 포인터 예제

#include <stdio.h>

int add(int, int);
int sub(int, int);

int main(void) {
    int result;
    int (*pf)(int, int);  // 함수 포인터 정릐
    
    pf = add;   // 함수 포인터에 함수 add()의 주소 대입
    result = pf(10, 20);
    printf(" 10 + 20 = %d \n", result);
    
    pf = sub;  // 함수 포인터에 함수 sub()의 주소 대입
    result = pf(10, 20);  // 함수 포인터를 통한 함수 sub() 호출
    
    printf(" 10 - 20 = %d \n", result);
    
    return 0;
}

int add(int x, int y) {
    return x + y;
}

int sub(int x, int y) {
    return x - y;
}
