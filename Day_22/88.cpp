#include <iostream>
#include <string>
#include <map>
using namespace std;
void removeSpaces(string&s){
for(int i=0;i<s.size();i++){
    if(s[i]==' '){
        s.erase(s.begin()+i);
        i--;
    }
}
}
int main(){
 string s;
 cout<<"ENTER THE STRING: ";
getline(cin,s);
removeSpaces(s);
cout<<"AFTER REMOVING SPACES: "<<s;
}  