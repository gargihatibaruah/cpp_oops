//nesting means one member function of a class calls under member function of the same class
#include<iostream>
using namespace std;
class Student{
    int marks1,marks2;
    int totalMarks(){
        return marks1+marks2;
    }
    public:
    void setMarks(int m1,int m2){
        marks1=m1;
        marks2=m2;
    }
    void display(){
        cout<<"Total marks is: "<<totalMarks()<<endl;
    }
};

int main(){
    Student s;
    s.setMarks(67,90);
    s.display();
    return 0;
}