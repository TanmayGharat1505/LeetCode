// An ugly number is a positive integer whose prime factors are limited
// to 2, 3,and 5.
// Given an integer n , return true if n is an ugly number.

// #include<iostream>
// using namespace std;

// int main()
// {
//     int a, b, result;
//     int n;
//     cout<<"Enter the the size of array: "<<endl;
//     cin>>n;
//     int arr[n];
//     for(int i=1; i<=n; i++)
//     {
//         cout<<"Enter the "<<(i+1)<<" elements"<<endl;
//         cin>>arr[n];
//     }
//      cout<<"Enter the number: "<<endl;
//     cin>>a;
//     cout<<"Enter the number: "<<endl;
//     cin>>b;
//     if (a!=arr[n] || b!=arr[n])
//     {
//         result=a*b;
//         cout<<"Result = "<<a<<" X "<<b<<" is "<<result<<endl;
//         cout<<"True!."<<result<<" is an ugly number"<<endl;
//     }
//     else
//     {
//         cout<<"False";
//     }
//     return 0;
// }


#include<iostream>
using namespace std;
bool ugly_num(int n) {
        if(n<=0){
            return false;
        }
        while(n%2==0){
            n/=2;
        }
        while(n%3==0){
            n/=3;
        }
        while(n%5==0){
            n/=5;
        }
        return n==1;
    }
    
int main()
{
    int n;
    cout<<"Enter The Number :";
    cin>>n;
    if (ugly_num(n)) {
        cout << "It is an ugly number." << endl;
    } else {
        cout << "It is not an ugly number." << endl;
    }
   return 0;
}

