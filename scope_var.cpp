//scope of variables
#include<iostream>
using namespace std;
int globalVar=60;
void localVar(){
    int local=20;
    cout<<"Local variable: "<<local<<endl;
}
int main(){
    int localMain=24;
    cout<<"Main variable:"<<localMain<<endl;
    cout<<"Global variable:"<<globalVar<<endl;
    localVar();
    return 0;
}