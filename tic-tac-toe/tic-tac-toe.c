
#include <stdio.h>

#define LOWER_CASE_O 111
#define LOWER_CASE_X 120
#define TO_UPPER(X) (X-= 32)

char take_input()
{

    char buf[3] = {' '};
    int bufSize = sizeof(buf) / sizeof(buf[0]);
    char in = ' ';
    int idx = 0;
    while ((in = getchar()) != EOF)
    {
        buf[idx] = in;
        char current = buf[idx];
        if (current == '\n' && idx == 1)
        {
            return buf[0];
        }
        else if (idx > 1)
        {
            printf("Invalid input, please try again.\n");
            idx = 0;
            continue;
        }
        ++idx;
    }
}




int main()
{
    char board[3][3] = { {' ',' ',' '}, {' ',' ', ' '}, {' ',' ',' '} };
    int colSize = sizeof(board[0]) / sizeof(board[0][0]);
    int rowSize = sizeof(board) / sizeof(board[0]);
    char player, ai = ' ';
    char isOver = 0;
    printf("Which symbol would you use? X or O\n");
    player = take_input();
    while ((player != 'X' && player != 'O') && (player != 'x' && player != 'o'))
    {
        printf("Invalid input, please try again.\n");
       player = take_input();
    }
    if (player == LOWER_CASE_X || player == LOWER_CASE_O)
    {
        TO_UPPER(player);
    }

    switch (player)
    {
    case 'X': ai = 'O';
        break;
    case 'O': ai = 'X';
        break;
    }
    printf("AI Picks: %c\n", ai);
    while (!isOver)
    {
        printf("Please enter the spot where you'd like to place the character\nChoose an index between 1 and 9.\n");
        player = take_input();
        for (size_t colIdx = 0; colIdx < colSize; ++colIdx)
        {
            for (size_t rowIdx = 0; rowIdx < rowSize; ++rowIdx)
            {

            }
        }
    }
}

