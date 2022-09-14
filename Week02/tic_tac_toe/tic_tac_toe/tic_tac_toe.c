// tic_tac_toe 게임 프로그램. 2명의 경기자가 보드를 이용하여 번갈아가면서 O와 X를 놓는 게임. 같은 글자가 가로, 세로 혹은 대각선 상에 놓이면 이기게 된다. 보드의 크기는 3 x 3이다.
// 알고리즘은 다음과 같다.

/*
 
 보드를 초기화 한다.
 while(1)
        보드를 화면에 출력한다.
        사용자로부터 좌표 x,y 입력받는다.
        if (현재 경기자가 'x'이면 )
            board[x][y] = 'x'
        else
            board[x][y] =  'o'
 */
 
 /*

 (1) 코드를 실행하면, 상대방이 놓은 곳에 다시 놓을 수 있다. 이것을 방지하는 코드를 추가한다.
 (2) 보드를 분석하여서 게임이 종료되었는지를 검사하는 함수를 추가한다.
 (3) 컴퓨터가 자동으로 다음 수를 결정하도록 프로그램을 변경한다. 가장 간단한 알고리즘 사용. 예를 들면 비어 있는 첫 번째 좌표에 놓는다.
 
 */

#include <stdio.h>

void init(char board[][3]);
int get_move(int order, char board[][3]);
void disp_board(char board[][3]);

//void init()  // 보드 초기화.
//{
//    for (x = 0; x < 3; x++)
//    {
//        for (y = 0; y < 3; y++)
//        {
//            board[x][y] = ' ';
//        }
//    }
//}

//void input()
//{
//    // 사용자로부터 위치를 받아서 보드에 표시.
//    for (k = 0; k < 9; k++)
//    {
//        printf("(x,y) 좌표:");
//        scanf("%d%d", &x, &y);
//
//        // 상대방이 놓은 곳에 다시 놓는 것을 방지하는 코드
//        if(board[x][y] == 'X' || board[x][y] == 'O')
//        {
//            printf("이미 놓은 자리입니다!\n");
//            continue;
//        }
//    }
//}

int main(void)
{
    char board[3][3];  // 크기가 3 x 3인 보드. 행과 열의 크기가 2인 배열 선언.
    int quit = 0;  // 0으로 초기값 설정.
    
    init(board);  // 보드 초기화.
    
    while(quit)
    {
        disp_board(board);
        quit = get_move(0, board);
        disp_board(board);
        quit = get_move(1, board);
        
        if (quit == 0)
        {
            break;
        }
//        // 사용자로부터 위치를 받아서 보드에 표시.
//        input();
//
////        if (현재 경기자가 'x'이면 )
////            board[x][y] = 'x'
////        else
////            board[x][y] =  'o'
    }
    return 0;
}

void init(char board[][3])
{
    int x, y;
    
    for (x = 0; x < 3; x++)
        {
            for (y = 0; y < 3; y++)
            {
                board[x][y] = ' ';
            }
        }
}

int get_move(int order, char board[3][3])
{
    int x, y, done = 0;
    
    while(done != 1)
    {
        printf("(x, y) 좌표 (종료: -1, -1): ");
        scanf("%d, %d", &x, &y);
        
        if (x == -1 && y == -1)
        {
            return 1;
        }
        
        else
        {
            printf("잘못된 위치입니다. 제대로 입력하세요. \n");
        }
    }
    
    if (order == 0)
    {
        board[x][y] = 'X';
    }
    else
    {
        board[x][y] = 'O';
    }
    
    return 0;
}

void disp_board(char board[3][3])
{
    int i;
    
    for (i = 0; i < 3; i++)
    {
        printf("---|---|---\n");
        printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
        printf("---|---|---\n");
    }
}
