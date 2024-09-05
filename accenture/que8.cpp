// //Inversion count in array
// #include<bits/stdc++.h>
// using namespace std;
// int getInvCount(int arr[],int n){
//     int count,j,k;
//     for(j=0;j<n;j++){
//         for(k=j+1;k<n;k++){
//             if(arr[j]>arr[k]){
//                 count++;
//             }
//         }
//     }
//     return count;
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++)
//     cin>>arr[i];
//     cout<<"the output is: "<<getInvCount(arr,n)<<endl;
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[]={2,5,4,1,8,6,9};
//     int i,j,temp,size;
//     size=sizeof(arr)/sizeof(arr[0]);
//     cout<<"size is: "<<size<<endl;
//     for(i=0;i<size-1;i++){
//         for(j=0;j<size-1-i;j++){
//             if(arr[j]>arr[j+1]){
//                 temp=arr[j+1];
//                 arr[j+1]=arr[j];
//                 arr[j]=temp;
//             }
//         }
//     }
//     for(i=0;i<size;i++)
//     cout<<" "<<arr[i];
// }