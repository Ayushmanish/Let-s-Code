// // Find the ASCII value of a character
// #include<iostream>
// using namespace std;
// int main(){
//     char c;
//     cin>>c;
//     cout<<"the ascii of "<<c<<" is: "<<int(c);
// }


// // Remove all vowels from the string
// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     string str;
//     getline(cin,str);
//     int i,size;
//     vector<char>vec;
//     for(i=0;i<str.length();i++){
//         if(isalpha(str[i]) || str[i]==' '){
//             if(tolower(str[i])=='a' || tolower(str[i])=='e' || tolower(str[i])=='i' || tolower(str[i])=='o' || tolower(str[i])=='u'){
//                 continue;
//             }
//             else
//             vec.push_back(str[i]);
//         }
//     }
//     for(i=0;i<vec.size();i++)
//     cout<<vec[i];
//     cout<<"\n"<<str.substr(3,8);
// }

//2nd approach for the above problem without taking any second array
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    int i,size;
    for(i=0;i<str.length();){
        if(tolower(str[i])=='a' || tolower(str[i])=='e' || tolower(str[i])=='i' || tolower(str[i])=='o' || tolower(str[i])=='u'){
            str=str.substr(0,i)+str.substr(i+1);
        }
        else
        i++;
    }
    cout<<"\nthe updated string is: "<<str;
}