#include<iostream>
#include<string>
using namespace std;
void rev(string str){
int a=str.length();
for(int i=0;i<a/2;i++){
    char t;
    t=str[i];
    str[i]=str[a-1-i];
    str[a-1-i]= t;
}
cout<<str;}
int main(){string str;
cout<<"Enter string:";cin>>str;
rev(str);
return 0;
}

