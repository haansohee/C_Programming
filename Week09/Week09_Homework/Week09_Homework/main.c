//
//  main.c
//  Week09_Homework
//
//  Created by 한소희 on 2022/10/26.
//  9주차 C응용프로그램 과제

/*
 조건은 다음과 같다.
 
 (1) 전화번호부를 구성하기 위하여 이름, 집전화번호, 휴대폰 번호로 구성되는 구조체를 정의한 후에 이 구조체의 배열을 선언하여 전화번호부를
 구성한다.
 (2) 3명의 데이터를 사용자로부터 받아서 저장한다.
 (3) 사용자로부터 이름을 입력받아 전화번호를 검색하는 프로그램을 작성한다.
 */

# define MAX_VALUE 3  // 3명의 데이터를 입력받으므로 최대 값 3 선언.
#include <stdio.h>   // 표준 입출력 함수를 위해 선언.
#include <string.h>  // 문자열 비교 함수 (strcmp) 사용을 위해 선언.

struct PhoneBook {  // 전화번호부 구조체 선언. 조건 (1)
    char name[20];  // 이름
    char homeNum[20];  // 집 전화번호
    char phoneNum[20];  // 휴대폰 번호
};

int main(void) {
    struct PhoneBook pb[MAX_VALUE];  // 구조체 변수 배열 pb 선언. 조건 (1)
    char inputName[30];  // 사용자에게 이름 입력받고, 입력받은 이름과 저장된 이름 비교하기 위해 선언함.
    
    for (int i = 0; i < MAX_VALUE; i++) {  // 3명 (MAX_VALUE) 의 데이터를 입력받으므로 MAX_VALUE만큼 반복. 조건 (2)
        printf("이름을 입력하시오 : ");
        scanf("%s", pb[i].name);  // 이름을 입력받아 ph구조체의 i번째 name에 저장.
        
        printf("집전화번호를 입력하시오 : ");
        scanf("%s", pb[i].homeNum);  // 집 전화번호를 입력받아 ph구조체의 i번째 homeNum에 저장.
        
        printf("휴대폰 번호를 입력하시오 : ");
        scanf("%s", pb[i].phoneNum);  // 휴대폰 번호를 입력받아 ph구조체의 i번째 phoneNum에 저장.
    }

    printf("========================\n");
    
    printf("검색할 이름을 입력하시오 : ");
    scanf("%s", inputName);  // 검색할 이름 입력받아서 inputName에 저장.
    
    // 조건 (3)
    for(int j = 0; j < MAX_VALUE; j++) {  // 검색할 이름을 찾아야 하므로 저장되어 있는 데이터 수(사람 수)만큼 반복하여서 순회를 돈다.
        if (strcmp(pb[j].name, inputName) == 0) {  // 만약 순회 시 검색한 이름을 찾았다면,
            printf("집전화번호 : %s \n", pb[j].homeNum);  // 집 전화번호와
            printf("휴대폰 번호 : %s \n", pb[j].phoneNum);  // 휴대폰 번호를 입력시켜 준다.
        }
    }

    return 0;
}
