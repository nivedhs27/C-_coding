#include<iostream>
using namespace std;
class Complex{
    public:int r,i,a[20],b[20];
void get(){int n;
        cout<<"enter value:";
        for(int i=0;i<1;i++){cin>>a[i]>>b[i];}
}
void print(){for(int i=0;i<1;i++){cout<<a[i]<<"+"<<b[i]<<"i"<<endl;}}
  Complex operator+(Complex c){
    Complex t;
    for(int i=0;i<1;i++){
    t.a[i]=a[i]+c.a[i];
    t.b[i]=b[i]+c.b[i];
    return t;}}};
int main(){
  Complex A;
  Complex B;
  A.get();
  A.print();
  B.get();
  B.print();
}
