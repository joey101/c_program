// Author: Jawad Tanana (z5320158) 
// Date: 25/06/2020
// UNSW Freefall assignment.

// NOTE ANY CODE COMMENTED OUT WITHIN A FUNCTION OR CALLING FUNCTION COULD NOT 
// BE COMPLETED HENCE FOR MARKING AND AUTOTESTING REASONS LEFT OUT. FEEL FREE 
// TO UNCOMMENT AND SEE FUNCTIONALITY IF I WAS CLOSE OR NOT.

// SECOND REASON FOR COMMENTED CODE WAS SIMPLY PLAYFUL CODE TO MAKE IT MORE GAME
// TYPE FOR EXAMPLE "USE ONLY THESE KEYS" ETC.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//------------------------------------------------------------------------------
#define SIZE 15
#define EMPTY 0
#define STONE 1
#define PLAYER 1
#define FIRE 2
#define SHIFT 3
#define FLIP 4
#define GRAVITY 5
#define LEFT 1
#define TOPLEFT 2
#define TOPRIGHT 3
#define RIGHT 4
// More defines any numbers find its use and try putting movement of player.

// Void functions:
void printMap(int map[SIZE][SIZE], int playerX);
void scanMap(int map[SIZE][SIZE]);
void firingLaser(int map[SIZE][SIZE], int playerX/*, int tntBlocks*/);
void shiftingDown(int map[SIZE][SIZE], int playerX);
void verticalFlip(int map[SIZE][SIZE]);
void tntBlocks(int map[SIZE][SIZE],int playerX);
void marchingBlocks(void);
void gravityStorm(void);
void blocksAboveTheMap(void);

// Return functions:
int movePlayer(int playerX);
int winFunction(int map[SIZE][SIZE]);
int lossFunction(int map[SIZE][SIZE]);

// MAIN FUNCTION----------------------------------------------------------------
int main (void) {
    // This line creates our 2D array called "map" and sets all of the blocks in 
    // the map to EMPTY.
    int map[SIZE][SIZE] = {EMPTY};
    
    // This line creates out playerX variable. The player starts in the middle 
    // of the map, at position 7.
    int playerX = SIZE / 2;      
     
    // Prints the stone on the map in their row and column.
    scanMap(map);   
    printMap(map, playerX);
    
    // Note:Consider passing a scanf that activates different functions and con-
    // tinues from there.
    int winCondition = 0;
    int lossCondition = 0;
    int starter;
    int checker = 0; // For flip function.
      
    while (scanf("%d", &starter) == 1 
          && (lossCondition == 0 
          || winCondition == 0)) {
        // Will keep playing the game until EOF.
        // printf("1 -1 to go left, 1 1 to go right.\n");
                
        if (starter == PLAYER) {
            playerX = movePlayer(playerX);
            // Reassign the position to playerX and reprint.
            
            printMap(map, playerX);
            // Prints the map after every change.
        }
        else if (starter == FIRE) {
            firingLaser(map, playerX /*, tntBlocks */);
            // Fires the laser when 2 is pressed.
            
            printMap(map, playerX);
            // Prints the map after every change.
            winCondition = winFunction(map);
        }
        else if (starter == SHIFT) {
            shiftingDown(map, playerX);
            // Once 3 is clicked will activate shifting down code.
            
            printMap(map, playerX);
            // Prints the map after every change.
            lossCondition = lossFunction(map);
        }
        else if (starter == FLIP) {
            // Flip the map vertically--->include counter to use this once
            if (checker < 1) {
                verticalFlip(map);
                checker++;
                printMap(map, playerX);
                // Prints the map after every change.
            }
            else {
                printMap(map, playerX);
                printf("Can't use this anymore\n"); 
            }
        }
        /*else if (starter == GRAVITY) {
            // Gravity Storm--->include counter to use this once
            if (gravitychecker < 1) {
                gravityStorm(map);
                gravitychecker++;
                printMap(map, playerX);
                // Prints the map after every change.
            }
            else {
                printMap(map, playerX);
                printf("Can't use this anymore\n"); 
            }
        }*/
        else {
            printMap(map, playerX);
            // Prints the map if there is an invalid input and no changes.
        }
        
        
        
    }

    return 0;
}

//-----------------------------------------------------------------------------
void printMap(int map[SIZE][SIZE], int playerX) {
    // Print out the contents of the map array. Then print out the player line
    // which will depends on the playerX variable.
    
    // Print values from the map array.
    int i = 0;
    while (i < SIZE) {
        int j = 0;
        while (j < SIZE) {
            printf("%d ", map[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }    
    
    // Print the player line.
    i = 0;
    while (i < playerX) {
        printf("  ");
        i++;
    }
    printf("P\n");
}
// STAGE 1 FUNCTIONS------------------------------------------------------------
void scanMap(int map[SIZE][SIZE]) { 
    // Find the location and the amount of blocks to be printed to the grid.
    int row;
    int column;
    int length;
    int value;
    int lines_of_stone;
    
    printf("How many lines of stone? ");
    scanf("%d", &lines_of_stone);

    printf("Enter lines of stone:\n");
    int i;
    for (i = 0; i < lines_of_stone; i++) { 
        // Scan and print the lines of stone according to their specs.   
        
        scanf("%d %d %d %d", &row, &column, &length, &value);
        int col = column;
        column = column + length;
        while (col < column && column <= SIZE) {
            if (//map[row][col] == 0 &&
                col < SIZE 
                && col >= 0
                && row < SIZE 
                && row >= 0) {
                // These conditions keep the values within the boundaries of the
                // game.
                 
                map[row][col] = map[row][col] + value;
                
            }
            col++;
        }
    }
}
//------------------------------------------------------------------------------
int movePlayer(int playerX) {
    // Moving the player left and right at the bottom of the screen.  
     
    int movement = playerX;
    scanf("%d", &movement);
     
    // While loop that doesnt allow the player to go off the screen, or it will 
    // print unchanged map.
    if (movement == -1 && playerX > 0 ) {
        // Moves player to the left.
        playerX--;
        return playerX;
    }
    else if (movement == 1 && playerX < SIZE) {
        // Moves player to the right.
        playerX++;
        return playerX;
    }
    /*else {
        // Tells player to use the right keys.
        printf("Please only use 1 -1 to go left and, 1 1 to go right\n");
        return 0;
    }*/
           
    return playerX;
}
//------------------------------------------------------------------------------
void firingLaser(int map[SIZE][SIZE], int playerX /*, int tntBlocks */) {  
    int numDestroyed = 0;
    // Initiate a counter.
    
    for (int i = SIZE-1; i >= 0 && numDestroyed < 3; i--) {
        // Loop through the rows, keeping the columns constant.
    
        if (map[i][playerX] != EMPTY && map[i][playerX] < 3 ) {
     
            map[i][playerX] = EMPTY;
            numDestroyed++;
        }
        /* Commented out was for TNT FUNCTION
        else if (map[i][playerX] != EMPTY 
                 && map[i][playerX] > 3 
                 && map[i][playerX] < 9) {
            // Test tnt and call tnt in this function.
            tntBlocks(map, playerX);
        }*/
        
    }
} 
    
// STAGE 2 FUNCTIONS------------------------------------------------------------
void shiftingDown(int map[SIZE][SIZE], int playerX) {
   
        
    for (int i = SIZE - 2; i >= 0; i--) {
        // While loop to filter through the rows.
        
        for (int j = 0; j < SIZE; j++) {
            // While loop to filter through the columns.  
            map[i + 1][j] = map[i][j];
            // After shifting down one row it needs to return to its 
            // original map location.
        }           
    }
      
    for (int x = 0; x < SIZE; x++) { 
        // Set a for loop to empty line 0.     
        map[0][x] = EMPTY;
    }   
} 
// STAGE 3 FUNCTIONS------------------------------------------------------------
void verticalFlip(int map[SIZE][SIZE]) {
    
    int flipper;
    int temp[SIZE][SIZE];
    for (flipper = 0; flipper < SIZE; flipper++) {
        // This set of for loops filters throught the old map and assigns to a 
        // temporary map then flips the temporary.
        for (int j = 0; j < SIZE; j++) {  
            
            temp[SIZE - flipper - 1][j] = map[flipper][j];
        }
    }

    for (int i = 0; i < SIZE; i++) {
        // This set of for loops assign the flipped version to the new map.
	    for (int j = 0; j < SIZE; j++) {
	        
		    map[i][j] = temp[i][j];
	    }
    }
}
//------------------------------------------------------------------------------
int winFunction(int map[SIZE][SIZE]) {
    // Checks for any win conditions. SUCCESSFUL but could not EOF.
    int win = 0;
    // Checks for any zero value in the grid.
    
    for (int row = SIZE - 2; row > 0; row--) {
        // This for loop checks the grid for any 0 values everytime values
        // are taken off the screen.
        for (int column = 0; column < SIZE; column++) {          
            if (map[row][column] > 0) {
                win++;       
            }
            
        }
    }
    for (int columnCounter = 0; columnCounter < SIZE; columnCounter++) {
        // This for loop checks first lineof the grid for any 0 values 
        // are taken off the screen everytime values.
        if (map[0][columnCounter] > 0) {
            win++;       
        }
    }
    if (win == EMPTY) {
        // If theres no value on the grid will print this line.
        
        printf("Game Won!\n");
    }
    return win;
}
//------------------------------------------------------------------------------
int lossFunction(int map[SIZE][SIZE]) { 
    // Checks for any loss conditions. SUCCESSFUL but could not EOF
    int loss = 0;
    // Checks for any zero value in the grid.
    
    for (int c = 0; c < SIZE && loss == 0; c++) {
        // Tests if the grid has any 1 inside the last row.
        if (map[SIZE - 1][c] > 0) {
            loss++;
        }
        
    }
    
    if (loss == 1) {
        // If theres is a value on the last line of the grid. It will print this
        // line. 
        
        printf("Game Lost!\n");
    }
    return loss;
}

//------------------------------------------------------------------------------
/*--------------->commented out code because could not get it done on time.
void tntBlocks(int map[SIZE][SIZE],int playerX) { 
    
    int temp[SIZE][SIZE];
    int tntX;
    int tntY;
    for (int rowX1 = SIZE - 1; rowX1 < SIZE; rowX1--) {          
        if (map[rowX1][playerX] > 3 && map[rowX1][playerX] <= 9) {
            tntX = rowX1;
            tntY = playerX;
               
        }       
    }
    
    // Use values x and y values are the column and row indexs' 
    // Loop through whole thing if its > 0 make it empty 
    for (int rowX2 = SIZE - 1; rowX2 > 0; rowX2--) {
        // Loop through find the tnt location.
        for (int columnY2 = 0; columnY2 < SIZE; columnY2++) {          
            if (map[rowX2][columnY2] < sqrt(pow((rowX2 - tntX), 2) + 
                pow((columnY2 - tntY), 2))) {
                
                map[rowX2][columnY2] = EMPTY;
                           
            }
            
        }
    }
    // check the formula to see if its within the distance 
    // set EMPTY
   
}
// STAGE 4 FUNCTIONS------------------------------------------------------------
void gravityStorm() {
    int gravity = playerX;
    scanf("%d", &gravity);
    
    
    if (gravity == LEFT) {
    
    }
    else if (gravity == TOPLEFT) {
    
    }
    else if (gravity == TOPRIGHT) {
    
    }
    else if (gravity == RIGHT) {
    
    }
    
}
//------------------------------------------------------------------------------
void marchingBlock() {

}*/
