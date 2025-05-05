//greatest of two numbers using class and object
#include<iostream>
using namespace std;
class G{
    private:
    int num1,num2;
    public:
    void setnum(int a,int b)
{
    num1=a;
    num2=b;
 }
 int greatest(int num1,int num2){
    if(num1>num2)
    return num1;
    else
    return num2;
 }
};
int main(){
G great;
int a,b;
cout<<"Enter two numbers: "<<endl;
cin>>a>>b;
great.setnum(a,b);
int result=great.greatest(a,b);
cout<<"The greatest number is: "<<result<<endl;
return 0;
}