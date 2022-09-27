/*****************************************************************
 *
 *  본 파일은 C응용프로그래밍 과제를 위해 작성함.
 *
 * 작성자 : 한소희
 * 최초 작성일자 : 2022년 9월 20일 화요일
 * 변경 이력 : 주석 추가하였음.
 ********************************************************************/

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

#include <stdio.h>  // 표준 입출력 함수 (printf, scanf) 등을 사용하기 위해 포함
#include <stdlib.h>   // rand() 함수 사용하기 위해 선언
#define x 3
#define y 3  // 3X3 크기의 보드

// 보드 그려주는 함수
void draw_board(char board[x][y])
{
    // 보드 그리기...
    for (int i = 0; i < x; i++)
    {
        printf("%c |%c |%c \n", board[i][0], board[i][1], board[i][2]);  // 보드에 사용자 혹은 컴퓨터가 좌표에 넣은대로 출력
        printf("---------\n");
    }
    
    printf("\n");
}

// (2) 보드를 분석하여서 게임이 종료되었는지를 검사하는 함수를 추가한다.
char get_winner(char board[x][y]) // 사용자 우승 여부 함수
{
    for (int i = 0; i < 3; i++)  // 행 빙고 검사
    {
        
        if (board[i][0] == 'X' && board[i][1] == 'X' && board[i][2] == 'X')
        {
            return 'X';  // 한 행 전체가 'X' 즉, 사용자가 넣은 좌표라면 X retrun
        }
    }
    
    for (int i = 0; i < 3; i++)  // 열 빙고 검사
    {
        if (board[0][i] == 'X' && board[1][i] == 'X' && board[2][i] == 'X')
        {
            return 'X';
        }
    }
        
    // 대각선 빙고 검사
    if (board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X')
    {
        return 'X';
    }
    
    if (board[0][2] == 'X' && board[1][1] == 'X' && board[2][0] == 'X')
    {
        return 'X';
    }
    
    return ' ';
}

int main(void)
{
    int input_x, input_y;  // 사용자에게 입력받는 좌표를 저장하는 변수.
    int count = 0;
    int random_x = 0;  // 랜덤으로 생성된 컴퓨터가 놓을 좌표를 저장하는 변수.
    int random_y = 0;
    
    char board[x][y];  // 보드
    char user = 'X';  // 플레이어 캐릭터를 X로 설정해 준다.
    char computer = 'O';  // 컴퓨터는 O
    char check;  // 승자가 있는지 확인하는 변수.
    
    // 보드를 초기화.
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            board[i][j] = ' ';
        }
    }
    
    do
    {
        // 첫 시작은 임의로 사용자로 지정해 주었다.
        // 사용자로부터 좌표 x,y를 입력받고 보드를 출력한다.
        printf("사용자의 캐릭터는 'X'입니다. 3x3 크기의 보드입니다. (x, y) 좌표를 입력하세요. ");
        scanf("%d, %d", &input_x, &input_y);
        
        if ((input_x > 3 || input_x < 1) || (input_y > 3 || input_y < 1))
        {
            printf("1~3 사이의 숫자를 입력하세요. \n");
            continue;
        }
        
        input_x -= 1;  // 만약, 사용자가 1을 입력하였다면 배열의 0번째이므로...
        input_y -= 1;
        
        //(1) 코드를 실행하면, 상대방이 놓은 곳에 다시 놓을 수 있다. 이것을 방지하는 코드를 추가한다.
        if (board[input_x][input_y] != ' ')
        {
            printf("이미 놓은 자리입니다. 다시 선택하여 주세요. \n");
            continue;
        }
        
        printf("사용자가 놓은 자리 : %d, %d \n", input_x + 1, input_y + 1);
        
        board[input_x][input_y] = user;  // 사용자가 입력한 좌표에 사용자 캐릭터 그리기.
        draw_board(board);  // 보드 그려주기
        
        check = get_winner(board);  // 사용자가 이겼는지 검사
        
        if (check == 'X')
        {
            printf("사용자 승 \n");
            break;  // 이김 -> do-while문 (프로그램) 종료
        }
        
        // (3) 컴퓨터가 자동으로 다음 수를 결정하도록 프로그램을 변경한다.
        // 컴퓨터 차례
        printf("컴퓨터('O')의 차례입니다. \n");
        
        do
        {
            random_x = (rand() % 3) + 1;
            random_y = (rand() % 3) + 1;
            
            random_x -= 1;
            random_y -= 1;
            
            //(1) 코드를 실행하면, 상대방이 놓은 곳에 다시 놓을 수 있다. 이것을 방지하는 코드를 추가한다.
            if (board[random_x][random_y] != ' ')
            {
                continue;
            }
            
            printf("컴퓨터가 놓은 좌표 : (%d, %d) \n", (random_x + 1), (random_y + 1));
            break;
        } while(1);
        
        board[random_x][random_y] = computer;
        draw_board(board);  // 보드 그리기

        // (2) 보드를 분석하여서 게임이 종료되었는지를 검사하는 함수를 추가한다.
        count++;  // while문이 4번 반복하면 종료
        
    } while(count <= 3);
    
    return 0;
}
