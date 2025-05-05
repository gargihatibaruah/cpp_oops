#include<iostream>
using namespace std;
class Student{
int marks;
char calcGrade(){
    if(marks>80)
    return 'A';
    else if(marks>70)
    return 'B';
    else if(marks>60)
    return 'C';
    else if(marks>50)
    return 'D';
    else if(marks>40)
    return 'E';
    else
    return 'F';
}

public:
void setMarks(int m){
    marks=m;
}  
void showGrade(){
    cout<<"The grade is: "<<calcGrade()<<endl;
} 
};
int main(){
Student s;
s.setMarks(85);
s.showGrade();
return 0;
}
