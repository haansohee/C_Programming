//
//  mile2km.c
//  week11
//
//  Created by 한소희 on 2022/11/08.
//
// main 함수의 인수 활용

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    double mile, km;
    
    if (argc != 2) {
        printf("사용 방법 : mile2mk 거리 \n");
        return 1;
    }
    
    mile = atof(argv[1]);
    km = 1.609 * mile;
    printf("입력된 거리는 %f km입니다. \n", km);
    
    return 0;
}
