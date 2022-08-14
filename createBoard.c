# include "header.h"

/*
    This function is used to create the board. The board is created using a Stack and is implemented using a DOubly Linked List. 
    The parameters of the function consist of the head and tail of the list and the array's for the postions of where the snakes and
    ladders are.
*/

void createBoard(game ** head, game ** tail, int snake[5], int ladder[5])    {
    int i;                      // Counter variable
    int minus = -1;             // Used to create negative integers.
    game * curNode;             // Used to traverse the list.
    int loss[5];                // Used to get unique values for loss when the player runs into a snake.
    int gain[5];                // Used to get unique values for gain when the player runs into a ladder.

    // Create the basic Board.

    for (i = 0; i <= 100; i++)  {

        // Create space on the HEAP for one node of the board.

        game * newNode = malloc(sizeof(game));

        // Fill the node with intial data and make the pointers point to the appropriate spaces.

        newNode->next = NULL;
        newNode->prev = NULL;    
        newNode->pos = i;
        newNode->potential = 0;
           
        
        // Add to the stack.

        /* 
            Case 1: The stack is empty (because head pointes to NULL) therefore both the head and the tail nodes will be made to point to 
            the newNode.
        */

        if (*head == NULL)   {   
            *head = newNode;
            *tail = newNode;
        }

        /* 
            Case 2: The stack is not empty as the head pointer does not point to NULL this means that we prepend to the start of the stack by 
            modifying the the newNode nodes next pointer to the previous head pointer and point the previous head prev pointer to the newNode,
            and make the head pointer point to the newNode.
        */

        else{
            newNode->next = *head;
            (*head)->prev = newNode;
            *head = newNode;
        }
    }

    // Make curNode point to head for traversal.

    curNode = *head;

    // Create unique loss values for all the different spaces.

    for (i = 0; i < 5; i++) {

        // If the snake is in the range of 99 - 90 make it so that it has the highest loss so the player falls further than the rest of the snakes due to it being closer to the end.

        if (snake[i] >= 90) {
            loss[i] = minus * ((rand() % 20) + 60);
        }
        
        // For the following branches as it is further from the end with each subsequent branch we make the loss smaller and smaller depedning on the range.

        else if (snake[i] >= 80) {
            loss[i] = minus * ((rand() % 20) + 40);
        }
        
        else if (snake[i] >= 70) {
            loss[i] = minus * ((rand() % 20) + 20);
        }
        
        else if (snake[i] >= 60) {
            loss[i] = minus * ((rand() % 20) + 10);
        }
        
        else    {
            loss[i] = minus * (rand() % 20);
        }
    }

    // Place the potential loss in the correct positions on the board.

    while (curNode != NULL) {
        for (i = 0; i < 5; i++) {
            if (curNode->pos == snake[i])   {
                curNode->potential = loss[i];
            }
        }
        curNode = curNode->next;
    }

    // Set the curNode pointer back to head to repeat the process for the potential gain for the ladders.

    curNode = *head;

    for (i = 0; i < 5; i++) {
        
        // If the snake is in the range of 30 - 49 make it so that it has the lowest gain, so the player climbs the least from the ladders in this range as it is closer to the end.

        if (ladder[i] <= 40) {
            gain[i] = ((rand() % 20));
        }
        
        // The

        else if (ladder[i] <= 30) {
            gain[i] = ((rand() % 20) + 10);
        }
        
        else if (ladder[i] <= 20) {
            gain[i] = ((rand() % 20) + 20);
        }
        
        else if (ladder[i] <= 10) {
            gain[i] = ((rand() % 20) + 30);
        }
        
        else    {
            gain[i] = ((rand() % 20) + 40);
        }
    }

    // Place the potential gain in the correct positions on the board.

    while (curNode != NULL) {
        for (i = 0; i < 5; i++) {
            if (curNode->pos == ladder[i])   {
                curNode->potential = gain[i];
            }
        }
        curNode = curNode->next;
    }
}