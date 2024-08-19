#include<bits/stdc++.h>
using namespace std;
int calculate (int r, int unit, int arr[], int n){
    if(arr==NULL)
    return -1;
    int total=r*unit;
    int flag=0,sum=0,i;
    for(i=0;i<n;i++){
        sum=sum+arr[i];
        if(sum>=total){
            flag=1;
            break;
        }
    }
    if(flag==1)
    return (i+1);
    else
    return 0;
}
int main(){
    int r,unit,n;
    cout<<"enter n:";
    cin>>n;
    int arr[n];
    cout<<"no. of rats: ";
    cin>>r;
    cout<<"enter unit:";
    cin>>unit;
    cout<<"enter array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"\n "<<calculate(r,unit,arr,n);
}