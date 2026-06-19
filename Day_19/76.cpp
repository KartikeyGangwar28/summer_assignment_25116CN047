#include <iostream>
using namespace std;
 int main(){
    int r,c;
         int mat[100][100];
         cout<<"ENTER THT NUMBER OF ROWS AND COLUMNS: ";
         std::cin>>r>>c;
         if(r<=0||c<=0){
            cout<<"INVALID MATRIX SIZE";
            return 0;
         }
         cout<<"ENTER THE ELEMENTS FOR MATRIX : ";
         for (int i=0;i<r;i++)
         {for(int j=0;j<c;j++){
            cin>>mat[i][j];
         }
    }
    cout<<"MATRIX 1: \n";
     for (int i=0;i<r;i++)
         {for(int j=0;j<c;j++){
            cout<<mat[i][j]<<" ";
         }
         cout<<"\n";
    }
    
    int sum=0;
    for (int i=0;i<r;i++)
         {for(int j=0;j<c;j++){
            if(i==j){
                sum+=mat[i][j];
            };
         }
    }
    cout<<"SUM OF DIAGONAL ELEMENTS OF MATRIX IS: "<<sum;
} 