#include<iostream>
using namespace std;
int main (){ // 
    int rows=20;
    int cols=10;
    int** array=new int*[rows]; //Make array to store grid 
    for(int i=0;i<rows;i++){
        array[i]=new int [cols];
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){//Initialize them to avoid garbage value 
            array[i][j]=0;
        }
    }
    for (int i = 0; i <rows; i++){//delete them for safety
        delete [] array[i];
    }
    delete[] array;
    array=nullptr;
return 0;
}