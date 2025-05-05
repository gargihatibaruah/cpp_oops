//cpp program to store and display details of students
#include<iostream>
using namespace std;
class Student{
    string name;
    int rollno;
    float marks;
    public:
    void setDetails(string n,int rn,float m){
        name=n;
        rollno=rn;
        marks=m;
    }
    void displayDetails(){
        cout<<"Student Details: "<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Roll No: "<<rollno<<endl;
        cout<<"Marks: "<<marks<<endl;
                        }
}; 
int main(){
    int n;
    cout<<"Enter the no of students: "<<endl;
    cin>>n;
    Student stud[n];
    for(int i=0;i<n;i++){
        string name;
        int rollno;
        float marks;
        cout<<"Enter details for student: "<<i+1<<":"<<endl;
        cout<<"Name: ";
        cin>>name;
        cout<<"Roll no: ";
        cin>>rollno;
        cout<<"Marks: ";
        cin>>marks;
        stud[i].setDetails(name,rollno,marks);
}
cout<<"Displaying details: "<<endl;
for(int i=0;i<n;i++){
    stud[i].displayDetails();
}
return 0;
}