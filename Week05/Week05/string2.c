//
//  string2.c
//  Week05
//
//  Created by 한소희 on 2022/10/04.
//

#include <stdio.h>

int main(void) {
    char str1[6] = "Seoul";  // 문자열 상수로 초기화.
    char str2[3] = {'i', 's', '\0'};  // 초기값을 나열하여 초기화
    char str3[] = "the capital city of Korea.";  // 문자 배열의 크기 생략. 문자 배열의 크기는 초기값의 개수에 따라 자동으로 결정됨.
    
    printf("%s %s %s \n", str1, str2, str3);
    return 0;
}
