//
//  array_of_struct.c
//  Week10
//
//  Created by 한소희 on 2022/11/01.
//

#include <stdio.h>
#define SIZE 3

struct student {
    int number;
    char name[20];
    double grade;
};

int main() {
    struct student list[SIZE];
    int i;
    
    for (i = 0; i < SIZE; i++) {
        printf("학번 입력 : ");
        scanf("%d", &list[i].number);
        
        printf("이름 입력 : ");
        scanf("%s", list[i].name);
        
        printf("햑점 입력 : ");
        scanf("%lf", &list[i].grade);
    }
    for (i = 0; i < SIZE; i++ ) {
        printf("학번 : %d, 이름 : %s, 학점 : %f.3\n", list[i].number, list[i].name, list[i].grade);
    }
}
