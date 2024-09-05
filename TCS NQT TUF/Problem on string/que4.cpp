//reverse a string with three different approaches

// //approach-1-stack
// #include<iostream>
// #include<stack>
// using namespace std;
// int main(){
//     stack<char> str;
//     string s;
//     getline(cin,s);
//     int i;
//     for(i=0;i<s.length();i++)
//     str.push(s[i]);
//     while(!str.empty())
//     {
//         cout<<""<<str.top();
//         str.pop();
//     }
// }

// //approach-2- two pointer
// #include<iostream>
// using namespace std;
// int main(){
//     string str;
//     getline(cin,str);
//     int i,j,size;
//     char c;
//     size=str.length();
//     for(i=0,j=size-1;i<=j;i++,j--){
//         c=str[j];
//         str[j]=str[i];
//         str[i]=c;
//     }
//     cout<<"the reversed string is: "<<str;
// }

//approach-3- using built-in function reverse
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    reverse(str.begin(),str.end());
    cout<<"the reversed string is: "<<str;
}