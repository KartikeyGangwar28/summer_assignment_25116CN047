#include <iostream>
//add matrices;
using namespace std;
 int main(){
    int r,c;
         int mat1[100][100],mat2[100][100];
         cout<<"ENTER THT NUMBER OF ROWS AND COLUMNS: ";
         std::cin>>r>>c;
         if(r<=0||c<=0){
            cout<<"INVALID MATRIX SIZE";
            return 0;
         }
         cout<<"ENTER THE ELEMENTS FOR MATRIX 1: ";
         for (int i=0;i<r;i++)
         {for(int j=0;j<c;j++){
            cin>>mat1[i][j];
         }
    }
    cout<<"MATRIX 1: \n";
     for (int i=0;i<r;i++)
         {for(int j=0;j<c;j++){
            cout<<mat1[i][j]<<" ";
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
    int add[100][100];
    for (int i=0;i<r;i++)
         {for(int j=0;j<c;j++){
            add[i][j]=mat1[i][j]+mat2[i][j];
         }
    }
    cout<<"ADDITION MATRIX:\n";
    for (int i=0;i<r;i++)
         {for(int j=0;j<c;j++){
            cout<<add[i][j]<<" ";
         }
         cout<<"\n";
    }
} 
