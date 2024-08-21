//Bulbs question
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>vec;
    int i,t,n;
    cout<<"enter n:";
    cin>>n;
    for(i=0;i<n;i++){
        cin>>t;
        vec.push_back(t);
    }
    int count=0;
    for(i=0;i<vec.size();i++){
        if(vec[i]==0){
            count++;
            vec[i]=1;
            for(t=i+1;t<vec.size();t++){
                if(vec[t]==0)
                vec[t]=1;
                else
                vec[t]=0;
            }
        }
    }
    cout<<"\noutput: "<<count;
}