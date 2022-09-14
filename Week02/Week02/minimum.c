//
//  minimum.c
//  Week02
//
//  Created by 한소희 on 2022/09/13.
//
// 0부터 100까지의 난수를 발생시켜 최소값 구하는 프로그램.

#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int main(void)
{
    int prices[SIZE] = { 0 };  // 배열의 요소를 난수로 초기화.
    int i, minimum;
    
    printf("----------------------------------\n");
    printf("1  2  3  4  5  6  7  8  9  10\n");
    printf("----------------------------------\n");
    
    srand( (unsigned)time(NULL) );
    
    for(i = 0; i < SIZE; i++)
    {
        prices[i] = (rand() % 100) + 1;  // 배열을 난수로 초기화.
        printf("%-3d", prices[i]);  // %-3d는 3자리의 필드에 왼쪽 정렬
    }
    
    printf("\n\n");
    
    minimum = prices[0];  // 첫번째 배열 요소를 최소값으로 지정
    
    for (i = 0; i < SIZE; i++)
    {
        if (prices[i] < minimum)
        {
            minimum = prices[i];  // 현재의 최소값보다 배열 요소가 작으면, 배열 요소를 최소값으로 복사.
        }
    }
    
    printf("최소값은 %d입니다.\n", minimum);
    
    return 0;
        
}
