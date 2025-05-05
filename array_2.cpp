#include<iostream>
using namespace std;
class Weather{
    float temp[7];
    public:
    void inputTemp(){
        cout<<"Enter the temperature: "<<endl;
        for(int i=0;i<7;i++){
            cin>>temp[i];
        }
    }
    void displayTemp(){
        cout<<"The temperatures are: "<<" ";
        for(int i=0;i<7;i++){
            cout<<temp[i]<<"   ";
        }
        cout<<endl;
    }

    

    float AvgTemp(){
        float sum=0;
        for(int i=0;i<7;i++){
        sum+=temp[i];    
        }
        float avg=sum/7;
        return avg;
    }
};
int main(){
    Weather w;
    w.inputTemp();
    w.displayTemp();
    cout<<"Average temperature is: "<<w.AvgTemp();
    return 0;
}