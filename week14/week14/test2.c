//
//  test2.c
//  week14
//
//  Created by 한소희 on 2022/12/05.
//

#include <stdio.h>
#include <stdlib.h>

void ComNation() {  // 콤비네이션 계산기
    int n;
    int r;
    int p = 1;
    
    printf("\n[M-계산기] 콤비네이션(조합) 계산기를 실행합니다.(nCr) \n");
    
    printf("n의 값을 입력해주세요. \n");
    scanf("%d", &n);
    
    printf("r의 값을 입력해주세요.\n");
    scanf("%d", &r);
    printf("nCr (n = %d , r = %d) 의 값 : ", n, r);
    
    int a = n;
    int b = r;
    int n2;
    for (int i = 1; i < b; i++)
    {
        n = n * (a - i);
        for (int j = 1; j < b; j++)
        {

            r = r * (b - j);

        }
        n2 = n * 1 / r;
        printf("%d ", n2);
    }
}
void Homo() {  // 중복 조합의 수 계산기
    int r;
    int n;
    printf("\n[M-계산기] 중복 조합의 수 계산기를 실행합니다.\n( 서로 다른 n개에서 r개를 택하는 중복조합의 수 nHr) \n");
    printf("n의 값을 입력해주세요. \n");
    scanf("%d", &n);

    printf("r의 값을 입력해주세요. \n");
    scanf("%d", &r);
    
    printf("nHr (n = %d , r = %d) 의 값 : ", n, r);

    int b = r;
    int c = n;
    int n2;
    int a = (c + b - 1);
    int d = a;
    
    for (int i = 1; i <= b; i++)
    {
       d = d * (a - i);
       
    }
    for (int j = 1; j < b; j++)
    {

       r = r * (b - j);

    }
    n2 = d * 1 / r;
    printf("%d ", n2);
}

void Facto() {  // 팩토리얼 계산기
    int n;
    int result = 1;
    
    printf("\n[M-계산기] 팩토리얼 계산기를 실행합니다.(n!) \n");
    printf("n의 값을 입력해주세요. \n");
    scanf("%d", &n);
    printf("n! 의 값 (n = %d) : ", n);
    
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    
    printf("%d", result);
}
void Pie() {  // 중복 순열 계산기
    int n;
    int r;
    printf("\n[M-계산기] 중복 순열 계산기를 실행합니다.nπr \n");

    printf("n의 값을 입력해주세요. \n");
    scanf("%d", &n);

    printf("r의 값을 입력해주세요. \n");
    scanf("%d", &r);
    
    printf("nπr의 값 (n = %d , r = %d) : ", n, r);

    int a = n;

    for (int i = 1; i < r; i++)
    {
       n = n * a;
       printf("%d", n);

    }
}

int main(void) {
    int input;
    
    while(1) {
        printf("\n[M-계산기]\n");
        printf("다음 중 계산기를 선택해 주세요.\n");
        printf("1. 콤비네이션 계산기 \n");
        printf("2. 중복 조합의 수 계산기 \n");
        printf("3. 팩토리얼 계산기 \n");
        printf("4. 중복 순열 계산기 \n");
        printf("5. 프로그램 종료 \n");
        
        scanf("%d", &input);
        
        switch(input) {
            case 1:
                ComNation();
                break;
            case 2:
                Homo();
                break;
            case 3:
                Facto();
                break;
            case 4:
                Pie();
                break;
            case 5:
                exit(0);
                break;
            default:
                break;
        }
    }
}
