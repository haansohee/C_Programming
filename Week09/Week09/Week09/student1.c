//
// student1.c
//
//  Week09
//
//  Created by 한소희 on 2022/10/25.
// 구조체 예제

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
    int number;
    char name[10];
    double grade;
};

int main(void) {
    struct student s;
    
    s.number = 202144020;
    strcpy(s.name, "한소희");
    s.grade = 4.3;
    
    printf("학번 : %d \n", s.number);
    printf("이름 : %s \n", s.name);
    printf("학점 : %f \n", s.grade);
    
    return 0;
}
