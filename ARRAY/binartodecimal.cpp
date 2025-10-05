// C++ program to convert binary to decimal
// when input is represented as binary string.


// #include<iostream>
// using namespace std;

// int binarytodecimal(int binnum){
    
//     int ans = 0, pow =1;
    
//     while(binnum > 0){
//         int rem = binnum %10;
//         ans += rem * pow;
//          binnum /= 10;
//          pow *=2;
         
//     }
//     return ans;
    
// }

//   int main(){
    
      
//       cout<< binarytodecimal(111)<<endl;
//        cout<< binarytodecimal(1010)<<endl;
//       cout<< binarytodecimal(100001)<<endl;

//       return 0;
      
//   }



// C++ program for Fizz Buzz Problem 
// by checking every integer individually 
// with string concatenation

#include <iostream>
#include <vector>
using namespace std;

vector<string> fizzBuzz(int n) {
    vector<string> res;
    for (int i = 1; i <= n; i++) {
		
        // Initialize an empty string for the current result
        string s = "";

        // Divides by 3, add Fizz
        if (i % 3 == 0)
            s.append("Fizz");

        // Divides by 5, add Buzz
        if (i % 5 == 0)
            s.append("Buzz");

        // Not divisible by 3 or 5, add the number
        if (s.empty())
            s.append(to_string(i));

        // Append the current res to the result vector
        res.push_back(s);
    }

    return res;
}

int main() {

    int n = 20;
    vector<string> res = fizzBuzz(n);

    for (const string &s : res)
        cout << s << " ";

    return 0;
}