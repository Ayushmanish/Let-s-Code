#include<bits/stdc++.h>
using namespace std;
void swap(){

}
int* rotate(){

}
int main(){
    int n,k;
    cin>>n;
    int arr[n],i,j;
    for(i=0;i<n;i++)
    cin>>arr[i];
    cout<<"enter the no. to rotate: ";
    cin>>k;
    int A[k],B[n-k];
    rotate();
    for(i=0;i<k;i++)
    A[i]=arr[i];

    for(j=k;j<n;j++)
    B[i++]=arr[j];

}