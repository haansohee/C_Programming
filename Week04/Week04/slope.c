//
//  slope.c
//  Week04
//
//  Created by 한소희 on 2022/09/27.
//
// 기울기와 y절편을 구하는 예제 프로그램

// 기울기와 y절편을 계산하는 함수 원형 선언
int get_line_parameter(int x1, int y1, int x2, int y2, float *slope, float *yintercept);

#include <stdio.h>

int main(void) {
    float s, y;
    
    if(get_line_parameter(3, 3, 6, 6, &s, &y) == 1) {
        printf("에러 \n");
    } else {
        printf("기울기 = %.2f, y절편 = %.2f \n", s, y);
    }
    
    return 0;
}

int get_line_parameter(int x1, int y1, int x2, int y2, float *slope, float *yintercept) {
    if (x1 == x2) {
        return -1;
    } else {
        *slope = (float)(y2 - y1) / (float)(x2 - x1);
        *yintercept = y1 - (*slope) * x1;
        
        return 0;
    }
}
