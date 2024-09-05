// // Remove all spaces from a string
// #include<iostream>
// using namespace std;
// int main(){
//     string str;
//     getline(cin,str);
//     int i,size;
//     for(i=0;i<str.length();){
//         if(str[i]==' '){
//             str=str.substr(0,i)+str.substr(i+1);
//         }
//         else
//         i++;
//     }
//     cout<<"\nthe string without spaces is:"<<str;
// }

//Remove characters from a string except alphabets
#include<iostream>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    int i;
    for(i=0;i<str.length();){
        if(!isalpha(str[i])){
            str=str.substr(0,i)+str.substr(i+1);
        }
        else
        i++;
    }
    cout<<"the updated string is: "<<str;
}