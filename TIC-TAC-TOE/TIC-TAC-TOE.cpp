#include<iostream>
using namespace std;
char board[3][3];
void intialize(){
    for (int i = 0; i < 3; i++){
        for(int j=0;j<3;j++)
            {
                board[i][j]='-';
            }
    }
}
void draw (){
    cout<<endl;
    for (int i = 0; i < 3; i++){
        for(int j=0;j<3;j++)
            {
                cout<<board[i][j];
            }
            cout<<endl;
    }
    cout<<endl;
}
bool store(char currentplayer,int row,int col){
    if(board[row][col]=='-'){
        board[row][col]=currentplayer;
            return true;
    }
    return false;
}
bool rowcheck(char currentplayer,int row){
    for(int i=0;i<3;i++){
        if(board[row][i]!=currentplayer){
            return false;
        }
    }
return true;
}
bool colcheck(char currentplayer,int col){
    for(int i=0;i<3;i++){
        if(board[i][col]!=currentplayer){
            return false;
        }
    }
return true;
}
bool diagnolcheck(char currentplayer){
    
        if((board[0][0]==currentplayer&&board[1][1]==currentplayer&&board[2][2]==currentplayer)||(board[0][2]==currentplayer&&board[1][1]==currentplayer&&board[2][0]==currentplayer)){
            return true;
  }
  return false;
}
void initiate (){
        char currentplayer='X';
        int move,row,col;
        int i=0;
        while(i<9){
            cout<<"Enter value from (0-9) for player "<<currentplayer<<endl;
                cin>>move;
                if(move<0||move>9){
                    cout<<"INVALID OUTPUT "<<endl;
                    continue;
                }
            row=(move-1)/3;
            col=(move-1)%3;
            if(!(store(currentplayer,row,col))){
                cout<<"CHARACTER ALREADY EXISIST "<<endl;
                continue;
            }
            draw();
            if(rowcheck(currentplayer,row)||colcheck(currentplayer,col)||diagnolcheck(currentplayer)){
                cout<<"PLAYER "<<currentplayer<<" WON "<<endl;
                draw();
                return ;
            }
            currentplayer=((currentplayer=='X')?'O':'X');
            i++;
        }

}
int main(){
    intialize();
    initiate();
   
} 