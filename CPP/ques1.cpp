// question :- Maximize count of pairs (i, j) from two arrays having element 
// from first array not exceeding that from second array

#include<iostream>
using namespace std;
int main(){
    int N,M;
    cin>>N>>M;
    int arr[N],brr[M];
    int i,j;
    for(i=0;i<N;i++){
        cin>>arr[i];
    }
    for(j=0;j<M;j++){
        cin>>brr[j];
    }
    int count=0;
    for(i=0;i<N;i++){
        for(j=0;j<M;j++){
            if(2*arr[i]<=brr[j])
            count++;
        }
    }
    cout<<"output:"<<count;
}