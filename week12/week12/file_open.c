//
//  file_open.c
//  scanf3
//
//  Created by 한소희 on 2022/11/15.
//  파일 열기 예제

#include <stdio.h>

int main(void) {
    FILE *fp = NULL;  // FILE을 가리키는 포인터 fp를 선언.
    fp = fopen("sample.txt", "w");
    
    if (fp == NULL) {
        printf("파일 열기 실패 \n");
    } else {
        printf("파일 열기 성공 \n");
    }
    
    fclose(fp);
    return 0;
}
