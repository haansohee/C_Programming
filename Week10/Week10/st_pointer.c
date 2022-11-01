//
//  st_pointer.c
//  Week10
//
//  Created by 한소희 on 2022/11/01.
//

#include <stdio.h>

struct date {
    int month;
    int day;
    int year;
};

struct student {
    int number;
    char name[20];
    double grade;
    struct date *dob;
};

int main(void) {
    struct date d = {7, 24, 2002};
    struct student s = {202144020, "한소희", 4.5};
    
    s.dob = &d;
    
    printf("학번 = %d, 이름 = %s, 학점 %.2f \n", s.number, s.name, s.grade);
    printf("생년월일 = %d / %d / %d \n", s.dob->year, s.dob->month, s.dob->day);
}
