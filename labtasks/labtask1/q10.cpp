#include<iostream>
using namespace std;
int createAccount(int account[],char name[][25],int ammount[]){
    for(int i=0;i<4;i++){
        cout<<"account "<<(i+1)<<" ";
        cin>>account[i];
        cout<<"name ";
        cin>>name[i];
        cout<<"ammount ";
        cin>>ammount[i];
    }
    return 1;
}
int checkbalance(int account[],int ammount[],int no,char name[][25]){
    for(int i=0;i<4;i++){
        if(account[i]==no){
            cout<<account[i]<<" you have "<<ammount[i]<<"on name "<<name[i];
        }    
    }
    return 1;
}
int withdraw(int accountno[],int ammount[],int no,int amount){
    for(int i=0;i<4;i++){
        if(accountno[i]==no){
            if(ammount[i]>=amount){
                ammount[i]-=amount;
                cout<<"withdraw succesfull remaining balance "<<ammount[i];
            }
            else
                cout<<"insufficent balance ";
        }
    }
    return 1;
}
int deposit(int accountno[],int ammount[],int no,int amount){
    for(int i=0;i<4;i++){
        if(accountno[i]==no){
            if(amount>0){
                ammount[i]+=amount;
                cout<<"deposit succesfull  balance  is "<<ammount[i];
            }
            else
                cout<<"inccorect ammount ";
        }
    }
    return 1;
}
int displayAll(int accountno[],char name[][25],int ammount[]){
    for(int i=0;i<4;i++){
        cout<<accountno[i]<<"  "<<name[i]<<"  "<<ammount[i]<<endl;
    }

    return 1;
}
int main (){
    int n=4;
    int op;
    int accountno[n];
    char name[4][25];
    int ammount[n];
    cout<<"initialize 4 accounts "<<endl;
    createAccount(accountno,name,ammount);
    cout<<"operation  \n 1.withdraw \n 2.deposit \n 3.check balance \n 4.display all"<<endl;
    cin>>op;
    switch (op){
        case 1:{
            int no;
            int amount;
            cout<<"Enter account no ";
            cin>>no;
            cout<<"Enter amount to withdraw ";
            cin>>amount;
            withdraw(accountno,ammount,no,amount);
            break;
        }
        case 2:{
            int no;
            int amount;
            cout<<"Enter account no ";
            cin>>no;
            cout<<"Enter amount to deposit ";
            cin>>amount;
            deposit(accountno,ammount,no,amount);
            break;
        }
        case 3:{
            int no;
            cout<<"Enter account no ";
            cin>>no;
            checkbalance(accountno,ammount,no,name);
            break;
        }  
        case 4:{
            displayAll(accountno,name,ammount);
            break;
        }
    }
}