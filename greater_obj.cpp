#include<iostream>
using namespace std;
class Great{
    float num;
    public:
    void setNum(float n){
        num=n;
    }
    float great(){
        return num;
    }
};
int main(){
Great obj1,obj2;
obj1.setNum(23);
obj2.setNum(56);
if(obj1.great()>obj2.great()){
    cout<<obj1.great()<<" is the greatest.";}
    else
    cout<<obj2.great()<<" is the greatest.";
    return 0;
}