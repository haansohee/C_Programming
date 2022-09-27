//
//  p_array3.c
//  Week04
//
//  Created by 한소희 on 2022/09/27.
//
// 포인터를 배열처럼 사용하는 예제 프로그램

#include <stdio.h>

int main(void) {
    int a[] = { 10, 20, 30, 40, 50 };  // int형 배열 선언.
    int *p;  // int형 포인터 변수 선언.
    
    p = a;  // 포인터 p에 배열의 이름 a를 대입. 배열의 첫번째 주소가 p에 대입되는 것임. 즉, p와 a는 똑같은 곳을 가리키게 된다는 것.
    printf("a[0] = %d, a[1] = %d, a[2] = %d \n", a[0], a[1], a[2]);
    printf("p[0] = %d, p[1] = %d, p[2] = %d, \n", p[0], p[1], p[2]);
    
    p[0] = 60;
    p[1] = 70;
    p[2] = 80;
    
    printf("a[0] = %d, a[1] = %d, a[2] = %d \n", a[0], a[1], a[2]);
    printf("p[0] = %d, p[1] = %d, p[2] = %d, \n", p[0], p[1], p[2]);
    
    return 0;
}
