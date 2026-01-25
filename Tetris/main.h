#ifndef MAIN_H  // Include guard (prevents double inclusion)
#define MAIN_H
#include <iostream>  
void intializeblocks(int square[][2],int tower[][1],int tblock[][3],int zblock[][3],int reversezblock[][3],int lblock[][3],int reverselblock[][3]);
int simulationsquare(int random, int square[][2], int grid[][10]);
int simulationtower(int random, int tower[][1], int grid[][10]);
int simulationtblock(int random, int tblock[][3],int grid[][10]);
int simulationzblock(int random, int zblock[][3],int grid[][10]);
int simulationreversezblock(int random, int reversezblock[][3],int grid[][10]);
int simulationlblock(int random, int lblock[][3],int grid[][10]);
int simulationreverselblock(int random, int reverselblock[][3],int grid[][10]);
#endif