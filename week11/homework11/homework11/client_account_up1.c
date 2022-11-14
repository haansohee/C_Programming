//
//  client_account_up1.c
//  homework11
//  C응용 프로그램 11주차 과제를 위해 작성함.
//  Created by 한소희 on 2022/11/14.
//

#include <stdio.h>  // 입출력 함수 사용 헤더
#include <string.h>  // strcmp 함수 사용 헤더
#include <stdlib.h>

#define MAX_VALUE 100  // 100명의 고객 정보를 저장하기 위함
int i = 0;  // 구조체 배열 인덱스를 위한 전역 변수

struct client {  // 고객 정보 구조체
    int number;  // 고객 번호
    char name[20];  // 고객 이름
    char address[50];  // 고객 주소
    int cash;  // 고객 예금 잔액
} c[MAX_VALUE];  // 구조체 배열 변수 선언

int main_screen() {
    int input;
    
    printf("\n============================\n");
    printf("#    고객 계좌 관리 시스템    # \n");
    printf("# 작업 할 번호를 눌러 주세요.  # \n");
    printf("#     1. 고객 정보 입력     # \n");
    printf("#     2. 고객 정보 변경     # \n");
    printf("#     3. 고객 정보 출력     # \n");
    printf("#     4. 종료             # \n");
    printf("============================\n\n");
    
    scanf("%d", &input);  // 관리 시스템 작업 번호 입력받기
    
    return input;
    
}

// 고객 정보 입력 함수
void Input_ClientInform() {
    printf("고객님의 고객 번호, 고객 이름, 고객 주소, 고객 예금 잔액을 입력하십시오. \n");
    
    printf("고객 번호: ");
    scanf("%d", &c[i].number);
    printf("고객 이름: ");
    scanf("%s", c[i].name);
    printf("고객 주소: ");
    scanf("%s", c[i].address);
    printf("고객 예금 잔액: ");
    scanf("%d", &c[i].cash);

    i++;  // 입력받기 끝나면 다음 입력받기를 위하여 1 증가.
}

// 고객 정보 출력 함수
void Output_ClientInform() {
    char ClientName[20];  // 고객의 정보를 찾기 위해 저장할 고객 이름
    int check = -1;  // 해당 고객이 있는지 없는지 체크하기 위한 변수.

    printf("고객님의 성함을 입력해 주십시오.\n");
    scanf("%s", ClientName);
    
    for (int j = 0; j < MAX_VALUE; j++) {
        if (!strcmp(c[j].name, ClientName)) {  // 100번 순회하여 입력받은 이름이 구조체 배열에 있는지 확인
            printf("고객 번호 : %d \n", c[j].number);  // 있다면 정보를 출력하고
            printf("고객 이름 : %s \n", c[j].name);
            printf("고객 주소 : %s \n", c[j].address);
            printf("고객 예금 잔액 : %d \n", c[j].cash);
            check = 1;  // check를 1로 설정.
        }
    }
    
    if (check == -1) {  // 100번 순회했는데도 없다면
        printf("고객님의 정보가 존재하지 않습니다.\n");
    }
}

// 고객 예금 잔액 변경 함수
void Edit_Cash() {
    char ClientName[20];  // 해당하는 고객의 예금 잔액을 변경하기 위하여 이름 입력받기 위해
    int EditCash = 0;  // 변경할 예금 잔액 입력받는 변수
    int check = -1;  // 해당 고객이 있는지 없는지 체크하기 위한 변수.
    
    printf("고객님의 성함을 입력해 주십시오.\n");
    scanf("%s", ClientName);
    
    
    
    for (int j = 0; j < MAX_VALUE; j++) {
        if (!strcmp(c[j].name, ClientName)) {  // 100번 순회하여 입력받은 이름이 구조체 배열에 있는지 확인
            printf("고객님의 현재 잔액은 %d 원입니다. \n", c[j].cash);  // 있다면 현재 잔액을 출력해 주고,
            printf("변경할 예금 잔액을 입력해 주십시오. \n");  // 변경할 예금 잔액을 입력받음.
            scanf("%d", &EditCash);
            
            c[j].cash = EditCash;  // 값 변경
            
            printf("변경 후 예금 잔액은 %d 원입니다.\n", c[j].cash);  // 값 변경 출력
            
            check = 1; // check를 1로 설정.
        }
    }
    
    if (check == -1) {  // 100번 순회했는데도 없다면
        printf("고객님의 정보가 존재하지 않습니다.");
    }
}

// 프로그램 종료 함수
void Exit_program() {
    printf("프로그램을 종료합니다.\n");
    exit(0);
}


int main(void) {
    int w_num = 0;  // while문에서 사용할 변수.
    
    void(*input_func)(void);  // 함수 포인터로 선언해 준다.
    input_func = Input_ClientInform;
    
    void(*edit_func)(void);
    edit_func = Edit_Cash;
    
    void(*output_func)(void);
    output_func = Output_ClientInform;
    
    void(*exit_func)(void);
    exit_func = Exit_program;
    
    while(w_num < MAX_VALUE) {
        int input;  // 관리 시스템 작업 번호 저장할 변수.
        input =  main_screen();  // 작업 번호를 출력해 주는 함수.
        
        switch(input) {
            case 1:  // 작업 1번일 경우
                input_func();    // 고객 정보 입력받는 함수
                break;
                
            case 2:  // 작업 2번일 경우
                edit_func();    // 고객 정보 수정하는 함수
                break;
                
            case 3:  // 작업 3번일 경우
                output_func();  // 고객 정보 출력하는 함수
                break;
                
            case 4:  // 작업 4번일 경우
                exit_func();  // 프로그램 종료 함수
                break;
                
            default:
                break;
        }
        
        w_num++;
        
        if (w_num > MAX_VALUE) {  // MAX_VALUE보다 작을 때까지 무한 반복.
            break;
            
        }
    }
        
    
    return 0;
}

