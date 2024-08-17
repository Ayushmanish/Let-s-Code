// Instance Counter Class: Implementing 
// a class to track instance counts in a program.
#include<iostream>
using namespace std;
int count=0;
class emp{
    public:
    emp(){
        cout<<"new object created,total: "<<++count<<endl;
    }
    emp(emp&){
        cout<<"new object created,total: "<<++count<<endl;
    }
    ~emp(){
        cout<<"one object destroyed,total: "<<--count<<endl;
    }
};
int main(){
    emp ob1,ob2,ob3;
    emp ob4=ob3;
    {
        emp ob5;
    }
    {
        emp ob6;
    }
}