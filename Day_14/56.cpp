#include <iostream>
 using namespace std;
 #include <set>
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
    cin>>arr[i];
}
std::set<int>duplicates={};
//int isDuplicate=0;
//std::cout<<"size: "<<duplicates.size();
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(arr[i]==arr[j]){
           // isDuplicate=1;
            duplicates.emplace(arr[i]);
            
        }
}
// if(isDuplicate==1){
//     isDuplicate=0;
// }
} 
if(duplicates.size()==0){
    std::cout<<"No duplicates in the given array";
    return 0;
}
cout<<"duplicates are: ";
for(auto it:duplicates){
    cout<<it<<" ";
}
 }