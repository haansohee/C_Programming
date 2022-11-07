//
//  main.c
//  homework_bank
//  C응용프로그래밍 10주차 과제를 위해 작성됨.
//  Created by 한소희 on 2022/11/05.
//

#include <stdio.h>  // 입출력 함수 사용 헤더
#include <string.h>  // strcmp 함수 사용 헤더

#define MAX_VALUE 100  // 100명의 고객 정보를 저장하기 위함
int i = 0;  // 구조체 배열 인덱스를 위한 전역 변수

struct client {  // 고객 정보 구조체
    int number;  // 고객 번호
    char name[20];  // 고객 이름
    char address[50];  // 고객 주소
    int cash;  // 고객 예금 잔액
} c[MAX_VALUE];  // 구조체 배열 변수 선언

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


int main(void) {
    int w_num = 0;  // while문에서 사용할 변수.
    
    while(w_num < MAX_VALUE) {
        int input;  // 관리 시스템 작업 번호 저장할 변수.
        
        printf("\n============================\n");
        printf("#    고객 계좌 관리 시스템    # \n");
        printf("# 작업 할 번호를 눌러 주세요.  # \n");
        printf("#     1. 고객 정보 입력     # \n");
        printf("#     2. 고객 정보 변경     # \n");
        printf("#     3. 고객 정보 출력     # \n");
        printf("#     4. 종료             # \n");
        printf("============================\n\n");
        
        scanf("%d", &input);  // 관리 시스템 작업 번호 입력받기
        
        if (input == 1) {  // 1번 작업이라면
            printf("1번 선택.\n\n");
            Input_ClientInform(); // 고객 정보 입력 함수 호출
        } else if (input == 2) {
            // 고객 정보 변경 함수 : 고객 예금 잔액 변경
            printf("2번 선택.\n\n");
            Edit_Cash();
        } else if (input == 3) {
            // 고객 이름으로 고객 정보(번호, 이름 예금 잔액) 출력 함수
            printf("3번 선택.\n\n");
            Output_ClientInform();
        } else if (input == 4) {
            printf("4번 선택. 종료.\n\n");
            break;
        } else {
            printf("1 2 3 4 중에 선택하십시오. \n\n");  // 1 2 3 4 외의 번호 입력 시
            continue;
        }
        
        w_num++;
        
        if (w_num > MAX_VALUE) {  // MAX_VALUE보다 작을 때까지 무한 반복.
            break;
            
        }
    }
        
    
    return 0;
}
