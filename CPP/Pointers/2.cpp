#include<iostream>
using namespace std;
int main(){
    int arr[10]={5,10,45,12};
    cout<<"address of first memory block is "<<arr<<endl;
    cout<<arr[0]<<endl;
    cout<<"address of first memory block is "<<&arr[0]<<endl;

    cout<<"4th "<<*arr<<endl;
    cout<<"5th "<<*arr+1<<endl;
    cout<<"6th "<<*(arr+1)<<endl;
    cout<<"7th "<<*(arr)+1<<endl;
    cout<<"8th "<<arr[2]<<endl;
    cout<<"9th "<<*(arr+2)<<endl;

    int i=3;
    cout<<"10th "<<i[arr]<<endl;//alternate way of writing arr[i];


    int temp[10]={1,2};
    cout<<"->"<<sizeof(temp)<<endl;
    cout<<"1st "<<sizeof(*temp)<<endl;
    cout<<"2st "<<sizeof(&temp)<<endl;

    int *ptr=&temp[0];
    cout<<sizeof(ptr)<<endl;
    cout<<sizeof(*ptr)<<endl;
    cout<<sizeof(&ptr)<<endl;


    int a[20]={1,2,3,4,5};
    cout<<"->"<<&a[0]<<endl;
    cout<<&a<<endl;
    cout<<a<<endl;

    int *p=&a[0];
    cout<<p<<endl;//this is simply printing the add inside the p
    cout<<*p<<endl;//this is value at add pointed by p
    cout<<"->"<<&p<<endl;//this is the address of the pointer p


    int arr1[10];
    //arr=arr+1;//error; becoz once address is assigned, 
    //you can't change it. it is permanently saved in 
    //the symbol table for the current code run

    int *ptr1=&arr1[0];
    ptr1=ptr1+1;
    cout<<ptr1<<endl;
    return 0;
}