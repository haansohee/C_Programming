//
//  pointer_variable.c
//  Week03
//
//  Created by 한소희 on 2022/09/20.
//
// 포인터를 선언하고 변수의 주소를 포인터에 대입하는 예제 프로그램

#include <stdio.h>

int main(void)
{
    int i = 10;
    double f = 12.3;
    
    int *pi = NULL;  // 정수를 가리키는 포인터. 지역 변수로 포인터를 선언하고, 초기화를 시키지 않으면 쓰레기 값을 갖게 됨. 따라서 NULL값을 저장하여 주는 것이 좋음. NULL의 주소: 0
    double *pf = NULL;  // double형 실수를 가리키는 포인터.
    
    
    // 포인터 pi에는 변수 i의 주소를, pf에는 변수 f의 주소를 대입한다.
    pi = &i;
    pf = &f;
    
    printf(" 포인터 pi %u, 변수 i 주소 %u \n", pi, &i);
    printf(" 포인터 pf %u, 변수 f 주소 %u \n", pf, &f);
    
    return 0;
    
}
