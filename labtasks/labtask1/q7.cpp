#include<iostream>
using namespace std; 
//In this task we will bubble sort an array of integers in ascending order.
int displayArray(int array[]){
    cout<<"sorted array ";
    for(int i=0;i<8;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
    return 0;
}
int bubblesort(int array[]){
    int temp;
    for(int i=0;i<8;i++){
        for(int j=i;j<8;j++){
            if(array[i]>array[j]){
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
    displayArray(array);
    return 0;
    }

int main(){
    cout<<"enter 8 elements of array ";
    int array[8];
    for(int i=0;i<8;i++){
        cin>>array[i];
    }
    cout<<"original array ";
    for(int i=0;i<8;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
    bubblesort(array);
    return 0;
}
