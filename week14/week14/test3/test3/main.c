//
//  main.c
//  test3
//
//  Created by 한소희 on 2022/12/06.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i = 80;
    int *p = &i;
    int **dp = &p;
    **dp = 90;
    *p = 100;
    
    printf("%d %d %d", i, *p, **dp);
    return 0;
}
