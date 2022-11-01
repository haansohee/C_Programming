//
//  pointer_to_st.c
//  Week10
//
//  Created by 한소희 on 2022/11/01.
//

#include <stdio.h>

struct student {
    int number;
    char name[20];
    double grade;
};

int main(void) {
    // 구조체 변수 s를 선언하고, 초기화. student 구조체를 가리킬 수 있는 포인터 p 선언.
    struct student s = {202144020, "한소희", 4.5};
    struct student *p;
    
    p = &s;  // 구조체 변수 s의 주소값을 구조체 포인터 p에 대입하여 p가 s를 가리키도록 하였음.
    
    printf("학번 = %d, 이름 = %s, 학점 %.2f \n", s.number, s.name, s.grade);
    printf("학번 = %d, 이름 = %s, 학점 %.2f \n", (*p).number, (*p).name, (*p).grade);
}
