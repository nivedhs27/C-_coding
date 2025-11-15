#include<iostream>
using namespace std;
void greet(string  n="User"){
cout<<"Hello  "<< n<<"!"<<endl;
}
int main(){
    greet();
    greet("Alice");
    return 0;
}
