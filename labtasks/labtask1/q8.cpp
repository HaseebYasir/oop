/*Write the following functions:
● stringLength(): Returns the length of a string without using strlen()
● stringCopy(): Copies one string to another without using strcpy()
● stringCompare(): Compares two strings and returns 0 if equal, -1 if first is smaller, 1 if first is
larger
Test all functions in main with user input.
Sample Input:
Enter first string: Hello
Enter second string: World
Sample Output:
Length of first string: 5
Length of second string: 5
Copied string: Hello
Comparison result: -1 (First string is smaller)*/
#include<iostream>
using namespace std;
int stringlen(char string[]){
    int counter =0;
    for(int i=0;string[i]!='\0';i++)
        counter++;
    return counter;

}
void stringcopy(char start[],char destination[]){
    for(int i=0;start[i]!='\0';i++)
        destination[i]=start[i];
    
}
int stringcompare(char string1[],char string2[]){
    bool flag=false;
    for(int i=0;string1[i]!='\0';i++){
        if(string1[i]==string2[i])
            flag=true;
        else
            flag=false;
    }
    if(flag)
        return 1;
    else
        return -1;
    return 0;
}
int main(){
    char string1[25],string2[25],copied[50];
    cout<<"Enter first string ";
    cin>>string1;                // here it will take only world if we even try to enter two words it will only accept first one at space at tab or newline it will store /0
    cout<<"Enter second string ";
    cin>>string2;
    cout<<"length of first string "<<stringlen(string1)<<endl;
    cout<<"length of second string "<<stringlen(string2)<<endl;
    stringcopy(string1,copied);// they do not pass entire string it decompose to pointers change in function will change orignal like pass by refrence
    cout<<"copied string "<<copied<<endl;
    cout<<"comparison result "<<stringcompare(string1,string2);
}
