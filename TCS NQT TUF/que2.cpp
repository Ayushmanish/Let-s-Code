//second largest and second smallest
#include<bits/stdc++.h>
using namespace std;

//first approach
// vector<int> getSecondOrderElements(int n, vector<int> a) {
//     int i,j,temp;
//     for(i=0;i<n-1;i++){
//         for(j=0;j<n-1-i;j++){
//             if(a[j]>a[j+1]){
//                 temp=a[j+1];
//                 a[j+1]=a[j];
//                 a[j]=temp;
//             }
//         }
//     }
//     vector<int>b;
//     b.push_back(a[n-2]);
//     b.push_back(a[1]);
//     return b;
// }

//second approach
vector<int> getSecondOrderElements(int n, vector<int> a) {
    int first,second;
    first=0;
    second=-1;
    int i,j;
    for(i=1;i<n;i++){
        if(a[i]>a[first]){
            second=first;
            first=i;
        }
    }
    int third,fourth;
    third=0;
    fourth=1;
    for(j=1;j<n;j++){
        if(a[j]<a[third]){
            fourth=third;
            third=j;
        }
    }
    vector<int>b;
    b.push_back(a[second]);
    b.push_back(a[fourth]);
    return b;
}
int main(){
    vector<int> a;
    int n,t;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>t;
        a.push_back(t);
    }
    vector<int> b;
    b=getSecondOrderElements(n,a);
    int i;
    for(i=0;i<b.size();i++){
        cout<<" "<<b[i];
    }
}
