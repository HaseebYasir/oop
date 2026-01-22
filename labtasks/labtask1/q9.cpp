/*Create a comprehensive program with the following functions:
● linearSearch(): Searches for an element and returns its index (-1 if not found)
● countOccurrences(): Counts how many times an element appears in array
● findSecondLargest(): Returns the second largest element in array
● calculateMean(): Returns the average of array elements
In main, create an array of 12 elements and provide a menu to test all functions.
Sample Input:
Enter 12 numbers: 45 23 67 45 89 12 45 34 67 23 90 12
Menu:

1. Search element
2. Count occurrences
3. Find second largest
4. Calculate mean
Enter choice: 2
Enter element to count: 45
Sample Output:
45 appears 3 times in the array*/
#include<iostream>
using namespace std;
int linearSearch(int search,int array[]){
    for(int i=0;i<12;i++){
        if(search==array[i])
            return i;
    }
    return -1;
}
int countOccurrences(int occur,int array[]){
    int counter=0;
    for(int i=0;i<12;i++){
        if(occur==array[i])
            counter++;
    }
    return counter;
}
int findSecondLargest(int array[]){//do bubble sort and print second index
    int temp;
    for(int i=0;i<12;i++){
        for(int j=i;j<12;j++){
            if(array[i]>array[j]){
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }  
    return array[10];
}
double calculateMean(int array[]){
    int sum=0;
    for(int i=0;i<12;i++){
        sum+=array[i];
    }
    return sum/12;
}
int main(){
    int choice;
    int array[12];
    cout<<"Enter 12 numbers ";
    for(int i=0;i<12;i++){
        cin>>array[i];
    }
    cout<<"Menu: \n 1.Search element \n 2.Count occurrences \n 3. Find second largest \n 4. Calculate mean"<<endl;
    cout<<"Enter choice ";
    cin>>choice;
    switch (choice){
        case 1:{
            int search;
            cout<<"Enter elemnt to search ";
            cin>>search;
            cout<<"Elemnt appear at index "<<linearSearch(search,array);
            break;}
        case 2:
            {int occur;
            cout<<"Enter element to count ";
            cin>>occur;
            cout<<"occured these many times "<<countOccurrences(occur,array);
            break;}
        case 3:
            cout<<"second largest is "<<findSecondLargest(array);
            break;
        case 4:
            cout<<"Mean is "<<calculateMean(array);
            break;
        default:
                cout<<"Enter valid choice ";
    }
}