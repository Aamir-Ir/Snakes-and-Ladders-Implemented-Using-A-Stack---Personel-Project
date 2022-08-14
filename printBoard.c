# include "header.h"

/*
    This function is used to print the board. Since it is given the head pointer it will print it from the head.
*/

void printBoard(game * head) {

    /*
        If the list is empty state that it is and promt the user to add nodes to display a list.
    */

    if (head == NULL)   {
        printf("The board is currently empty.\n");
        return;
    }

    game * curNode = head;                // Create a current pointer make it point to the head pointer.

    // While the current pointer does not hit the end of the list print the data in the node and then traverse the list.

    printf("______________________________________________________________________________________________________________________________________\n");

    while (curNode != NULL)    {

        // The if and nested if branches are all used for formatting the display of the board.

        if (curNode->pos == 90) {
            if ((curNode->potential == 0))    {
                printf("| %d P:   %d |\n             ", curNode->pos, curNode->potential);    
            }
            else if (curNode->potential < -9)  {
                printf("| %d P: %d |\n             ", curNode->pos, curNode->potential);
            }
            else if (curNode->potential < 0)  {
                printf("| %d P:  %d |\n             ", curNode->pos, curNode->potential);
            }
            else if (curNode->potential < -9)  {
                printf("| %d P: %d |\n             ", curNode->pos, curNode->potential);
            }
            else    {
                printf("| %d P:  %d |\n             ", curNode->pos, curNode->potential);
            }    
        }
        else if (curNode->pos == 80) {
            if ((curNode->potential == 0))    {
                printf("| %d P:   %d |\n             ", curNode->pos, curNode->potential);    
            }
            else if (curNode->potential < -9)  {
                printf("| %d P: %d |\n             ", curNode->pos, curNode->potential);
            }
            else if (curNode->potential < 0)  {
                printf("| %d P:  %d |\n             ", curNode->pos, curNode->potential);
            }
            else if (curNode->potential < -9)  {
                printf("| %d P: %d |\n             ", curNode->pos, curNode->potential);
            }
            else    {
                printf("| %d P:  %d |\n             ", curNode->pos, curNode->potential);
            }    
        }
        else if (curNode->pos == 70) {
            if ((curNode->potential == 0))    {
                printf("| %d P:   %d |\n             ", curNode->pos, curNode->potential);    
            }
            else if (curNode->potential < -9)  {
                printf("| %d P: %d |\n             ", curNode->pos, curNode->potential);
            }
            else if (curNode->potential < 0)  {
                printf("| %d P:  %d |\n             ", curNode->pos, curNode->potential);
            }
            else if (curNode->potential < -9)  {
                printf("| %d P: %d |\n             ", curNode->pos, curNode->potential);
            }
            else    {
                printf("| %d P:  %d |\n             ", curNode->pos, curNode->potential);
            }      
        }
        else if (curNode->pos == 60) {
            if ((curNode->potential == 0))    {
                printf("| %d P:   %d |\n             ", curNode->pos, curNode->potential);    
            }
            else if (curNode->potential < -9)  {
                printf("| %d P: %d |\n             ", curNode->pos, curNode->potential);
            }
            else if (curNode->potential < 0)  {
                printf("| %d P:  %d |\n             ", curNode->pos, curNode->potential);
            }
            else if (curNode->potential < -9)  {
                printf("| %d P: %d |\n             ", curNode->pos, curNode->potential);
            }
            else    {
                printf("| %d P:  %d |\n             ", curNode->pos, curNode->potential);
            }    
        }
        else if (curNode->pos == 50) {
            if ((curNode->potential == 0))    {
                printf("| %d P:   %d |\n             ", curNode->pos, curNode->potential);    
            }
            else if (curNode->potential < -9)  {
                printf("| %d P: %d |\n             ", curNode->pos, curNode->potential);
            }
            else if (curNode->potential < 0)  {
                printf("| %d P:  %d |\n             ", curNode->pos, curNode->potential);
            }
            else if (curNode->potential < 10)  {
                printf("| %d P: %d |\n             ", curNode->pos, curNode->potential);
            }
            else    {
                printf("| %d P:  %d |\n             ", curNode->pos, curNode->potential);
            }    
        }
        else if (curNode->pos == 40) {
            if ((curNode->potential == 0))    {
                printf("| %d P:   %d |\n             ", curNode->pos, curNode->potential);    
            }
            else if (curNode->potential < -9)  {
                printf("| %d P: %d |\n             ", curNode->pos, curNode->potential);
            }
            else if (curNode->potential < 0)  {
                printf("| %d P:  %d |\n             ", curNode->pos, curNode->potential);
            }
            else if (curNode->potential < 10)  {
                printf("| %d P:   %d |\n             ", curNode->pos, curNode->potential);
            }
            else    {
                printf("| %d P:  %d |\n             ", curNode->pos, curNode->potential);
            }    
        }
        else if (curNode->pos == 30) {
            if ((curNode->potential == 0))    {
                printf("| %d P:   %d |\n             ", curNode->pos, curNode->potential);    
            }
            else if (curNode->potential < -9)  {
                printf("| %d P: %d |\n             ", curNode->pos, curNode->potential);
            }
            else if (curNode->potential < 0)  {
                printf("| %d P:  %d |\n             ", curNode->pos, curNode->potential);
            }
            else if (curNode->potential < 10)  {
                printf("| %d P:   %d |\n             ", curNode->pos, curNode->potential);
            }
            else    {
                printf("| %d P:  %d |\n             ", curNode->pos, curNode->potential);
            }    
        }
        else if (curNode->pos == 20) {
            if ((curNode->potential == 0))    {
                printf("| %d P:   %d |\n             ", curNode->pos, curNode->potential);    
            }
            else if (curNode->potential < -9)  {
                printf("| %d P: %d |\n             ", curNode->pos, curNode->potential);
            }
            else if (curNode->potential < 0)  {
                printf("| %d P:  %d |\n             ", curNode->pos, curNode->potential);
            }
            else if (curNode->potential < 10)  {
                printf("| %d P:   %d |\n             ", curNode->pos, curNode->potential);
            }
            else    {
                printf("| %d P:  %d |\n             ", curNode->pos, curNode->potential);
            }    
        }
        else if (curNode->pos == 10) {
            if ((curNode->potential == 0))    {
                printf("| %d P:   %d |\n             ", curNode->pos, curNode->potential);    
            }
            else if (curNode->potential < -9)  {
                printf("| %d P: %d |\n             ", curNode->pos, curNode->potential);
            }
            else if (curNode->potential < 0)  {
                printf("| %d P:  %d |\n             ", curNode->pos, curNode->potential);
            }
            else if (curNode->potential < 10)  {
                printf("| %d P:   %d |\n             ", curNode->pos, curNode->potential);
            }
            else    {
                printf("| %d P:  %d |\n             ", curNode->pos, curNode->potential);
            }   
        }
        else if (curNode->pos < 10) {
            if ((curNode->potential == 0))    {
                printf("|  %d P:   %d ", curNode->pos, curNode->potential);    
            }
            else if (curNode->potential < 10)  {
                printf("|  %d P:   %d ", curNode->pos, curNode->potential);
            }
            else    {
                printf("|  %d P:  %d ", curNode->pos, curNode->potential);
            }
        }
        else    {
            if ((curNode->potential == 0))    {
                printf("| %d P:   %d ", curNode->pos, curNode->potential);    
            }
            else if (curNode->potential > 9)  {
                printf("| %d P:  %d ", curNode->pos, curNode->potential);
            }
            else if (curNode->potential > 0)  {
                printf("| %d P:   %d ", curNode->pos, curNode->potential);
            }
            else if (curNode->potential > -10)  {
                printf("| %d P:  %d ", curNode->pos, curNode->potential);
            }
            else    {
                printf("| %d P: %d ", curNode->pos, curNode->potential);
            }
        }
        curNode = curNode->next;                                            // Traverse the list.
    }
    printf("|\n_____________________________________________________________________________________________________________________________________\n");
}