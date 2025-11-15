#include <iostream>
using namespace std;
class Shape {public:
    int n;
virtual void gearea()=0;
virtual void getperi()=0;
};
class Rectangle:virtual public Shape{
    public: int l,b;
    Rectangle(int x,int y){
        l=x;
        b=y;
    }
    void gearea(){
        cout<<"Area of rectangle is: "<<l*b<<endl;
    }
    void getperi(){
        cout<<"Perimeter of rectangle is: "<<2*(l+b)<<endl;
    }
};
int main(){Rectangle r(5,6);
r.gearea();
    r.getperi();
    return 0;}