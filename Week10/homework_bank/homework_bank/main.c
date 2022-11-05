//
//  main.c
//  homework_bank
//
//  Created by 한소희 on 2022/11/05.
//

#include <stdio.h>

struct client {
    int number;
    char name[20];
    char address[50];
    int cash;
};

// 고객 정보 입력 함수
void Input_ClientInform() {
    printf("");
}


int main(void) {
    struct client c;
    int num;
    
    printf("########################## \n");
    printf("#    고객 계좌 관리 시스템    # \n");
    printf("# 작업 할 번호를 눌러 주세요.  # \n");
    printf("#     1. 고객 정보 입력     # \n");
    printf("#     2. 고객 정보 변경     # \n");
    printf("#     3. 고객 정보 출력     # \n");
    printf("#     4. 종료             # \n");
    printf("########################## \n");
    
    scanf("%d", &num);
    
    if (num == 1) {
        Input_ClientInform();
    }
    // 고객 정보 입력 함수
    // 고객 이름으로 고객 정보(번호, 이름 예금 잔액) 출력 함수
    // 고객 정보 변경 함수 : 고객 예금 잔액 변경
    return 0;
}
