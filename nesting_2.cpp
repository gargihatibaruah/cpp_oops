#include<iostream>
using namespace std;
class Rectangle{
private:
int l,b;
int calArea(){
    return l*b;
}
public:
void setDimension(int l1,int b1){
l=l1;
b=b1;
}
void displayArea(){
    cout<<"The area of rectangle is: "<<calArea()<<endl;
}
};
int main(){
    Rectangle r;
    r.setDimension(12,12);
    r.displayArea();
    return 0;
}
