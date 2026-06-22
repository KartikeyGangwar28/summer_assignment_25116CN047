#include <iostream>
#include <string>
using namespace std;
int countWord(string &s){
    int count=0;
    bool word=false;
   for(int i=0;i<s.size();i++){
    if(!isspace(s[i])){
        if(!word){
             count++;
        word=true;
    }
}
   else {
       word=false;
    }
   
}
   return count;
}
int main(){
    string s;
    cout<<"ENTER THE STRING CHARACTERS: ";
    getline(cin,s);
   cout<<"TOTAL WORDS IN SENTENCE = "<< countWord(s);

}