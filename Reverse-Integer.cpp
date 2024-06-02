// #include<iostream>
// using namespace std;

class Solution {
public:
    int reverse(int x) {
        int rev_num=0;
        while(x > 0)
        {
            rev_num= rev_num * 10 + rev_num % 10;
            x = x / 10;
        }
        return rev_num;
    }
};

// Getting Runtime error in the above code !!!



// class Solution {
// public:
//     int reverse(int x) {
//         long long rev_num = 0; // Use long long to avoid integer overflow
//         while (x != 0) {
//             rev_num = rev_num * 10 + x % 10;
//             if (rev_num > INT_MAX || rev_num < INT_MIN) // Check for overflow
//                 return 0;
//             x /= 10;
//         }
//         return rev_num;
//     }
// };
