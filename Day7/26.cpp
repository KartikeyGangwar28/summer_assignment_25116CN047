#include <iostream>
using namespace std;
// int pre=0;
// int nex=1;
// int temp=0;

// int recursiveFibonacci(int n){
        
//         temp=pre+nex;
//         pre=nex;
//         nex=temp;
//         n--;
//         if(n==0){
//                 return 0;
//         }
//         cout<<temp<<" ";
//         return recursiveFibonacci(n);
// }
int recursiveFibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    return recursiveFibonacci(n-1)+recursiveFibonacci(n-2);
}

int main() {
    int n;
    cout << "Enter the number of terms u want in your fibonacci series: ";
    cin>>n;
    cout<<"Fibonacci Series: ";
    for (int i=0;i<n;i++) {
        cout<<recursiveFibonacci(i)<<" ";
    }
}
