#include<iostream>
using namespace std;
    string p1,p2;
    char space[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
    int row;
    int col;
    char mark='X';
    bool tie=false;

void structure(){
   cout<<"        |       |       \n";
   cout<<"    "<<space[0][0]<<"   |   "<<space[0][1]<<"   |   "<<space[0][2]<<"\n";
   cout<<" _______|_______|_______\n";
   cout<<"        |       |       \n";
   cout<<"    "<<space[1][0]<<"   |   "<<space[1][1]<<"   |   "<<space[1][2]<<"\n";
   cout<<" _______|_______|_______\n";
   cout<<"        |       |       \n";
   cout<<"    "<<space[2][0]<<"   |   "<<space[2][1]<<"   |   "<<space[2][2]<<"\n";
   cout<<"        |       |       \n";
}

void input(){
    int num;
    if(mark=='X')
    {
        cout<<"\n"<<p1<<"'s turn (1-9): ";
        cin>>num;
    }
     if(mark=='O')
    {
        cout<<"\n"<<p2<<"'s turn (1-9): ";
        cin>>num;
    }
    if(num==1){
        row=0;
        col=0;
    }
    if(num==2){
        row=0;
        col=1;
    }
    if(num==3){
        row=0;
        col=2;
    }
    if(num==4){
        row=1;
        col=0;
    }
    if(num==5){
        row=1;
        col=1;
    }
    if(num==6){
        row=1;
        col=2;
    }
    if(num==7){
        row=2;
        col=0;
    }
    if(num==8){
        row=2;
        col=1;
    }
    if(num==9){
        row=2;
        col=2;
    }
    else if(num<1 || num>9){
        cout<<"INVALID POSITION!";
    }
if(mark == 'X' && space[row][col] != 'X' && space[row][col] != 'O'){
    space[row][col] = 'X';
    mark ='O';
}   
else if(mark == 'O' && space[row][col] != 'X' && space[row][col] != 'O'){
    space[row][col] = 'O';
    mark ='X';
}
else{
    cout<<"There is no empty space at this position!";
    input();
}
}

bool result(){
    for(int i=0;i<3;i++){
        if(space[i][0]==space[i][1] && space[i][0]==space[i][2] || space[0][i]==space[1][i] && space[0][i]==space[2][i])
        return true;
    }
    if(space[0][0]==space[1][1] && space[1][1]==space[2][2] || space[0][2]==space[1][1] && space[1][1]==space[2][0]){
    return true;
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(space[i][j]!='X' && space[i][j]!='O'){
                return false;
            }
        }
    }
    tie=true;
    return true;
}

int main(){
    char replay;
    
    cout<<"\n\t ******* TIC-TAC-TOE GAME ******* \t\n";
    cout<<"\nRULES :-";
    cout<<"\n- The game is played on a grid that's 3 by 3 squares.\n";
cout<<"- Suppose, you are X , your friend is O . Players take turns putting their markss in empty squares.\n";
cout<<"- The first player to get 3 of her marks in a row (up, down, across, or diagonally) is the winner.\n";
cout<<"- When all 9 squares are full, the game is over. If no player has 3 marks in a row, the game ends in a tie\n";
    do{
    cout<<"\nEnter the name of first player : ";
    cin>>p1;
    cout<<"Enter the name of second player : ";
    cin>>p2;
while(!result())
{
    structure();
    input();
    result();
}
structure();
if(mark=='X' && tie==false)
{
    cout<<p2<<" WINS!!"<<endl;

}
else if(mark=='O' && tie==false)
{
  cout<<p1<<" WINS!!"<<endl;
}
else{
    cout<<"GAME OVER!! IT'S A DRAW.";
}
 cout<<"\nDo you want to play again ? (y/n) : ";
 cin>>replay;
    if(replay != 'y' && replay != 'Y'){
        cout<<"Thanks for playing";
        break;
}
}while(replay!='n' || replay!='N');
return 0;
}