# include "header.h"

/*
    This function is used to return the potential stored in a tile so that it can be added to the players current position. If the 
    potential is postive they have lannded on a ladder and will be told so, if the potential is negative they have landed on a snake
    and will be told so. 
*/

int retPotentail(game * tail, int die, int playerPos)   {
    /*
        If the list is empty state that it is and promt the user to add nodes to display a list.
    */

    // Using the current postion add the dies 

    playerPos += die;

    if (tail == NULL)   {
        printf("The board is currently empty.\n");
        return -1;
    }

    game * curNode = tail;                // Create a current pointer make it point to the head pointer.

    // While the current pointer does not hit the end of the list print the data in the node and then traverse the list.

    // Go to the position the player landed on to check if there is a snake or a ladder there.

    for (int i = 1; i <= playerPos; i++)   {
        curNode = curNode->prev;
    }

    // return the potenital.

    return curNode->potential;
}