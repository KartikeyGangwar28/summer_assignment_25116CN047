#include <iostream>
#include <string>
using namespace std;
class Quiz{
    private:
    string userName;
    int answer;
    int score=0;
    public:
    void playQuiz(){
        cout<<"ENTER YOUR NAME: ";
        cin>>userName;
        cout<<"Question Number 1: \n Which programming language is used for styling web pages: \n1.HTML\n2.CSS\n3.JAVASCRIPT"<<endl;
        cout<<"ENTER YOUR ANSWER: ";
      cin >>answer;
        if(answer==2){
            cout<<"CORRECT ANSWER"<<endl;
            score+=1;
            cout<<"SCORE: "<<score<<endl;
        }
        else{
            cout<<"Incorrect ANSWER"<<endl;
            if(score>0){
            score-=1;
            }
        }
      cout<<"Question Number 2: \nWHAT IS THE TIME COMPLEXITY OF BINARY SEARCH: \n1.O(n)\n2.O(n^2)\n3.O(logn)"<<endl;
      cout<<"ENTER YOUR ANSWER: ";
      cin >>answer;
      if(answer==3){
        cout<<"CORRECT ANSWER"<<endl;
            score+=1;
            cout<<"SCORE: "<<score<<endl;
      }
      else{
            cout<<"Incorrect ANSWER"<<endl;
            if(score>0){
            score-=1;
            }
        }
         cout<<"Question Number 3: \nWHICH HTTP METHOD IS USED TO SEND DATA TO A SERVER: \n1.GET\n2.POST\n3.FETCH"<<endl;
      cout<<"ENTER YOUR ANSWER: ";
      cin >>answer;;
      if(answer==2){
        cout<<"CORRECT ANSWER"<<endl;
            score+=1;
            cout<<"SCORE: "<<score<<endl;
      }
      else{
            cout<<"Incorrect ANSWER"<<endl;
            if(score>0){
            score-=1;
            }
        }
   
   cout<<"QUIZ COMPLETED"<<endl;
   cout<<userName<<"'s SCORE: "<<score<<endl;
   
   
}


};
int main(){
    
    int n;
    cout<<"ENTER THE NUMBER OF STUDENTS WHO WANT TO PLAY THIS QUIZ: ";
    cin>>n;
    Quiz q[n];
    for(int i=0;i<n;i++){
        q[i].playQuiz();
    }

}
