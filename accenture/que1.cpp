#include<iostream>
using namespace std;
int OperationsBinaryString(string str){
    if(str.empty())
    return -1;
    int i,result;
    result=str[0]-'0';//ascii of 0 is 48.
    for(i=1;i<str.size();i+=2){
        if(str[i]=='A')
        result=result & (str[i+1]-'0');
        else if(str[i]=='B')
        result=result | (str[i+1]-'0');
        else
        result=result ^ (str[i+1]-'0');
    }
    return result;
}
int main(){
    string str;
    getline(cin,str);
    char *s=&str[0];
    cout<<"the result is: "<<OperationsBinaryString(s);
}