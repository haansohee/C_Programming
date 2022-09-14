//
//  student_grade.c
//  Week02
//
//  Created by 한소희 on 2022/09/13.
//
// 학생들의 성적을 저장하고 있는 정수 배열을 만들고, 평균을 계산하는 함수 호출하는 프로그램.

#include <stdio.h>

#define STUDENTS 5

int get_average(int scores[], int size);  // 함수 원형 정의. 배열을 받는 매개변수는 크기를 적어주지 않아도 됨.

int main(void)
{
    int scores[STUDENTS] = {1, 2, 3, 4, 5};
    int avg;
    
    avg = get_average(scores, STUDENTS);  // (1) 원본 배열이
    printf("평균은 %d입니다.\n", avg);
    
    return 0;
}

// 배열에 들어 있는 값들의 평균을 계산하는 함수
int get_average(int scores[], int size)  // (1) 여기로 전달됨.  -> 원본 배열 전달 == call by reference
{
    int i;
    int sum = 0;
    
    for (i = 0; i < size; i++)
    {
        sum += scores[i];  // 반복하면서 배열의 모든 요소들의 합을 계산.
    }
    
    return (sum / size);
}
