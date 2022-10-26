//
//  student2.c
//  Week09
//
//  Created by 한소희 on 2022/10/25.
// 구조체 예제 2

#include <stdio.h>

struct sturdent {
    int number;
    char name[10];
    double grade;
};

int main(void) {
    struct sturdent s;
    
    printf("학번 입력 : ");
    scanf("%d", &s.number);
    
    printf("이름 입력 : ");
    scanf("%s", &s.name);
    
    printf("학점 입력 : (실수) ");
    scanf("%lf", &s.grade);
    
    printf("학번 : %d \n", s.number);
    printf("이름 : %s \n", s.name);
    printf("학점 : %f \n", s.grade);
    
    return 0;
}
