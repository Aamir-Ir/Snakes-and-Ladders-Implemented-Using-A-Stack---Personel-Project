# include "header.h"

/*
    This function is used to print the board in reverse as the Stack was implemented as a Doubly Linked List. Used to debug the code
    not acctually used in the game. But the code is still there.
*/

void printBoardRev(game * tail) {

    /*
        If the list is empty state that it is and promt the user to add nodes to display a list.
    */

    if (tail == NULL)   {
        printf("The board is currently empty.\n");
        return;
    }

    game * curNode = tail;                // Create a current pointer make it point to the head pointer.

    // While the current pointer does not hit the end of the list print the data in the node and then traverse the list.

    printf("Climb to 100 to WIN!!!\n");
    printf("______________________________________________________________________________________________________________________________________\n");

    while (curNode != NULL)    {

        // All the if and nested if branches are used to format the board when printing.

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
        curNode = curNode->prev;                                            // Traverse the list.
    }
    printf("|\n_____________________________________________________________________________________________________________________________________\n");

}