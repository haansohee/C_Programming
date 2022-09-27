//
//  swap1.c
//  Week04
//
//  Created by 한소희 on 2022/09/27.
//
// 값에 의한 호출 예제 프로그램

#include <stdio.h>

void swap(int x, int y);  // swap() 함수 원형 선언.

int main(void)
{
    int a = 100, b = 200;
    
    printf("a = %d, b = %d \n", a, b);
    swap(a, b);  // swap() 함수 호출
    printf("a = %d, b = %d \n", a, b);
    
    return 0;
}

void swap(int x, int y)
{
    int tmp;
    printf("x = %d, y = %d \n", x, y);
    
    // 변수 tmp를 이용하여 x와 y의 값을 교환.
    tmp = x;
    x = y;
    y = tmp;
    
    printf("x = %d, y = %d \n", x, y);
}

// 실행 결과, x와 y의 값은 바뀌었지만, a와 b의 값은 바뀌지 않았다. swap() 함수에서 x,y의 값이 왜 main()으로 전달되지 않은 이유는, "값에 의한 호출"이기 때문.
// 함수의 인수로 변수의 값만 전달되기 때무에 원본 변수 자체를 변경할 순 없음.
