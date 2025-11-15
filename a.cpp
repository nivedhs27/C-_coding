#include<iostream>
using namespace std;
void matsum(){
    int a[2][2],b[2][2],c[2][2],Colsum[2]={0,0};
    cout<<"Enter elements of 1st matrix: ";
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cin>>a[i][j];
        }
    }
    cout<<"Enter elements of 2nd matrix: ";
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cin>>b[i][j];
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    for(int j=0;j<2;j++){
        for(int i=0;i<2;i++){
            Colsum[j]+=c[i][j];
        }
    }for(int j=0;j<2;j++){cout<<"Sum of columns of column "<<j+1<<"is :"<<Colsum[j]<<endl;
}}
int main(){
    matsum();
    return 0;
}