//
//  scanf_printf.c
//  Week05
//
//  Created by 한소희 on 2022/10/04.
//

#include <stdio.h>

int main(void) {
    char name[100];
    char address[100];
    
    printf("이름을 입력하세요. ");
    scanf("%s", name);
    
    printf("주소를 입력하세요. ");
    scanf("%s", address);
    
    printf("이름 : %s \n", name);
    printf("주소 : %s \n", address);
    
    return 0;
}
