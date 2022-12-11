//
//  main.c
//  HotelReservation
//
//  Created by 한소희 on 2022/12/10.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#include "reserv.h"


Person *person_head = NULL;  // 첫번째 노드 


char input_name[20];  // 성명
char input_phone[30];  // 연락처
int input_number;  // 객실번호
char input_email[30];  // 이메일

int cancleNum;

int output_number;  // 퇴실하는 객실번호

int numbers[10] = {101, 102, 103, 104, 105, 106, 107, 108, 109, 110};  // 사용 가능한 객실 번호를 알려 주기 위한 배열

void changeNumbers(int num) {  // 예약된 객실을 0으로 변경
    for(int i = 0; i < 10; i++) {
        if (numbers[i] == num) {
            numbers[i] = 0;
        }
    }
}

void inputNumbers(int num) {  // 퇴실한 객실을 다시 배열에 추가
    for (int i = 0; i < 10; i++) {
        if (numbers[i] == 0) {
            numbers[i] = num;
            return;
        }
    }
}

int main(void) {
    
    while(1) {
        int input = menu();

        switch(input) {
            case 1: // 예약하기
                printf("\n예약 가능한 객실은 다음과 같습니다. (0인 경우 객실 선택 불가.)\n\n");
                
                for (int i = 0; i < 10; i++) {
                    printf("%d ", numbers[i]);
                }
                
                printf("\n\n-------------------------\n\n");
                printf("성명 : ");  // 예약자의 정보 입력받기
                scanf("%s", input_name);
                printf("연락처 : ");
                scanf("%s", input_phone);
                printf("객실 : ");
                scanf("%d", &input_number);
                printf("이메일 : ");
                scanf("%s", input_email);
                changeNumbers(input_number);
                reservation(&person_head, input_name, input_phone, input_email, input_number);  // 예매 함수 호출
                break;
            case 2:  // 예약 해지
                printf("예약 해지를 진행할 예약자의 성함을 입력하세요 : ");
                scanf("%s", input_name);
                cancleNum = cancle(input_name, &person_head);  // 예약 해지 함수 호출
                inputNumbers(cancleNum);
                break;
            case 3:  // 예약 확인 (개인)
                printf("예약 확인할 예약자의 성함을 입력하세요 : ");
                scanf("%s", input_name);
                check(input_name, &person_head);  // 예약(개인) 확인 함수 호출
                break;
            case 4:  // 예약 확인 (전체)
                checkAll(&person_head);  // 예약(전체) 확인 함수 호출
                break;
            case 5:
                Exit(&person_head);  // 종료 프로그램 호출 
                break;
            default: break;
        }
    }
}
