#include<iostream>
#include<string>
using namespace std;
class Complex{
    int r,i;
    public:
    Complex(int x=0,int y=0){
        r=x;
        i=y;
    }
 void inp(){
    cout<<"Enter real & imaginary: ";
    cin>>r>>i;
 }
  void disp(){
    cout<<r<<" + "<<i<<"i"<<endl;
  }
  Complex operator +(Complex c){
    Complex t;
    t.r=r+c.r;
    t.i=i+c.i;
    return t;
  }};
  int main(){Complex c1,c2,c3;
    c1.inp();
    c2.inp();
    c1.disp();
    c2.disp();
    c3=c1+c2;
    c3.disp();
    return 0;
}