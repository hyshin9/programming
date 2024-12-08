//
//  board.c
//  sharkGame
//

#include "board.h"

// ----- EX. 3 : board ------------
#define N_COINPOS       12
#define MAX_COIN        4
// ----- EX. 3 : board ------------
// ----- EX. 5 : shark ------------
#define MAX_SHARKSTEP   6
#define SHARK_INITPOS   -4
// ----- EX. 5 : shark ------------
// ----- EX. 3 : board ------------
static int board_coin[N_BOARD];
static int board_status[N_BOARD]; //0 - OK, 1 - destroyed
// ----- EX. 3 : board ------------

static int shark_position;

// ----- EX. 3 : board ------------
void board_printBoardStatus(void)
{
    int i;
    
    printf("----------------------- BOARD STATUS -----------------------\n");
    for (i=0;i<N_BOARD;i++)
    {
        printf("|");
        if (board_status[i] == BOARDSTATUS_NOK)
            printf("X");
        else
            printf("O");
    }
    printf("|\n");
    printf("------------------------------------------------------------\n");
}

int board_initBoard(void)
{
    int i;
    
    //variable initialization
    for (i=0;i<N_BOARD;i++)
    {
        board_status[i] = BOARDSTATUS_OK; //(hy)BOARDSTATUS_OK=0
        board_coin[i] = 0;
    }
    
// ----- EX. 5 : shark ------------
    shark_position = SHARK_INITPOS;
// ----- EX. 5 : shark ------------

    //coin allocation
   for(i=0;i<N_COINPOS;i++)
   {
   		while (board_coin[i]==0)	
   		{
   			int pos; 
			pos = rand() % (MAX_COIN+1);	//(hy)coin칸 rand할당 
   			if (board_getBoardCoin(pos)==0){
   				board_coin[pos] = rand() % (MAX_COIN+1);
			   }
			   }
   }
    
    return N_COINPOS;
}
// ----- EX. 3 : board ------------


// ----- EX. 5 : shark ------------
int board_stepShark(void)
{
	shark_position = rand()%6+1;
	board_status[shark_position]=1; //(hy)1=destroyed board_stepShark -> shark_position
	return shark_position;
}
// ----- EX. 5 : shark ------------


// ----- EX. 3 : board ------------
int board_getBoardStatus(int pos)
{
    return board_status[pos];
    //내부 static 전역 변수의 값을 main에 제공 
}


int board_getBoardCoin(int pos)
{
    int coin = board_coin[pos]; //pos번째 보드칸에 있는 coin을 줍는 동작 
    board_coin[pos] = 0;
    return coin;
}
// ----- EX. 3 : board ------------
