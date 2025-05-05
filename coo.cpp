#include<iostream>
using namespace std;
class calculator{
    int a,b;
    public:
    void setData(){
        cout<<"Enter the first number: "<<endl;
        cin>>a;
        cout<<"Enter the second number: "<<endl;
        cin>>b;
    }
    int add(){
        return a+b;
    }
    int sub(){
        return a-b;
    }
    int multiply(){
       return a*b;
    }
    int division(){
        return a/b;
    }
};
int main(){
calculator c1;
c1.setData();
cout<<"Addition: "<<c1.add()<<endl;
cout<<"Subtraction: "<<c1.sub()<<endl;
cout<<"Multiplication: "<<c1.multiply()<<endl;
cout<<"Division: "<<c1.division()<<endl;
return 0;
}
