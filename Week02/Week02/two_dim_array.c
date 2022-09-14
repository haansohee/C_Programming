//
//  two_dim_array.c
//  Week02
//
//  Created by 한소희 on 2022/09/13.
//
// 3 x 5 크기의 정수형 2차원 배열을 정의하고, 이 배열 요소에 0~99의 난수를 저장하여 출력하는 프로그램.

#include <stdio.h>
#include <stdlib.h>

#define ROWS 3
#define COLS 5

int main(void)
{
    int s[ROWS][COLS];  // 2차원 배열 선언
    int i, j;
    
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            s[i][j] = rand() % 100;  // 난수 저장
        }
    }
    
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            printf("%02d ", s[i][j]);  // 난수 출력
        }
        printf("\n");
    }
    
    return  0;
}
