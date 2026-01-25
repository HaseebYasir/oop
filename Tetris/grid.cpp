#include<iostream>
#include"blocks.h"
//#include"block.cpp"
#include"main.h"
//#include<main.cpp>
using namespace std;
int simulationsquare(int random,int square[][2],int grid[][10]){
    int k = 0;
    for(int i = 0; i < 20; i++){
        int l = 0;
        for (int j = 0;j < 10; j++ ){
            if((i==0&&j==4)||(i==0&&j==5)||(i==1&&j==4)||(i==1&&j==5)){
                grid[i][j]+=square[k][l];
                l++;
            }
        k++;
        }
    }
    return 1;
}
int simulationtower(int random,int tower[][1],int grid[][10]){
    int k = 0;
    for(int i = 0; i < 20; i++){
        int l = 0;
        for (int j = 0;j < 10; j++ ){
            if(((i==0||i==1||i==2||i==3)&&j==4)){
                grid[i][j]+=tower[k][l];
                l++;
            }
        k++;
        }
    }    
    return 1;
}
int simulationtblock(int random,int tblock[][3],int grid[][10]){
    int k = 0;
    for(int i = 0; i < 20; i++){
        int l = 0;
        for (int j = 0;j < 10; j++ ){
            if((i==0||i==1)&&(j==3||j==4||j==5)){
                grid[i][j]+=tblock[k][l];
                l++;
            }
        k++;
        }
    }      
    return 1;
}
int simulationzblock(int random,int zblock[][3],int grid[][10]){
    int k = 0;
    for(int i = 0; i < 20; i++){
        int l = 0;
        for (int j = 0;j < 10; j++ ){
            if((i==0||i==1)&&(j==3||j==4||j==5)){
                grid[i][j]+=zblock[k][l];
                l++;
            }
        k++;
        }
    }   
    return 1;    
}
int simulationreversezblock(int random,int reversezblock[][3],int grid[][10]){
    int k = 0;
    for(int i = 0; i < 20; i++){
        int l = 0;
        for (int j = 0;j < 10; j++ ){
            if((i==0||i==1)&&(j==3||j==4||j==5)){
                grid[i][j]+=reversezblock[k][l];
                l++;
            }
        k++;
        }
    }     
    return 1;
}
int simulationlblock(int random,int lblock[][3],int grid[][10]){
    int k = 0;
    for(int i = 0; i < 20; i++){
        int l = 0;
        for (int j = 0;j < 10; j++ ){
            if((i==0||i==1)&&(j==3||j==4||j==5)){
                grid[i][j]+=lblock[k][l];
                l++;
            }
        k++;
        }
    }     
    return 1;
}
int simulationreverselblock(int random,int reverselblock[][3],int grid[][10]){
    int k = 0;
    for(int i = 0; i < 20; i++){
        int l = 0;
        for (int j = 0;j < 10; j++ ){
            if((i==0||i==1)&&(j==3||j==4||j==5)){
                grid[i][j]+=reverselblock[k][l];
                l++;
            }
        k++;
        }
    }  


    return 1;
}