// //Check if a given string is palindrome or not
// #include<iostream>
// using namespace std;
// int main(){
//     string str;
//     getline(cin,str);//string input with spaces
//     int i,j,size,flag=0;
//     size=str.length();
//     for(i=0,j=size-1;i<=j;i++,j--){
//         if(tolower(str[i])==tolower(str[j]))
//         continue;
//         else
//         {
//             flag=1;
//             break;
//         }
//     }
//     if(flag==0)
//     cout<<"\nyes palindrome";
//     else
//     cout<<"\nnot palindrome";
// }



//Count number of vowels, consonants, spaces in String
#include<iostream>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    int size,i,vowel=0,consonent=0,spaces=0;
    size=str.length();
    for(i=0;i<size;i++){
        if(isalpha(str[i])){
            if(tolower(str[i])=='a' || tolower(str[i])=='e' || tolower(str[i])=='i' || tolower(str[i])=='o' || tolower(str[i])=='u'){
                vowel++;
            }
            else
            consonent++;
        }
        else if (str[i]==' ')
        {
            spaces++;
        }
        
    }
    cout<<"\nno. of vowels: "<<vowel;
    cout<<"\nno. of consonents: "<<consonent;
    cout<<"\nno. of white spaces: "<<spaces;
}