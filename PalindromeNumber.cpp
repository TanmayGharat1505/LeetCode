#include<iostream>
using namespace std;

int main()
{
    char string[100];
    int length;
    cout<<"Enter the Number: ";
    cin>>string;
    
    length= strlen(string);
    for(int i=0; i < length; i++)
    {
        if(string[i] != string[length-i- 1])
        {
            cout<<string<<" Is not a palindrome Number!!!"<<endl;
            cout<<"False";
            break;
        }
        else
        {
            cout<<string<<" Is a Palindrome Number !!!"<<endl;
            cout<<"True";
            break;
        }
    }
    return 0;
}


// #include<iostream>
// using namespace std;

// class Solution
// {
//     public:
//     bool isPalindrome(int x) 
//     {
//         int reversedx=0, Originalnum=x;
//         while( x > 0)
//         {
//             reversedx = reversedx * 10 + x % 10; x /=10;
//         }     
//         return Originalnum == reversedx;   
//     }
// };