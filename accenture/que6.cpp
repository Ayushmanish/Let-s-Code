//print first k words in a string
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cout<<"\nenter the string: ";
    getline(cin,str);
    if(str.empty()){
        cout<<"\nnull";
    }
    int count=0,words;
    cout<<"enter number of words:";
    cin>>words;
    int i,j,flag=0;
    for(i=0;i<str.length();i++){
        if(str[i]==' '){
            count++;
            if(count==words)
            {
                flag=1;   
                break;  
            }    
            else
            continue;   
            }
    }
    if(flag==1){
        for(j=0;j<i;j++){
            cout<<""<<str[j];
        }
    }
    else{
        cout<<""<<str;
    }
}
