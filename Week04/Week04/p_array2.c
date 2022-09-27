//
//  p_array2.c
//  Week04
//
//  Created by 한소희 on 2022/09/27.
//
// 포인터와 배열의 관계 예제 프로그램 (2)

#include <stdio.h>

int main(void) {
    int a[] = { 10, 20, 30, 40, 50 };  // int형 배열 선언.
    
    printf("a = %u \n", a);  // 배열의 이름을 포인터처럼 사용 가능.
    
    printf("a + 1 = %u \n", a + 1);  // a + 1의 값은 배열 a의 시작 주소 + (int데이터크기(배열a는 Int) * 1)
    printf("a = %d \n", *a);  //  배열의 이름이 배열의 시작 주소. 즉, 배열의 시작 주소의 값을 출력한 것임.
    printf("*(a + 1) = %d\n", *(a+1));  // +1을 했으므로 다음 주소의 값을 출력.
    
    return 0;
}
