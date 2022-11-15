//
//  scanf4.c
//  scanf3
//
//  Created by 한소희 on 2022/11/15.
//

#include <stdio.h>

int main(void) {
    char s[80];
    
    printf("문자열을 입력하시오. ");
    scanf("%[abc]", s);  // a, b, c로만 이루어진 문자열만 받음.
    printf("입력된 문자열 = %s \n", s);
    return 0;
}
