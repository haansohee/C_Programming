//
//  reserv.h
//  HotelReservation
//
//  Created by 한소희 on 2022/12/10.
//

#ifndef reserv_h
#define reserv_h

#include <stdio.h>
#include <stdlib.h>

typedef struct Person {  // 예약자 정보 구초제
    struct Person *next;  // 다음 노드의 주소 저장할 포인터 (연결리스트)
    char name[20];  // 성명
    char phone[30];  // 연락처
    int number;  // 객실번호
    char email[50];  // 이메일
}Person;


int menu();  // 메뉴 함수
void reservation(Person **person_head, char name[], char phone[], char email[], char number[]);  // 예약하기 함수
int cancle(char name[], Person **person_head);  // 예약 해지 함수
Person *check(char name[], Person **person_head);   // 예약 확인(개인) 함수
void checkAll(Person **person_head);  // 예약 확인 (단체) 함수
void Exit(Person **person_head); // 프로그램이 종료될 때 reservation.txt에 값 저장 함수
#endif /* reserv_h */
