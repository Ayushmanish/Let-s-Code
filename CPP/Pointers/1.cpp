#include<iostream>
using namespace std;
int main(){
    int num=5;
    int *ptr=&num;
    cout<<""<<num;
    cout<<"\n"<<ptr;
    cout<<"\n"<<*ptr;
    num++;
    cout<<"\n"<<num;
    (*ptr)++;
    cout<<"\n"<<*ptr;
    int i=10;
    int *t=0;
    t=&i;
    cout<<"\n"<<*t;
    int *q=ptr;
    cout<<"\n"<<*q;
    
    cout<<"\n"<<q;
    q=q+1;//will increase by 4 bytes becoz of int.
    cout<<"\n"<<q;
}