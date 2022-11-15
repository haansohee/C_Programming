//
//  fgetc.c
//  scanf3
//
//  Created by 한소희 on 2022/11/15.
//

#include <stdio.h>

int main(void) {
    FILE *fp = NULL;
    int c;
    
    fp = fopen("sample.txt", "r");
    if(fp == NULL){
        printf("파일 열기 실패\n");
    } else {
        printf("파일 열기 성공 \n");
    }
    
    while((c = fgetc(fp)) != EOF) {
        putchar(c);
    }
    fclose(fp);
    
    printf("\n");
    return 0;
}
