#include <iostream>
using namespace std;
int main(){
     int r,c;
         int mat[100][100];
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
    int trans[100][100];
     for (int i=0;i<r;i++)
         {for(int j=0;j<c;j++){
            trans[i][j]=mat[j][i];
         }
    }
    cout<<"TRANSPOSED MATRIX: \n";
     for (int i=0;i<r;i++)
         {for(int j=0;j<c;j++){
            cout<<trans[i][j]<<" ";
         }
         cout<<"\n";
    }
    int isSymmetric=1;
 for (int i=0;i<r;i++)
         {for(int j=0;j<c;j++){
            if(trans[i][j]!=mat[i][j]){
                isSymmetric=0;

            }
         }}
         if(isSymmetric==0){
            cout<<"GIVEN MATRIX IS NOT A SYMMETRIC MATRIX";
         }
         else{
            cout<<"GIVEN MATRIX IS A SYMMETRIC MATRIX";
         }
}