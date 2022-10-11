//
//  strtok.c
//  Week06
//
//  Created by 한소희 on 2022/10/11.
//

#include <stdio.h>
#include <string.h>

char s[] = "Man is immortal, because he has a soul";
char seps[] = " , \t\n";
char *token;

int main(void) {
    token = strtok(s, seps);
    
    while(token != NULL) {
        printf("토근 : %s \n", token);
        token = strtok(NULL, seps);
    }
        return 0;
}
