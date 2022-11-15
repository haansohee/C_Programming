//
//  scanf6.c
//  scanf3
//
//  Created by 한소희 on 2022/11/15.
//

#include <stdio.h>

int main(void) {
    int x, y, z;
    if (scanf("%d%d%d", &x, &y, &z) == 3) {  // 올바르게 읽은 값의 개수를 반환함
        printf("정수들의 합은 %d \n", x+y+z);
    } else {
        printf("입력값이 올바르지 않습니다.");
    }
    return 0;
}
