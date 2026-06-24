#include <iostream>
#include <string>
using namespace std;

bool isRotation(string s1,string s2) {
    if(s1.size()!=s2.size()){
        return false;
    }
string temp=s1+s1;
  if(temp.find(s2)!=string::npos){
    return true;
  }
  return false;
  
}

int main() {
    string s1;
    cout<<"ENTER THE FIRST STRING: ";
    cin>>s1;
    string s2;
    cout<<"ENTER THE SECOND STRING: ";
    cin>>s2;
    if(isRotation(s1,s2))
        cout<<"Strings are rotations";
    else {cout << "Strings are not rotations";}

 
}
