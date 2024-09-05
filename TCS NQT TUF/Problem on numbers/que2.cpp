// //Check if a number is prime or not
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int num,i;
//     cout<<"\nenter the num:";
//     cin>>num;
//     int flag=0;
//     for(i=2;i<=num/2;i++){
//         if(num%i==0){
//             flag=1;
//             break;
//         }
//         else
//         continue;
//     }
//     if(flag==1)
//     cout<<"\nnot prime:";
//     else
//     cout<<"\nyes prime";
// }


// Prime numbers in a given range
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int min,max,p,r,F;
    cout<<"\nenter the min and max:";
    cin>>min>>max;
    vector<int> vec;
    int flag,i;
    while(min<=max){
    flag=0;
    for(i=2;i<=min/2;i++){
        if(min%i==0){
            flag=1;
            break;
        }
        else
        continue;
    }
    if(flag==0)
    vec.push_back(min);

    min++;
    }
    cout<<"\nthe prime numbers are: ";
    for(int i=0;i<vec.size();i++){
        cout<<" "<<vec[i];
    }
}