//
//  qsort.c
//  week11
//
//  Created by 한소희 on 2022/11/08.
//
// 정렬 예제

#include <stdio.h>
#include <stdlib.h>

int values[] = {98, 23, 99, 37, 26};

int compare(const void * a, const void * b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int n;
    qsort(values, 5, sizeof(int), compare);
    
    printf("정렬한 후 배열 : ");
    for (n = 0; n < 5; n++) {
        printf("%d ", values[n]);
    }
    printf("\n");
    
    return 0;
}
