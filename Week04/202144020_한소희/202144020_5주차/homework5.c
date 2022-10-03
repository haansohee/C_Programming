//
//  최초 작성일자 : 2022년 10월 2일 일요일
//  본 파일은 C응용프로그래밍 5주차 과제를 위하여 작성됨.
//
//  Created by 한소희 on 2022/10/02.
//
/*
 * 직원들의 기본급이 배열 A[]에, 직원들의 보너스는 배열 B[]에 저장되어 있다. 기본급과 보너스를 합하여 이번달에 지급할 월급의 총액을 계산한다. A[]와 B[]를 더하여 배열 C[]에
 * 저장하는 함수를 테스트한다. 즉, 모든 i 에 대하여 C[i] = A[i] + B[i]가 된다.
 */

#include <stdio.h>  // 표준 입출력 함수(printf, scanf) 등을 사용하기 위한 라이브러리

void array_add(int *A, int *B, int *C, int size);  // 함수 원형 선언.

int main(void) {
    // 월급 및 보너스는 작성자가 임시로 정하였음.
    int A[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};  // 직원들의 월급 배열
    int B[10] = {5, 10, 15, 30, 35, 40, 45, 50, 55, 65};  // 직원들의 보너스 배열
    int C[10] = {};  // 월글 + 보너스 배열
    
    array_add(A, B, C, sizeof(A) / sizeof(int));  // &A[0], &B[0], &C[0]과 같음 배열 A,B,C의 요소 및 길이는 다 동일하므로 A의 요소값(4 * 10) / int의 사이즈(4)를 해 주어 배열의 길이를 구해준다.
}

void array_add(int *A, int *B, int *C, int size) {
    
    printf("A[] = ");  // 배열 A[] 출력
    for (int i = 0; i < size; i++) {
        printf("%d ", A[i]);
    }
    
    printf("\nB[] = ");  // 배열 B[] 출력
    for (int i = 0; i < size; i++) {
        printf("%d ", B[i]);
    }
    
    printf("\nC[] = ");  // 배열 C[] 출력
    for (int i = 0; i < size; i++) {
        C[i] = A[i] + B[i];  // 배열 C[]에 A[]와 B[]를 더하여 저장한다.
        printf("%d ", C[i]);
    }
}
