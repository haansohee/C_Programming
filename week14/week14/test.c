#include<stdio.h>


int main()
{
   for(int k = 0; k >= 0; k++)
   {

      int input, ComNation, Homo, Facto, Pie;//입력값 콤비네이션, 호모지니어스, 팩토리얼, 파이
      int n, r;

      printf("\n[M-계산기] 다음중 계산기를 선택해주세요.\n1. 콤비네이션 계산기\n2. 중복 조합의 수 계산기\n3. 팩토리얼 계산기\n4. 중복 순열 계산기");

      scanf("%d", &input);

      if (input == 1)
      {
         printf("\n[M-계산기] 조합 계산기를 실행합니다.(nCr)");

         printf("\nn의 값을 입력해주세요.");
         scanf("%d\n", &n);

         printf("\nr의 값을 입력해주세요.");
         scanf("%d\n", &r);
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
            printf("%d \nn,r값 : ", n2);

         }

         input = 0;
      }
      else if (input == 2)
      {
         printf("\n[M-계산기] 중복 조합의 수 계산기를 실행합니다.\n( 서로 다른 n개에서 r개를 택하는 중복조합의 수 nHr )");
         printf("\nn의 값을 입력해주세요.");
         scanf("%d\n", &n);

         printf("\nr의 값을 입력해주세요.");
         scanf("%d\n", &r);

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
         printf("%d \nn,r값 : ", n2);
         input = 0;
      }
      else if (input == 3)
      {
         printf("\n[M-계산기] 팩토리얼 계산기를 실행합니다.(n!)");
         printf("\nn의 값을 입력해주세요.");
         scanf("%d\n", &n);
         int a = n;
         for (int i = 1; i < n; i++)
         {
            n = n * (a - i);
            if (n != 0)
               printf("%d\n값 : ", n);

         }
         input = 0;

      }
      else if (input == 4)
      {
         printf("\n[M-계산기] 중복 순열 계산기를 실행합니다.nㅠr");

         printf("\nn의 값을 입력해주세요.");
         scanf("%d\n", &n);

         printf("\nr의 값을 입력해주세요.");
         scanf("%d\n", &r);

         int a = n;

         for (int i = 1; i < r; i++)
         {
            n = n * a;
            printf("%d\n값 : ", n);

         }
         input = 0;
      

      }
   }
   

   
}
