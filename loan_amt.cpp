#include<iostream>
using namespace std;
class Bank{public:
int Acc_no;
string cust_name, acc_type ;
void getdata(){
    cout<<"Enter account number: ";cin>>Acc_no;
    cout<<"Enter customer name: ";cin>>cust_name;
    cout<<"Enter account type: ";cin>>acc_type;
}
void display(){
    cout<<"Account number: "<<Acc_no<<endl;
    cout<<"Customer name: "<<cust_name<<endl;
    cout<<"Account type: "<<acc_type<<endl;
}

};
class Loan{public:int loan_amt; string loan_type;int  Acc_no;
void getdata(){
    cout<<"Enter account number: ";cin>>Acc_no;
    cout<<"Enter loan amount: ";cin>>loan_amt;
    cout<<"Enter loan type: ";cin>>loan_type;
}
void display(){
    cout<<"Account number: "<<Acc_no<<endl;
    cout<<"Loan amount: "<<loan_amt<<endl;
    cout<<"Loan type: "<<loan_type<<endl;
}
};
class Report:public Bank, public Loan{
    public:
    void printGold(Bank b[], Loan l[], int n){
        for(int i=0;i<n-1;i++){{
           for(int j=0;j<n-i-1;j++){
            if(l[j].Acc_no<l[j+1].Acc_no){
                Loan temp=l[j];
                l[j]=l[j+1];
                l[j+1]=temp;
                Bank t=b[j];
                b[j]=b[j+1];
                b[j+1]=t;
            }}}
            for(int i=0;i<n;i++){ if(l[i].loan_type=="gold"||l[i].loan_type=="Gold"){
                b[i].display();
                l[i].display();
                cout<<endl;
            }}}}
     
            
    };
int main(){
    int n;
    cout<<"Enter number of customers: ";cin>>n;
    Bank b[n];
    Loan l[n];
    Report r;
    for(int i=0;i<n;i++){
        cout<<"Enter details of customer "<<i+1<<endl;
        b[i].getdata();
        l[i].getdata();
    }
    cout<<"Details of customers with gold loan: "<<endl;
    r.printGold(b,l,n);
    return 0;}