//
//  main.c
//  week14
//
//  Created by 한소희 on 2022/11/29.
//

#include <stdio.h>
#include "rect.h"

int main(void) {
    RECT r = {10, 10, 20, 20};
    double area = 0.0;
    
    draw_rect(&r);
    printf("\n===============\n");
    move_rect(&r, 10, 20);
    printf("\n===============\n");
    draw_rect(&r);
    printf("\n===============\n");
    area = calc_area(&r);
    printf("\n===============\n");
    draw_rect(&r);
    return 0;
}
