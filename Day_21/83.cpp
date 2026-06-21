#include <iostream>
#include <string>
using namespace std;
int main(){
       string s;
       cout<<"ENTER THE CHARACTERS OF STRING: ";
       getline(cin,s);
       int vowel=0;
       int consonant=0;
       for(int i=0;i<s.size();i++){
        if (isalpha(s[i]))
        {
            if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='a'||s[i]=='e'||s[i]=='o'||s[i]=='u'||s[i]=='i'){
            vowel++;
        }
        else{
            consonant++; 
        }
        }
        
        
}
cout<<"NO OF VOWELS ARE: "<<vowel<<endl<<"NO OF CONSONANTS ARE: "<<consonant;
}
