#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
void removeDuplicates(string &s){
for(int i=0;i<s.size();i++){
        for(int j=i+1;j<s.size();j++){
            if(s[i]==s[j]){
                s.erase(s.begin()+j);
                j--;
            }
        }
    }
}


int main(){
    string s;
    getline(cin>>ws,s);
    removeDuplicates(s);
    cout<<"AFTER REMOVING REPEATING OR DUPLICATE ELEMENTS: ";
    for(int i=0;i<s.size();i++){
        cout<<s[i];
    }
}