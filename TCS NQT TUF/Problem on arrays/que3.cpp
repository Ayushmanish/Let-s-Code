// //reversing an array
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n],i;
//     for(i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int j,temp;
//     for(i=0,j=n-1;i<j;i++,j--){
//         temp=arr[j];
//         arr[j]=arr[i];
//         arr[i]=temp;
//     }
//     for(i=0;i<n;i++)
//     cout<<" "<<arr[i];
// }

//Count frequency of each element in the array
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n],i;
    for(i=0;i<n;i++)
    cin>>arr[i];
    vector<bool> visited(n,false);
    for(i=0;i<n;i++){
        if(visited[i]==true)
        continue;

        int count=1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                visited[j] = true;
                count++;
            }
        }
        cout<<"\nfrequency of "<<arr[i]<<" is: "<<count;
    }
}