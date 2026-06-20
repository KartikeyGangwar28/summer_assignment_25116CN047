#include <iostream>
using namespace std;
 int main(){
    int r,c;
         int mat[100][100],mat2[100][100];
         cout<<"ENTER THT NUMBER OF ROWS AND COLUMNS: ";
         std::cin>>r>>c;
         if(r<=0||c<=0){
            cout<<"invalid rows and columns";
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
    cout<<"ENTER THE ELEMENTS FOR MATRIX 2: ";
      for (int i=0;i<r;i++)
         {for(int j=0;j<c;j++){
            cin>>mat2[i][j];
         }
    }
    cout<<"MATRIX 2: \n";
     for (int i=0;i<r;i++)
         {for(int j=0;j<c;j++){
            cout<<mat2[i][j]<<" ";
         }
         cout<<"\n";
    }
    int mul[100][100];
    for (int i=0;i<r;i++)
         {for(int j=0;j<c;j++){
            for(int k=0;k<c;k++){
            mul[i][j]+=mat[i][k]*mat2[k][j];
         }
        }
    }
    cout<<"MULTIPLIED MATRIX IS: \n";
     for (int i=0;i<r;i++)
         {for(int j=0;j<c;j++){
            
            cout<<mul[i][j]<<" ";
         }
         cout<<"\n";
    }
} 
