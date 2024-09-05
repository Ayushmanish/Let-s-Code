// // Check if a number is palindrome or not
// #include<iostream>
// using namespace std;
// int main(){
//     int num,p,r,F=0;
//     cout<<"\nenter the num:";
//     cin>>num;
//     p=num;
//     for(;num>0;){
//         r=num%10;
//         F=F*10+r;
//         num/=10;
//     }
//     if(F==p){
//         cout<<"\nyes palindrome";
//     }
//     else{
//         cout<<"\nno palindrome";
//     }
// }


// Find all Palindrome numbers in a given range
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int min,max,p,r,F;
    cout<<"\nenter the min and max:";
    cin>>min>>max;
    vector<int> vec;
    while(min<=max){
        p=min;
        F=0;
        for(;min>0;){
        r=min%10;
        F=F*10+r;
        min/=10;
    }
    if(F==p){
        vec.push_back(p);
        min++;
    }
    min=p;
    min++;
    }
    cout<<"\nthe palindrome numbers are: ";
    for(int i=0;i<vec.size();i++){
        cout<<" "<<vec[i];
    }
}