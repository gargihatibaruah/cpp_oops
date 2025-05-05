#include<iostream>
using namespace std;
class ok{
    private:
    int a,b;
    public:
    void setData(int a1,int b1){
        a=a1;
        b=b1;
}
    int add(){
        return a+b;
    }
    int getdata(){
        cout<<"The sum of a and b is:"<<add()<<endl;
    }
};
int main(){
    ok w1;
    w1.setData(13,56);
    cout<<w1.add()<<endl;
    w1.getdata();
    return 0;
}