//
//  scores4.c
//  Week2
//
//  Created by 한소희 on 2022/09/06.
//
// 배열을 이용한 학생 5명의 성적 평균을 구하는 프로그램.

#include <stdio.h>
#define STUDENTS 5

int main(void)
{
    int scores[STUDENTS];  // 각 학생들의 성적을 저장할 크기가 5인 정수형 배열 선언.
    int sum = 0;
    int i, avg;
    
    for (i = 0; i < STUDENTS; i++)
    {
        printf("학생들의 성적을 입력하시오 : ");
        scanf("%d", &scores[i]);
        
        sum += scores[i];
    }
    
    avg = sum / STUDENTS;
    printf("학생들의 평균 : %d", avg);
    
    return 0;
}
