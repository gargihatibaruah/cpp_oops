//1.Create a class Car with constructor and destructor. Show when each is called during object creation and destruction.

#include<iostream>
using namespace std;
class Car{
    public:
    Car(){
        cout<<"Constructor called: Car object created."<<endl;
        }
        ~Car(){
            cout<<"Destructor called: Car object destroyed"<<endl;
        }

};
int main(){
    cout<<"Creating Car object"<<endl;
    Car myCar; 
    cout<<"Car object is in use."<<endl;
    return 0;
}