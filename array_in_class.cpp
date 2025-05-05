#include<iostream>
using namespace std;
class Student{
    int marks[5];
    public:
    void setMarks(){
        cout<<"Enter marks of 5 subjects: ";
        for(int i=0;i<5;i++){
            cin>>marks[i];
        }
        cout<<endl;
    }
    void displayMarks(){
        cout<<"Marks are:"<<"  ";
        for(int i=0;i<5;i++){
            cout<<marks[i]<<endl;
        }
        cout<<endl;
    }
    int totalMarks(){
        int sum=0;
        for(int i=0;i<5;i++){
        sum+=marks[i];
        }
        return sum;
    }
};
int main(){
    Student s;
    s.setMarks();
    s.displayMarks();
    cout<<"Total Marks is:"<<s.totalMarks();
    return 0;
}