#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    int n;
    cout<<"ENTER THE NUMBER OF NAMES u want to enter: ";
    cin>>n;
    string names[n];
     cout<<"ENTER THE NAMES: ";
     for(int i=0;i<n;i++){
        cin>>names[i];
     }
   sort(names,names+n);

    cout<<"Names in alphabetical order:\n";
    for (int i=0;i<n;i++) {
        cout<<names[i]<<endl;
    }


}