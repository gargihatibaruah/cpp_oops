//create a class Person with name and age.Derive a class Student with and add Roll No and course. Display all details
#include<iostream>
using namespace std;
class Person{
    public:
    string name;
    int age;
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};
class Student: public Person{
    public:
    int RollNo;
    string Course;
    void displayStudent(){
        cout<<"Roll No: "<<RollNo<<endl;
        cout<<"Course: "<<Course<<endl;
    }
};
int main(){
    Student s1;
    s1.name="Gargi Hatibaruah";
    s1.age=21;
    s1.RollNo=23-21;
    s1.Course="CSE";
    cout<<"Details of Student: "<<endl;
    s1.display();
    s1.displayStudent();
    return 0;
}