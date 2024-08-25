//Rearrange array in increasing-decreasing order
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n],i;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int j,temp;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(i=0;i<n/2;i++)
    cout<<" "<<arr[i];
    for(j=n-1;j>=n/2;j--)
    cout<<" "<<arr[j];
}



// //calculate the sum of all the elements of array
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n],i,sum=0;
//     for(i=0;i<n;i++)
//     {
//         cin>>arr[i];
//         sum+=arr[i];
//     }
//     cout<<"\nthe sum is: "<<sum;
// }