//
//  본 코드는 C응용프로그래밍 7주차 과제를 위해 작성되었음.
//  homework_enrypt
//
//  Created by 한소희 on 2022/10/14.
//
/*
    조건 :
 (1) 복호화하는 함수 decrypt() 작성하여 테스트 하기.
 (2) 메뉴를 만들어서 사용자로 하여금 암호화와 복호화 중에 선택하게 하기. 1 - 암호화 / 2 - 복호화
 */

#include <stdio.h>

void encrypt(char cipher[], int shift);  // 함수 원형 선언 (암호화)
void decrypt(char cipher[], int shift);  // 복호화

int main(void) {
    char cipher[50];  // 암호화/복호화할 문자열
    int shift = 3;   // 이동거리
    int menu;  // 메뉴 선택할 변수
    
    while(1) {
        
        // 조건 : (2) 메뉴를 만들어서 사용자로 하여금 암호화와 복호화 중에 선택하게 하기. 1 - 암호화 / 2 - 복호화 / 0 - 시스템 종료
        
        printf("메뉴 선택 하세요. (1) : 암호화 (2) : 복호화 (0) : 시스템 종료 >> ");  // 메뉴 안내 이벤트
        scanf("%d", &menu);  // 메뉴 입력받기
        
        if(menu == 1) {  // 암호화 메뉴 선택 시
            printf("암호화할 문자열을 입력하시오 : ");
            scanf("%s", &cipher);   // gets 함수가 안 되어서 scanf 함수로 대체하여 작성하였습니다.
            encrypt(cipher, shift); // 문자 배열을 함수에 전달. 원본이 전달됨.
            
        } else if (menu == 2) {  // 복호화 메뉴 선택 시
            printf("복호화할 문자열을 입력하시오 : ");
            scanf("%s", &cipher);
            decrypt(cipher, shift);
        
        } else if (menu == 0) {  // 시스템 종료 선택 시
            break;  // 프로그램 종료
            
        } else {  // 1, 2, 0 이외에 숫자 선택하였을 시
            printf("1, 2, 0 중에 선택하세요.");
        }
    }
    
    return 0;
}

void encrypt(char cipher[], int shift) {  // 암호화 함수
    int i = 0;
    
    while (cipher[i] != '\0') {  // null이 아닐 때까지 반복
        if (cipher[i] >= 'A' && cipher[i] <= 'z') { // 문자가 알파벳이라면
            cipher[i] += shift;
            if (cipher[i] > 'z') {  // 경계를 넘어갔으면 26을 빼서 앞으로 간다.
                cipher[i] -= 26;
            }
        }
        i++;
    }
    
    printf("암호화된 문자열 : %s \n", cipher);  // 암호화된 문자열 출력
}

// 조건 : (1) 복호화하는 함수 decrypt() 작성하여 테스트 하기.
void decrypt(char cipher[], int shift) {
    int i = 0;
    
    while (cipher[i] != '\0') {
        if (cipher[i] >= 'A' && cipher[i] <= 'z') { // 문자가 알파벳이라면
            cipher[i] -= shift;
            if (cipher[i] > 'z') {  // 경계를 넘어갔으면 26을 더해서 앞으로 간다.
                cipher[i] += 26;
            }
        }
        i++;
    }
    
    printf("복호화된 문자열 : %s \n", cipher);  // 복호화된 문자열 출력
}
