#include<iostream>
#include<vector>
using namespace std;
    void display(vector<int> &vec1){
        int i=0;
        for(;i<vec1.size();i++)
        cout<<" "<<vec1[i];
    }
int main(){
    vector<int> vec1;
    int i,ele;
    for(i=0;i<5;i++){
        cout<<"enter element: ";
        cin>>ele;
        vec1.push_back(ele);
    }
    display(vec1);
    vector<int> vec2;
    for(i=0;i<10;i++){
        vec2.push_back(i);
    }
    vec2.erase(vec2.begin());
    cout<<"\n";
    display(vec2);
}