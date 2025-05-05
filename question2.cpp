//2.Show how destructors are called in a single inheritance hierarchy (base and derived class).
#include<iostream>
using namespace std;
class Car{
    public:
    Car(){
        cout<<"Constructor called: Car object created."<<endl;
    }
    ~Car(){
        cout<<"Destructor called: Car object destroyed."<<endl;
    }
};
class SportsCar: public Car{
    public:
    SportsCar(){
        cout<<"Constructor called: SportsCar object created."<<endl;
    }
    ~SportsCar(){
        cout<<"Destructor called: SportsCar object destroyed."<<endl;
    }
};
int main(){
    cout<<"Creating SportsCar object"<<endl;
    SportsCar myCar; 
    cout<<"SportsCar object is in use."<<endl;
    return 0;
}