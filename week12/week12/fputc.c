//
//  fputc.c
//  scanf3
//
//  Created by 한소희 on 2022/11/15.
//

#include <stdio.h>

int main(void) {
    FILE *fp = NULL;
    fp = fopen("sample.txt", "w");
    if (fp == NULL) {
        printf("파일 열기 실패");
    } else {
        printf("파일 열기 성공");
    }
    
    fputc('a', fp);
    fputc('b', fp);
    fputc('c', fp);
    
    fclose(fp);
    
    return 0;
}
