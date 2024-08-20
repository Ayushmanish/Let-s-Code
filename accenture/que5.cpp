#include<bits/stdc++.h>
#include<string>
using namespace std;
string decitoNBase (int n, int num){
    string res="";
    int quotient=num/n;
    vector<int> vec;
    vec.push_back(num%n);
    while(quotient!=0){
        vec.push_back(quotient%n);
        quotient/=n;
    }
    for(int i=0;i<vec.size();i++){
        if(vec[i]>9)
        res=(char)(vec[i]-10+65)+res;
        else
        res=to_string(vec[i])+res;
    }
    return res;
}
int main(){
    int n,num;
    cout<<"\nenter n and num:";
    cin>>n>>num;
    cout<<"\nresult is: "<<decitoNBase(n,num);
}

//the code is perfectly running, when checked on the online compiler.
//hencee no issue with the code.