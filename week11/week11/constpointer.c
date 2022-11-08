//
//  constpointer.c
//  week11
//
//  Created by 한소희 on 2022/11/08.
//
// const 포인터 예제

#include <stdio.h>

int main(void) {
    char s[] = "Barking dogs seldom bite.";
    char t[] = "A bad workman blames tis tools.";
    const char *p = s;  // 가리키는 곳의 내용 변경 불가능. / 포인터의 내용 변경 가능.
    char * const q = s;  // 가리키는 곳의 내용 변경 가능.  / 포인터의 내용 변경 불가능.
    
//    p[3] = 'a';  // p가 가리키는 곳의 내용을 변경할 수 없음.
    p = t;  // 하지만 p는 변경이 가능함.
    
    q[3] = 'a';  // q가 가리키는 곳의 내용은 변경할 수 있음.
//    q = t;  // 하지만 q는 변경이 불가능함.
    
    return 0;
}
