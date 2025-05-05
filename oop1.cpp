//use of class and object to add two numbers
#include<iostream>
using namespace std;

class A{
    private:
     int num1,num2;
public :
void setnum(int a,int b){
    num1=a;
    num2=b;
}
int sum();
};
A::sum(){
    return num1+num2;
    }
int main(){
    A x;
    A y;
    int a,b;
    cout<<"Enter the value of a: "<<endl;
    cin>>a;
    cout<<"Enter the value of b: "<<endl;
    cin>>b;
    x.setnum(a,b);
    cout<<"The sum of a and b is: "<<x.sum()<<endl;
    y.setnum(a,b);
    cout<<"The sum of a and b is: "<<y.sum()<<endl;

    return 0;
    
}



