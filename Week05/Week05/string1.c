//
//  string1.c
//  Week05
//
//  Created by 한소희 on 2022/10/04.
//

#include <stdio.h>

int main(void) {
    int i ;
    char str[4];  // 문자열 저장하기 위한 문자 배열 선언.
    
    str[0] = 'a';
    str[1] = 'b';
    str[2] = 'c';
//    str[3] = NULL;
     str[3] = '\0';  // NULL 문자를 넣어준다.
    
    i = 0;
    
    while(str[i] != '\0') {
        printf("%c", str[i]);
        i++;
    }
    printf("\n");
    
    return 0;
}
