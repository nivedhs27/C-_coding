#include<iostream>
using namespace std;
class String{public:
string a,b;
String(string a,string b){
    this->a=a;
    this->b=b;
}
string operator +(){
    return a+b;
}
void operator =(const String &s){
    string t=a;
    t=s.b;
    cout<<"After copying: "<<t<<endl;}
void operator <=(const String &other){
    if(a.length()>other.b.length()){
        cout<<a<<" is greater than "<<b;
    }
    else if(a.length()<other.b.length()){
        cout<<b<<" is greater than "<<a;
    }
    else{
        cout<<"Both are equal\n";
}}
void length(string a){int c=0;
    for(int i=0;a[i]!='\0';i++){
        c++;
    }
    cout<<"\nLength of string "<<a<<" is: "<<c;
}
};
int main(){
    String s1("Suresh","Gopi");
    cout<<+s1<<endl;
    s1=s1;
    s1<=s1;
    s1.length(s1.a);
    s1.length(s1.b);
    return 0;
}