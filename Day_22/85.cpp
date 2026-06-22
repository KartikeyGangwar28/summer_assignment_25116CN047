#include <iostream>
#include <string>
using namespace std;
bool checkPalindrome(string&s){
int isPalindrome=1;
int n=s.size();
for(int i=0;i<s.size();i++){
    for(int j=n-i-1;j>n-i-2;j--){
        if(s[i]!=s[j]){
            return false;
        }
    }
}
return true;

}
int main(){
    string s;
    cout<<"ENTER THE STRING CHARACTERS: ";
    getline(cin,s);
    if(checkPalindrome(s)){
        cout<<s<<" - is palindrome string";
        return 0;
    }
    cout<<s<<" - given string is not palindrome";
   
}
