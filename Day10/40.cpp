#include <iostream>
using namespace std;
int main(){
 for (int i=1;i<=5;i++) {
        for (int j=1;j<=5-i;j++){
            cout<<" ";
        }
        for (int j=0;j<i;j++){
            cout<<char('A'+j);
        }
        for (int j=i-2;j>=0;j--){
            cout<<char('A'+j);
        }
cout << "\n";
    }
}
