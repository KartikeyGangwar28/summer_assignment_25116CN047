#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int difficultyChoice(int n){
     int computerChoice=-1;
if(n==1){ //here i have assumed difficulty==n or denoted by n;
        computerChoice=rand()%10;
    }
    else if(n==2){
        computerChoice=rand()%100;
    }
    else if(n==3){
        computerChoice=rand()%1000;
    }
    else{
        return -1;
    }
    return computerChoice;
}
int main(){
    srand(time(0));
    int attempts;
    cout<<"ENTER THE NUMBER OF ATTEMPTS U WISH TO TAKE: ";
     cin>>attempts;
    if(attempts<=0){
        cout<<"invalid attempts";
        return 0;
    }
    int difficulty;
    cout<<"SELECT THE DIFFICULTY LEVEL YOU WANT TO PLAY IN:\n1.Easy[GUESS NUMBERS BETWEEN 0 TO 9]\n2.Medium[GUESS NUMBERS BETWEEN 0 TO 99]\n3.Hard[GUESS NUMBERS BETWEEN 0 TO 999]\nEnter the level: ";
    cin>>difficulty;
     int winStreak=0,lossStreak=0;
     int computerChoice=difficultyChoice(difficulty);
     while(attempts--){
    int playerChoice;
    cout<<"ENTER YOUR CHOICE: ";
    cin>>playerChoice;
    if(playerChoice<1){
        std::cout<<"INVALID SELECTION OF DIFFICULTY LEVEL";
        return 0;
    }
   // cout<<"Computer choice: "<<computerChoice<<endl; 
   
    if(playerChoice==computerChoice){
        std::cout<<"YOU WON"<<endl;
        winStreak++;
        cout<<"Winstreak= "<<winStreak<<endl;
        lossStreak=0;
        if(attempts!=0)cout<<"ATTEMPT LEFT: "<<attempts<<endl;
    }
    else{
        cout<<"YOU LOSE"<<endl;
        lossStreak++;
        winStreak=0;
        cout<<"Loss Streak: "<<lossStreak<<endl;
        if(attempts!=0)cout<<"ATTEMPT LEFT: "<<attempts<<endl;
    }
}
cout<<"Attempts exhausted"<<endl;
if(winStreak!=0){
    cout<<"TOTAL SCORE: "<<winStreak;
   
}
else{
cout<<"TOTAL SCORE: "<<lossStreak;
}
}