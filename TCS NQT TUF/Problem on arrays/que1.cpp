//Find the smallest element and largest element in an array without sorting
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"\nenter the size:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int min=arr[0];
    for(int i=1;i<n;i++){
        if(min>arr[i])
        min=arr[i];
    }
    cout<<"\nsmallest: "<<min;

    int max=arr[0];
    for(int i=1;i<n;i++){
        if(max<arr[i])
        max=arr[i];
    }
    cout<<"\nlargest: "<<max;
}