#include<iostream>
using namespace std;
class Greatest{
    int num1,num2;
    public:
    void setData(){
        cout<<"Enter the first number: ";
        cin>>num1;
        cout<<"Enter the second number: ";
        cin>>num2;
    }
    void Great(){
        if(num1>num2)
        cout<<num1<<" is the greatest.";
        else
        cout<<num2<<" is the greatest.";
                }
                };
int main(){
    Greatest big;
    big.setData();
    big.Great();
    return 0;
}                