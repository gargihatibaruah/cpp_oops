#include<iostream>
using namespace std;
class Employee{
    private:
    int a,b;
    public:
    int c,d,e;
    void setData(int a1,int b1,int c1);
    void getData(){
        cout<<"The value of a is: "<<a<<endl;
        cout<<"The value of b is: "<<b<<endl;
        cout<<"The value of c is: "<<c<<endl;
        cout<<"The value of d is: "<<d<<endl;
        cout<<"The value of e is: "<<e<<endl;
}
};
void Employee :: setData(int a1,int b1,int c1){
    a=a1;
    b=b1;
    c=c1;
}
int main(){
Employee gargi;
gargi.setData(12,34,24);
gargi.d=16;
gargi.e=89;
gargi.getData();
}