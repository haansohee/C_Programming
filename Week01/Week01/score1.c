//
//  score1.c
//  Week2
//
//  Created by 한소희 on 2022/09/06.
//
// 배열 예제 프로그램.

#include <stdio.h>

int main(void)
{
    int i;
    int scores[5];  // 각 학생들의 성적을 저장할 크기가 5인 배열 선언.
    // 배열 요소에 값 대입.
    scores[0] = 10;
    scores[1] = 20;
    scores[2] = 30;
    scores[3] = 40;
    scores[4] = 50;
    
    // for문 사용하여 효율적으로 배열 요소에 값 대입.
    for (i = 0; i < 5; i++)
    {
        printf("scores[%d] = %d \n", i, scores[i]);
    }
    
    return 0;
    
}
