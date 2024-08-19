#include<bits/stdc++.h>
using namespace std;
    int productSmallestPair(int *array,int n,int sum){
        if(*array==NULL || n<2)
        return -1;
        int i,j,t;
        for(i=0;i<n-1;i++){   //bubble sorting
            for(j=0;j<n-1-i;j++){
                if(*(array+j) > *(array+j+1)){
                    t=*(array+j);
                    *(array+j)=*(array+j+1);
                    *(array+j+1)=t;
                }
            }
        }
        if(*(array+0)+*(array+1)<=sum)
        return (*(array+0) * *(array+1));
        else
        return 0;
    }
int main(){
    int n,sum;
    cout<<"enter n: ";
    cin>>n;
    cout<<"enter sum:";
    cin>>sum;
    int i,arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"\nthe resultt is:"<<productSmallestPair(arr,n,sum);
}