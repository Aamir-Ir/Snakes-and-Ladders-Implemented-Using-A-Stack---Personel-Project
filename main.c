#include "header.h"

int main(int argc, char * argv[])   {
    int playerCount;                            // Keeps track of the player count.
    int playerArr[4] = {0, 0, 0, 0};            // Keeps track of the player score through the game.
    int input;                                  // Keeps track of user input through the game.
    int die;                                    // Keeps track of the number rolled by the die.
    int pot;                                    // Keeps track of the potential of the tile (If it has a snake, ladder, or nothing).
    int snake[5];                               // A list to store all the postions where the snakes are.
    int ladder[5];                              // A list to store all the positions where the ladders are.
    int i, j, m, x;                             // All counter variables.
    
    game * board = NULL;                        // Will be used as head pointer for the stack that is implemented as a doubly linked list.
    game * tail = NULL;                         // Will be used as tail pointer for the stack that is implemented as a doubly linked list.

    // Greeting and get the player count.

    printf("Welcome to snakes and ladders.\n");
    printf("Firstly how many players are there (2-4): ");
    scanf("%d", &playerCount);

    // Make sure player count is in range.

    while (!((playerCount >= 2) && (playerCount <= 4)))    {
        printf("Invalid input.\nHow many players are there (2-4): ");
        scanf("%d", &playerCount);
    }

    // Rules + controls.

    printf("Welocme to snakes and ladders. The rules are listed below.\n\n");
    printf("Rules.\n");
    printf("1) Every player must roll the die once per round.\n");
    printf("2) If a player lands on a ladder when the POTENTIAL (P) is a number greater than 0 on the board must climb the ladder.\n");
    printf("3) If a player lands on a snake when the POTENTIAL (P) is a number less than 0 on the board must fall down.\n");
    printf("4) Finally all players must climb.\n");
    printf("\nHere is a list of all the snakes and ladders for this session.\n");

    //creates a seed based on current time

    srand(time(0));
    
    /*
       Creation of 5 random snakes on the board. Random number within the range of 50 and 99.
    */

    for (i = 0; i < 5; i++) {
        snake[i] = (rand() % 50) + 50;
    }

    // Code to make sure they are never the same

    m = 1;

    for (i = 0; i < 5; i++) {
        for (x = 0; x < 5; x++) {
            for (j = m; j < 5; j++) {
                if (snake[i] == snake[j])   {
                    snake[j] += 1;
                }
                m++;
            }
        }
    }

    // Print the snakes location. It will also be on the board.

    printf("New Snakes: ");

    for (i = 0; i < 5; i++) {
        if (i == 4) {
            printf("%d.", snake[i]);
        }
        else    {
            printf("%d, ", snake[i]);
        }
    }

    /*
       Creation of 5 random snakes on the board. Random number within the range of 1 and 50.
    */

    for (i = 0; i < 5; i++) {
        ladder[i] = (rand() % 50) + 1;
    }
                        
    // Code to make sure they are never the same

    m = 1;

    for (i = 0; i < 5; i++) {
        for (x = 0; x < 5; x++) {   
            for (j = m; j < 5; j++) {
                if (ladder[i] == ladder[j])   {
                    ladder[j] += 1;
                }
            m++;
            }
        }
    }

    // Print the ladders location. It will also be on the board.

    printf("\nNew Ladders: ");
                        
    for (i = 0; i < 5; i++) {
        if (i == 4) {
            printf("%d.", ladder[i]);
        }  
        else    {
            printf("%d, ", ladder[i]);
        }
    }
    printf("\n\n");

    // Create the board.

    createBoard(&board, &tail, snake, ladder);
    
    // Last reminders and start.

    printf("Climb to 100 to WIN!!!\n\n");
    printf("Controls.\n");
    printf("Type 0 to quit at anytime whenever asked for input.\n");
    printf("Type any other integer to roll the die.\nStart the game now by typing any integer: ");
    scanf("%d", &input);

    while (input != 0)  {

        // Simulate one round of the game with all players.

        for (i = 0; i < playerCount; i++)   {

            // Ask the current player to roll the die.

            printf("Roll the die player %d: ", (i + 1));
            scanf("%d", &input);

            // Using the random library roll the die. Let the user know what they rolled and add the die and the potential of the tile to their current location on the board.

            die = (rand() % 6) + 1;
            printf("You rolled a %d player %d.\n", die, (i + 1)); 
            pot = retPotentail(tail, die, playerArr[i]);
            playerArr[i] += die;
            playerArr[i] += pot;

            // If the potential is not 0 report if the player stepped on a tile with a snake or a ladder.

            printf("\n");
            if (pot > 0)    {
                printf("WOW player %d, you have found a LADDER and will now climb up %d spaces.\n", (i + 1), pot);
            }
            else if (pot < 0)   {
                printf("Watch out next time player %d, you found a SNAKE and will now fall down %d spaces.\n", (i + 1), (-1 * pot));
            }
        }

        // Reprt the players postion after a round.

        printf("\nPlayer Positions.\n");
        for (i = 0; i < playerCount; i++)   {
            printf("Player %d: %d.  ", (i + 1), playerArr[i]);
        }
        printf("\n");

        // Print the baord.

        printBoard(board);

        // Check if anyone won.

        for (i = 0; i < playerCount; i++)   {

            // Win condition: state the winner and exit.

            if (playerArr[i] >= 100)    {
                printf("\nPlayer %d Has WON!!!\n\n",  (i + 1));
                break;
            }
        }
    }

    // Thank the user for playing and end the program.

    printf("\n\nThanks for playing!!!\n\n");

    return 1;
}