//
//  strcmp.c
//  Week06
//
//  Created by 한소희 on 2022/10/11.
//

#include <stdio.h>
#include <string.h>

int main(void) {
    char s1[80];
    char s2[80];
    int result;
    
    printf("첫 번째 단어를 입력하시오 : ");
    scanf("%s", s1);
    printf("두 번째 단어를 입력하시오 : ");
    scanf("%s", s2);
    
    result = strcmp(s1, s2);
    
    if (result < 0) {
        printf("%s가 %s보다 앞에 있습니다. ", s1, s2);
    } else if (result == 0){
        printf("%s가 %s와 같습니다. ", s1, s2);
    } else {
        printf("%s가 %s보다 뒤에 있습니다. ",s1, s2);
    }
    
    return 0;
}
