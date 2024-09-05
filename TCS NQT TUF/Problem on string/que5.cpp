// //Remove brackets from an algebraic expression
// #include<iostream>
// using namespace std;
// int main(){
//     string str;
//     getline(cin,str);
//     int i;
//     for(i=0;i<str.length();){
//         if(str[i]=='(' || str[i]==')'){
//             str=str.substr(0,i)+str.substr(i+1);
//         }
//         else
//         i++;
//     }
//     cout<<"the updated string is: "<<str;
// }



// //Sum of the Numbers in a String(multiple consecutive digits are considered as one number)
// #include <iostream>
// #include <stack>
// using namespace std;
// int main()
// {
//     string str;
//     getline(cin,str);
//     int i,size,num;
//     size=str.length();
//     stack<int> stk;
//     for(i=0;i<size;){
//         if(isdigit(str[i])){
//             int num1=0;
//             X:
//             num=(int)str[i]-48;
//             num1=num1*10+num;
//             if((i+1)<size && isdigit(str[i+1])){
//                 i++;
//                 goto X;
//             }
//             else{
//                stk.push(num1);
//                i++;
//             }
//         }
//         else
//         i++;
//     }
//     int sum=0;
//     while(!stk.empty()){
//         sum=sum+stk.top();
//         stk.pop();
//     }
//     cout<<"sum is: "<<sum; 
// }




//Capitalize first and last character of each word of a string
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    int i,size;
    size=str.length();
    for(i=0;i<str.length();i++){
        if(str[i]==' '){
            str[i+1]=toupper(str[i+1]);
            str[i-1]=toupper(str[i-1]);
        }
    }
    str[0]=toupper(str[0]);
    str[size-1]=toupper(str[size-1]);
    cout<<"\n"<<str;
}