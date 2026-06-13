#include <iostream>
using namespace std;
int findFrequency(int arr[],int ele,int n){
    int frequency=0;
    for(int i=0;i<n;i++){
    if(arr[i]==ele){
        frequency+=1;
    }
}
return frequency;
}
int main(){
int n;
cout<<"ENTER THE NUMBER OF ELEMETNS IS ARRAY: ";
cin>>n;
if(n<=0){
    cout<<"INVALID ARRAY SIZE";
    return 0;
}
int arr[100];
cout<<"ENTER THE ELEMENTS: ";
for(int i=0;i<n;i++){
     std::cin>>arr[i];
}
int ele;
cout<<"ENTER THE ELEMENT WHOSE FREQUENCY YOU WANT: ";
cin>>ele;
int frequency=findFrequency(arr,ele,n);
if(frequency==0){
    cout<<"ELEMENT DOES NOT EXIST IN THE ARRAY";
}
else{
    cout<<ele<<" repeats "<<frequency<<" times in the entered array";
}
}
