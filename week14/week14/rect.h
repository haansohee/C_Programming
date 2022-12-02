//
//  rect.h
//  week14
//
//  Created by 한소희 on 2022/11/29.
//

#ifndef rect_h
#define rect_h

#pragma once
struct rect {
    int x, y, w, h;
};

typedef struct rect RECT;

void draw_rect(const RECT *);
double calc_area(const RECT *);
void move_rect(RECT *, int, int);


#endif /* rect_h */
