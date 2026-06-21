#include <iostream>
#include <string>

using namespace std;
 int main(){
       string s;
       cout<<"ENTER THE CHARACTERS OF STRING: ";
       getline(cin,s); 
      int length=0;
      for(int i=0;s[i]!='\0';i++){
        length++;
      }
      cout<<"LENGTH OF STRING ENTERED BY THE USER IS: "<<length;

       

} 
