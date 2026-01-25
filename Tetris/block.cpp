#include<iostream>
using namespace std;
int intializeblocks(int square[][2],int tower[][1],int tblock[][3],int zblock[][3],int reversezblock[][3],int lblock[][3],int reverselblock[][3]){
    for(int i=0;i<2;i++){
        for (int j = 0;j < 3; j++){
            if ((i == 0 && j == 0) || (i == 0 && j == 2)){   //initialization for now no rotation
                tblock[i][j]=-1;
            }
            else
                tblock[i][j]=1;
            if(( i == 0 && j == 0) || (i == 1 && j == 1)){
                zblock[i][j] = -1;
            }
            else
                zblock[i][j] = 1;
            if(( i == 0 && j == 1) || (i == 1 && j == 0)){
                reversezblock[i][j] = -1;
            }
            else
                reversezblock[i][j] = 1;
            if(( i == 0 && j == 1) || (i == 0 && j == 2)){
                lblock[i][j] = -1;
            }
            else
                lblock[i][j] = 1;
            if(( i == 0 && j == 0) || (i == 0 && j == 1)){  
                reverselblock[i][j] = -1;
            }
            else
                reverselblock[i][j] = 1;
        }
    }

} 
int main (){                                                 // we will make block here. 
    int square[2][2]={1};                                    //store 1 at all blocksto represent they are fill
    int tower[4][1]={1};                                     // for now make it verticall
    int tblock[2][3]={0};
    int zblock[2][3]={0};
    int reversezblock[2][3]={0};
    int lblock[2][3]={0}; 
    int reverselblock[2][3]={0};
    intializeblocks(square,tower,tblock,zblock,reversezblock,lblock,reverselblock);
}