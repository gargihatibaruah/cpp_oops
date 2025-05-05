#include<iostream>
using namespace std;
int main(){
bool hello;
cout<<"Enter a boolean value(0 or 1): ";
cin>>hello;
cout<<"The boolean value is: "<<hello<<endl;
cout<<"The boolean value is: "<<boolalpha<<hello<<endl; // prints true or false
return 0;
}