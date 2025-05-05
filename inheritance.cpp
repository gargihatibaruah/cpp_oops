#include<iostream>
using namespace std;
//parent class
class Animal{
public:
void eat(){
    cout<<"The animal eats food."<<endl;
}
};
class Dog:public Animal{
    public:
    void bark(){
        cout<<"The dog barks."<<endl;
    }
};
int main(){
Dog mydog;
mydog.eat();
mydog.bark();
return 0;
}