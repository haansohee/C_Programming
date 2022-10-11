//
//  char_process.c
//  Week06
//
//  Created by 한소희 on 2022/10/11.
//

#include <stdio.h>
#include <ctype.h>

int main(void) {
    int c;
    
    while ((c = getchar()) != EOF) {
        if (islower(c)) {
            c = toupper(c);
        }
        putchar(c);
    }
    
    return 0;
}

