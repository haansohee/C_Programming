//
//  imageProcessing.c
//  Week05
//
//  Created by 한소희 on 2022/10/04.
//
// 밝기를 10만큼씩 증가시켜주는 프로그램
/* 10x10 영상을 2차원 배열로 나타낸다. 이 배열을 받아서 배열의 요소에 10을 더하는 함수 brighten_image()를 작성한다. brighten_image()에서는 포인터가
 * 첫번째 배열 요소를 가리키게 한 후에 각 픽셀의 데이터를 포인터를 통하여 처리한다. 처리가 끝나면 포인터를 증가시켜서 다음 픽셀을 가리키게 한다.
 */
#include <stdio.h>
#define SIZE 5

// 함수 원형 선언
void print_image(int image[SIZE][SIZE]);
void brighen_image(int image[SIZE][SIZE]);

int main(void) {
    int image[SIZE][SIZE] = {   // 디지털 이미지 표현.
        {10, 20, 30, 40, 50},
        {10, 20, 30, 40, 50},
        {10, 20, 30, 40, 50},
        {10, 20, 30, 40, 50},
        {10, 20, 30, 40, 50}};
    
    print_image(image);
    brighen_image(image);
    print_image(image);
    
    return 0;
}

void print_image(int image[SIZE][SIZE]) {
    int r, c;
    for (r = 0; r < SIZE; r++) {
        for (c = 0; c < SIZE; c++) {
            printf("%03d ", image[r][c]);
        }
        printf("\n");
    }
    printf("\n");
}

void brighen_image(int image[SIZE][SIZE]) {
    int r, c;
    int *p;
    p = &image[0][0];  // 첫번째 픽셀을 가리키게 한다.
    
    for (r = 0; r < SIZE; r++) {
        for (c = 0; c < SIZE; c++) {
            *p += 10;
            p++;  // 포인터를 하나 증가시켜서 다음 픽셀을 가리키게 한다.
        }
    }
}
