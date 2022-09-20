//
//  pointer_arith1.c
//  Week03
//
//  Created by 한소희 on 2022/09/20.
//
// 포인터의 증감 연산자 예제 프로그램

#include <stdio.h>

int main(void)
{
    char *pc;  // char, int, double 형 포인터 선언
    int *pi;
    double *pd;
    
    
    // 각 포인터 변수에 절대 주소 10000을 대입. 절대 주소는 사용하지 않는 것이 중요하지만, 명확한 설명을 위해 사용.
    pc = (char *)10000;
    pi = (int *)10000;
    pd = (double *)10000;
    
    printf("증가 전 pc = %d, pi = %d, pd = %d \n", pc, pi, pd); // 각각 10000가 출력됨.
    
    pc++;  // pc의 데이터 크기가 1이므로 1 커짐
    pi++;  // pi의 데이터 크기가 4이므로 4 커짐
    pd++;  // pd의 데이터 크기가 8이므로 8 커짐
    
    printf("증가 후 pc = %d, pi = %d, pd = %d \n", pc, pi, pd);  // 순서대로 10001 , 10004, 10008이 출력됨.
    
    printf("pc + 2 = %d, pi + 2 = %d, pd + 2 = %d \n", (pc+2), (pi+2), (pd+2));  // 순서대로 10003, 10012, 10024가 출력됨.
    // (pc + 2) 연산은 (pc + ((pc의 type 데이터 크기(1) * 2)) = 10003
    // (pi + 2) 연산은 (pi + ((pi의 type 데이터 크기(4) * 2)) = 10012
    // (pd + 2) 연산은 (pd + ((pd의 type 데이터 크기(8) * 2)) = 10024
    
    return 0;
}
