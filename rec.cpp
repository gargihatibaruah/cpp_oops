#include<iostream>
using namespace std;
class Rectangle{
    private:
    float length;
    float breadth;
    public:
    void setvalues(float l,float b)
    {
        length=l;
        breadth=b;
    }
    float area(){
        return length*breadth;
    }
};
int main(){
    Rectangle r1;
    r1.setvalues(12.7,7.8);
    cout<<"Area of rectangle is: "<<r1.area()<<endl;
    return 0;

}