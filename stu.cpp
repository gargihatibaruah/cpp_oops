#include<iostream>
using namespace std;
class Student{
    string name;
    int rollno;
    int marks;
    public:
    void getData(){
        cout<<"Enter the name of student: "<<endl;
        cin>>name;
        cout<<"Enter the roll number of the student: "<<endl;
        cin>>rollno;
        cout<<"Enter the marks of the student: "<<endl;
        cin>>marks;
    }
    void displayData(){
        cout<<"Name: "<<name<<endl;
        cout<<"Roll No: "<<rollno<<endl;
        cout<<"Marks: "<<marks<<endl;
    }
};
int main(){
Student s1,s2;
cout<<"Student 1:"<<endl;
s1.getData();
cout<<"Student 2:"<<endl;
s2.getData();
cout<<"Details of Student 1:"<<endl;
s1.displayData();
cout<<"Details of Student 2: "<<endl;
s2.displayData();
return 0;
}

