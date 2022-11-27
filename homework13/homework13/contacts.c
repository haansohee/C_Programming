//
//  main.c
//  homework13
//
//  Created by 한소희 on 2022/11/27.
//

// <조건>
//1. search_record()에서 탐색이 실패했으면 에러 메시지를 출력하도록 코드 추가 하기
//
//2. update_record() 함수를 구현하기
// 앞에서 언급한 대로 수정된 부분만 파일에 덮어쓰는 것은 상당히 어려우므로
// 수정된 전체 내용을 읽어서 새로운 파일에 쓰기

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 100

typedef struct person { // 연락처를 구조체로 표현한다.
    char name[SIZE];        // 이름
    char address[SIZE];     // 주소
    char mobilephone[SIZE]; // 휴대폰
    char desc[SIZE];        // 특징
} PERSON;

void menu();
PERSON get_record();
void print_record(PERSON data);
void add_record(FILE *fp);
void search_record(FILE *fp);
void update_record(FILE *fp, FILE *fp2);

int main() {
    FILE *fp;
    FILE *fp2;
    int select;
    
    // 이진 파일을 추가 모드로 오픈.
    if ((fp = fopen("address.dat", "a+")) == NULL) {
        fprintf(stderr, "입력을 위한 파일을 열 수 없습니다.");
        exit(1);
    }
    
    while(1) {
        menu(); // 메뉴를 표시한다.
        printf("정수값을 입력하시오: "); // 사용자로부터 정수를 받는다.
        scanf("%d", &select);
        switch(select) {
            case 1:
                add_record(fp); // 데이터를 추가한다.
                break;
            case 2:
                update_record(fp, fp2);  // 데이터를 수정한다.
                break;
            case 3:
                search_record(fp);  // 데이터를 탐색한다.
                break;
            case 4:
                return 0;
        }
    }
    fclose(fp); // 이진 파일을 닫는다.
    return 0;
}

// 사용자로부터 데이터를 받아서 구조체로 변환한다.
PERSON get_record() {
    PERSON data;
    
    getchar();  // 줄바꿈 문자 없애기
    printf("이름: ");
    gets(data.name);    // 이름을 입력받는다.
    printf("주소: ");
    gets(data.address); // 주소를 입력받는다.
    printf("휴대폰: ");
    gets(data.mobilephone); // 휴대폰 번호를 입력받는다.
    printf("특징: ");
    gets(data.desc);    // 특징을 입력받는다.
    return data;
}

// 구조체 데이터를 화면에 출력한다.
void print_record(PERSON data) {
    printf("이름: %s\n", data.name);
    printf("주소: %s\n", data.address);
    printf("휴대폰: %s\n", data.mobilephone);
    printf("특징: %s\n", data.desc);
}

// 메뉴를 화면에 표시하는 함수
void menu() {
    printf("==========================\n");
    printf(" 1. 추가\n 2. 수정\n 3. 검색\n 4. 종료\n");
    printf("==========================\n");
}

// 데이터를 추가한다.
void add_record(FILE *fp) {
    PERSON data;
    data = get_record();    // 사용자로부터 데이터를 받아서 구조체에 저장
    fseek(fp, 0, SEEK_END); // 파일의 끝으로 간다. ( 파일 포인터를 파일의 끝으로 이동)
    
    fwrite(&data, sizeof(data), 1, fp); // 구조체 데이터를 파일에 쓴다.
}

// 데이터를 탐색한다.
void search_record(FILE *fp) {
    char name[SIZE];
    PERSON data;
    
    fseek(fp, 0, SEEK_SET);    // 파일의 처음으로 간다.
    getchar();  // 줄바꿈 문자 없애기
    printf("탐색하고자 하는 사람의 이름: ");
    gets(name); // 이름을 입력받는다.
    while(!feof(fp)) {  // 파일의 끝까지 반복한다.
        fread(&data, sizeof(data), 1, fp);  // 현재 위치에서 데이터를 읽는다.
        if( strcmp(data.name, name) == 0) { // 이름을 비교한다.
            print_record(data); // 일치하면 데이터를 화면에 출력한다.
            break;
        } else {  // (조건 1) 탐색이 실패했으면 에러 메시지를 출력하도록 코드 추가 하기
            printf("탐색 에러. 해당 이름 없음");
            break;
        }
    }
}

// 데이터를 수정한다.
void update_record(FILE *fp, FILE *fp2) {
    PERSON data;
    char name[SIZE];
    char addr[SIZE];
    char mobile[SIZE];
    char desc[SIZE];
    
    fseek(fp, 0, SEEK_SET);
    getchar();
    printf("수정하고자 하는 사람의 이름 : ");
    gets(name);
    
    while(!feof(fp)) {  // 파일의 끝까지 반복한다.
        fread(&data, sizeof(data), 1, fp);  // 현재 위치에서 데이터를 읽는다.
        if( strcmp(data.name, name) == 0) { // 이름을 비교한다.
            print_record(data); // 일치하면 데이터를 화면에 출력한다.
            printf("수정할 데이터를 입력하세요. ");
            getchar();  // 줄바꿈 문자 없애기
            
            printf("이름: ");
            gets(name);    // 이름을 입력받는다.
            printf("주소: ");
            gets(addr); // 주소를 입력받는다.
            printf("휴대폰: ");
            gets(mobile); // 휴대폰 번호를 입력받는다.
            printf("특징: ");
            gets(desc);
            
            strcpy(data.name, name);//data.name = name;
            strcpy(data.address, addr);  // data.address = addr;
            strcpy(data.mobilephone, mobile); // data.mobilephone = mobile;
            strcpy(data.desc, desc); // data.desc = desc;
            
            if ((fp2 = fopen("address2.dat", "a+")) == NULL) {  // 수정한 내용을 저장할 파일 열기
                fprintf(stderr, "새로 입력하기 위한 파일을 열 수 없습니다.");
                exit(1);
            }
            
            fwrite(&data, sizeof(data), 1, fp2); // 구조체 데이터를 파일에 쓴다.
            fclose(fp2);
            
        } else {
            printf("탐색 에러. 해당 이름 없음");
            break;
        }
    }
    
}
