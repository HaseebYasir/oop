#include <ctime>
#include <iostream>
#include "main.h"
#include "grid.h"
#include "blocks.h"
#include <cstdlib>
using namespace std;                              //For random block generation
int main (){ // 
    srand(time(NULL));
    int random = rand()%7 +1 ;                  //Make range between 1 to 7
    int square[2][2];
    int tower[4][1];
    int tblock[2][3];
    int zblock[2][3];
    int reversezblock[2][3];
    int lblock[2][3];
    int reverselblock[2][3];
    int grid[20][10] = {0};  // Tetris grid
    switch (random){
        case 1:
            simulationsquare(random, square, grid);
            break;
        case 2:
            simulationtower(random, tower,grid);
            break;
        case 3:
            simulationtblock(random, tblock,grid);
            break;
        case 4:
            simulationzblock(random, zblock,grid);
            break;
        case 5:
            simulationreversezblock(random, reversezblock,grid);
            break;
        case 6:
            simulationlblock(random, lblock,grid);
            break;
        case 7:
            simulationreverselblock(random, reverselblock,grid);
            break;
    }
}