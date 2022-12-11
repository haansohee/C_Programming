//
//  reserv.c
//  HotelReservation
//
//  Created by 한소희 on 2022/12/10.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "reserv.h"
#define FUNC


int menu() {
#ifdef FUNC
    int input;
    printf("메뉴를 선택하여 주세요. \n\n");
    printf("1. 예약하기 \n");
    printf("2. 예약 해지하기 \n");
    printf("3. 개인 예약 확인하기 \n");
    printf("4. 전체 예약 확인하기 \n");
    printf("5. 프로그램 종료 \n");
    printf("선택 : ");
    
    scanf("%d", &input);
    return input;
#endif
}

void reservation(Person **person_head, char name[], char phone[], char email[], char number[]) {
#ifdef FUNC
    if(!*person_head) {
        Person *person_new = (Person*)malloc(sizeof(Person));
        person_new->next = NULL;
        
        *person_head = person_new;
        
        strcpy((*person_head)->name, name);
        strcpy((*person_head)->phone, phone);
        strcpy((*person_head)->email, email);
        (*person_head)->number = number;
        // 예약자 정보 저장
    } else {
        reservation(&(*person_head)->next, name, phone, email, number);
    }
   
#endif
}


int cancle(char name[], Person **person_head) {   // 예약 해지 함수
#ifdef FUNC
    Person *temp;
    Person *prev;
    int number = 0;
    
    temp = *person_head;
    
    if (!(strcmp(temp->name, name))) {
//        printf("%s \n", name);
//        printf("temp 이름 : %s \n", temp->name);
        *person_head = temp->next;
        number = temp->number;
        printf("%d 객실 퇴실. \n", number);
        free(temp);
        return number;
        
    } else {
        for (int i = 0; !(strcmp(temp->name, name)); ++i) {
            temp = temp->next;
            if (i != 0) {
                prev = prev->next;
            }
            if (i == 1) {
                prev = *person_head;
            }
        }
        prev->next = temp->next;
        number = temp->number;
        printf("%d 객실 퇴실. \n", number);
        free(temp);
        return number;
        
    }
    return number;

#endif
}

Person *check(char name[], Person **person_head) {
#ifdef FUNC
    Person *head = *person_head;
    
    if (head == NULL) {
        printf("예약 정보가 없습니다. \n");
        return 0;
    }
    
    while (head != NULL) {
        Person *temp = head;
        if (!(strcmp(temp->name, name))) {
            printf("------------ 예약 정보 확인 -------------\n");
            printf("성함 : %s \n", temp->name);
            printf("연락처 : %s \n", temp->phone);
            printf("객실 번호 : %d \n", temp->number);
            printf("메일 : %s \n", temp->email);
            printf("------------------------------------\n");
            break;
        } else {
            temp = temp->next;
        }
    }
    return 0;
#endif
}

void checkAll(Person **person_head) {  // 예약 전체 확인하기 
#ifdef FUNC
    Person *head = *person_head;
    if (head == NULL) {
        printf("예약 정보가 없습니다.\n");
        return;
    } else {
        Person *temp = head;
        for (int i = 0; temp != NULL; ++i) {
            printf("------------ 예약 정보 확인 -------------\n");
            printf("no. %d \n", i);
            printf("성함 : %s \n", temp->name);
            printf("연락처 : %s \n", temp->phone);
            printf("객실 번호 : %d \n", temp->number);
            printf("메일 : %s \n", temp->email);
            printf("------------------------------------\n");
            temp = temp->next;
        }
    }
#endif
}

void Exit(Person **person_head) {  // 종료 함수 + 파일 쓰기 함수
#ifdef FUNC
    FILE *save = fopen("reservation.txt", "wt");  // 파일 오픈
    Person *head = *person_head;
    if (head != NULL) {
        while (head->next != NULL) {
            Person *al = head;
            fprintf(save, "%s| %s | %d | %s \n", al->name, al->phone, al->number, al->email);  // 파일 작성
        }
        fprintf(save, "%s| %s | %d | %s \n", head->name, head->phone, head->number, head->email);  // 노드 한 개일 경우의 파일 작성
        free(head);
    }
    exit(1);
#endif
}
