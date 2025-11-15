#include<iostream>
#include<stdexcept>
using namespace std;
int main(){int a=5,b=0,c;
try
{
    if(b==0){
        throw runtime_error("Denominator is zero");
    c=a/b;
    cout<<c;
    }}

catch(runtime_error &e){
    cout<<"Not possible bcz:"<< e.what()<<" is invalid"<<endl;
}
return 0;
}