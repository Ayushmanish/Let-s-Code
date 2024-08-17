// Reduce the string to minimum length with the given operation
#include<iostream>
#include<string.h>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;
int main(){
    stack<char>str;
    string str1;
    cin>>str1;
    for(int i=0;i<str1.length();i++){
        if(str.empty()||(toupper(str1[i])!=toupper(str.top()))){
            str.push(str1[i]);
        }
        else{
            str.pop();
        }
    }
    string str2="";
    while(!str.empty()){
        str2+=str.top();
        str.pop();
    }
    reverse(str2.begin(),str2.end());
    cout<<"new array: "<<str2;
}