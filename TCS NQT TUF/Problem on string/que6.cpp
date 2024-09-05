// Calculate frequency of characters in a string
#include<iostream>
#include<vector>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    int i,j;
    vector<bool> isVisited(false);
    for(i=0;i<str.length();i++){
        if(isVisited[i]==){
            continue;
        }
        for(j=i+1;j<str.length();j++){
            if(str[i]==str[j])
            count++;
        }
    }
}