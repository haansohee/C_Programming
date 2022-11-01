//
//  nested_struct.c
//  Week10
//
//  Created by 한소희 on 2022/11/01.
//

#include <stdio.h>

struct point {
    int x;
    int y;
};

struct rect {
    struct point p1;
    struct point p2;
};

int main() {
    struct rect r;
    int w, h, area, peri;
    
    printf("왼쪽 상단의 좌표를 입력하시오 : ");
    scanf("%d %d", &r.p1.x, &r.p1.y);
    
    printf("-------------------------\n");
    
    printf("오른쪽 상단의 좌표를 입력하시오 : ");
    scanf("%d %d", &r.p2.x, &r.p2.y);
    
    w = r.p2.x - r.p1.x;
    h = r.p2.y - r.p1.y;
    
    area = w * h;
    peri = 2 * w + 2 * h;
    printf("면적 : %d, 둘레 : %d \n ", area, peri);
    
    return 0;
}

