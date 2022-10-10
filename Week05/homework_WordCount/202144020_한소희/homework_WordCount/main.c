//
//  본 파일은 C응용프로그래밍 6주차 과제를 위해 작성함.
//  homework_WordCount
//
//  최초 작성일자 : 2022/10/09.
//

#include <stdio.h>  // 표준 입출력 함수를 사용하기 위해 포함.
#include <ctype.h>  //isalpah() 함수 사용하기 위해 포함.

int count_word(char *s);  // 함수 원형 선언

int main(void) {
    char engStr[100];  // 입력받은 문자열을 저장할 배열. 임의로 100으로 제한을 두었다.
    int wc = 0;  // 영문자를 카운트할 정수형 변수
    
    printf("영문자열을 입력하세요 : ");
    gets(engStr);  // 영문자열 입력받기.
    
    printf("입력받은 문자열 : ");
    puts(engStr);  // 입력받은 영문자열 출력하기.
    
    wc = count_word(engStr);  // 영문자 카운트하기 위한 함수 호출.
    
    printf("입력받은 문자열의 단어 개수 : %d \n", wc);
    
    return 0;
}

int count_word(char *s) {
    int wc = 0;  // 단어의 개수를 카운트할 wc 선언.
    
    for (int i = 0; s[i] != '\0'; i++) {  // 배열 s의 각 글자 조사.
        if (isalpha(s[i])) {  // i번째 글자가 알파벳이고,
            wc++;  // word count 증가,
        } else {  // 아닐 경우
            continue;
        }
    }
    
    // for문 실행 끝나면
    return wc;  // wc를 반환한다.
}
