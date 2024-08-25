// //Average of all the elements in the array
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n],i;
//     double sum=0;
//     for(i=0;i<n;i++)
//     {
//         cin>>arr[i];
//         sum+=arr[i];
//     }
//     double avg=(sum/n);
//     cout<<" the average is: "<<avg;
// }


//Find Median of the given Array
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    if(n%2!=0){
        int medIndex=(n-1)/2;
        cout<<"the median is: "<<arr[medIndex];
    }
    else{
        int mid1 = n / 2;
        int mid2 = mid1 - 1;
        double median = (arr[mid1] + arr[mid2]) / 2.0; // Ensure floating-point division
        cout << "The median is: " << median << endl;
    }
}