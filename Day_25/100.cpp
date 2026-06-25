#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool compareLength(string a, string b) {
    return a.length()<b.length();
}

int main() {
    int n;
    cout<<"ENTER THE NUMBER OF WORDS YOU WANT TO ENTER: ";
     cin>>n;
    string s[n];
    for(int i=0;i<n;i++){
        cin>>s[i];
    }

    sort(s, s + n, compareLength);

    cout<<"Words sorted by length:\n";
    for (int i=0;i<n;i++){
        cout<<s[i]<<endl;
    }


}