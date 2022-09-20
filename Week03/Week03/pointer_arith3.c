//
//  pointer_arith3.c
//  Week03
//
//  Created by 한소희 on 2022/09/20.
//
// 포인터의 형변환 예제 프로그램

#include <stdio.h>


int main(void)
{
    int data = 0x0A0B0C0D;  // 16진수의 값을 data에 저장.
    char *pc = NULL;
    
    pc = (char *)&data;  // type casting
    
    for (int i = 0; i < 4; i++)
    {
        printf("*(pc + %d) = %02X\n", i, *(pc + i));
    }
    
    return 0;
}
