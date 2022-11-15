//
//  search.c
//  scanf3
//
//  Created by 한소희 on 2022/11/15.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    FILE *fp;
    char fname[128];
    char buffer[256];
    char word[256];
    int line_num = 0;
    
    printf("입력 파일을 입력하세요 : ");
    scanf("%s", fname);
    
    printf("탐색할 단어를 입력하세요 : ");
    scanf("%s", word);
    
    
    // 파일을 읽기 모드로 연다.
    if ((fp = fopen(fname, "w")) == NULL) {
        fprintf(stderr, "파일 %s 을 열 수 없습니다. \n", fname);
        exit(1);
    }
    
    while(fgets(buffer, 256, fp)) {
        line_num++;
        if (strstr(buffer, word)) {
            printf("%s : %d 단어 %s 이 발견되었습니다. \n", fname, line_num, word);
        }
    }
    
    fclose(fp);
    
    return 0;
}
