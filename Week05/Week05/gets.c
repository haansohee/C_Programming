//
//  gets.c
//  Week05
//
//  Created by 한소희 on 2022/10/04.
//

#include <stdio.h>

int main(void) {
    char name[100];
    char address[100];
    
    printf("이름을 입력하세요 .");
    gets(name);
    
    printf("현재 거주하는 주소를 입력하시오.");
    gets(address);
    
    puts(name);
    puts(address);
    
    return 0;
}
