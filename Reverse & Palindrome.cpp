#include<iostream>
#include<string>
using namespace std;
int main(){
string stra;
cout<<"Enter a string: ";
cin>>stra;
string t=stra;
int a=t.length();
for(int i=0;i<a/2;i++){
    char f;
    f=t[i];
    t[i]=t[a-1-i];
    t[a-1-i]= f;
}
cout<<t;
if (t==stra){
    cout<<"\nIt is a palindrome";
}
else{
    cout<<"\nIt is not a palindrome";   
}
return 0;
}

