//
//  string3.c
//  Week05
//
//  Created by 한소희 on 2022/10/04.
//

#include <stdio.h>

int main(void) {
    char src[] = "The worst thing to eat before you sleep";
    char dst[100];
    int i;
    
    printf("원본 문자열 = %s \n", src);
    for (i = 0; src[i] != '\0'; i++) {  // NULL 문자가 나올 때까지 반복
        dst[i] = src[i];
    }
    
    dst[i] = '\0';
    printf("복사된 문자열 : %s \n", dst);
    
    return 0;
}
