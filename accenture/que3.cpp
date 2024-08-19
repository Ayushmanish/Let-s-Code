#include<bits/stdc++.h>
using namespace std;
int findCount(int n, int arr[], int num, int diff) {
    int i,count=0;
    for(i=0;i<n;i++){
        if(abs(arr[i]-num)<=diff)
        count++;
    }
    if(count==0)
    return -1;
    else
    return count;
}
int main(){
    int n,num,diff;
    cout<<"enter n:";
    cin>>n;
    cout<<"enter num:";
    cin>>num;
    cout<<"enter diff";
    cin>>diff;
    int arr[n],i;
    cout<<"enter the array:";
    for(i=0;i<n;i++)
    cin>>arr[i];
    cout<<"the result is: "<<findCount(n,arr,num,diff);
}