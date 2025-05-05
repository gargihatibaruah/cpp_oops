//greatest of two numbes using multiple objects
#include<iostream>
using namespace std;
class G{
private:
int num;
public:
void getnum(int a){
num=a;
}
int greatest(){
    return num;
}
};
int main(){
G obj1,obj2;
int a,b;
cout<<"Enter 1st number: "<<endl;
cin>>a;
cout<<"Enter 2nd number: "<<endl;
cin>>b;
obj1.getnum(a);
obj2.getnum(b);
if (obj1.greatest()>obj2.greatest())
{
    cout<<"The greatest number is: "<<obj1.greatest()<<endl;
}
else
{
    cout<<"The greatest number is: "<<obj2.greatest()<<endl;
}
return 0;}





