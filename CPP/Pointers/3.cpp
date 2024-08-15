#include<iostream>
#include<vector>
using namespace std;
void print(vector<int>p){

for(int i=0;i<p.size();i++){
    cout<<" "<<p[i];
    }
}
int main(){
    // char c[5]={'a','c','a','c','a'};
    // cout<<" "<<c<<endl;
    // char c1[6]="asdfg";//extra is for \0 which is null termination.
    // cout<<" "<<c1<<endl;
    // string str="asdfg";
    // cout<<" "<<str<<endl;

    int arr[5]={1,2,3,4,5};
    cout<<"1st-"<<arr<<endl;
    cout<<"2nd-"<<&arr<<endl;
    cout<<"3rd-"<<&arr[0]<<endl;
    cout<<"4th-"<<sizeof(arr)<<endl;

    vector<int> vec;
    for(int i=0;i<10;i++)
    vec.push_back(i);
    cout<<"5th-"<<vec.data()<<endl;
    cout<<"6th-"<<&vec<<endl;
    cout<<" "<<&vec[0]<<endl; 
    print(vec);
}