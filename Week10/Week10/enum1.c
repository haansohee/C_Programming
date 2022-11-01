//
//  enum1.c
//  Week10
//
//  Created by 한소희 on 2022/11/01.
//

#include <stdio.h>

enum days {SUN, MON, TUE, WED, THU, FRI, SAT};

char *days_name[] = {
    "sunday", "monday", "tuseday", "wednesday", "thursday", "friday", "saturday"
};

int main(void) {
    enum days d;
    d = WED;
    printf("%d째 요일은 %s입니다. \n", d, days_name[d]);
    
    return 0;
}
