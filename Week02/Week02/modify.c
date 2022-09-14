//
//  modify.c
//  Week02
//
//  Created by 한소희 on 2022/09/13.
//
// 원본 배열을 변경하는 프로그램. 1차원 배열을 조작하기.

#include <stdio.h>

#define SIZE 7

void modify_array(int a[], int size);
void print_array(int a[], int size);

int main(void)
{
    int list[SIZE] = {1, 2, 3, 4, 5, 6, 7};
    
    // 배열을 함수로 전달.
    print_array(list, SIZE);
    modify_array(list, SIZE);
    print_array(list, SIZE);
    
    return 0;
}

// a[]를 변경하면, 원본 배열도 변경됨.
void modify_array(int a[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        ++a[i];
    }
}   // 이 함수는 배열을 인수로 받아서 배열 내의 모든 요소를 하나 증가시킴. 배열은 원본이 전달되므로, 호출된 함수가 배열의 요소를 수정하면 원본 배열의 내용도 동시에 수정됨.

// 배열 요소들을 화면에 출력.
void print_array(int a[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%3d", a[i]);
    }
    printf("\n");
}
