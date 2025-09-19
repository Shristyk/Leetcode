#include<iostream>
using namespace std;
// if condition use 
// int main(){
//     int number = 10;
//     if(number > 0){
//         cout <<"statement inside if block" << endl;
//     }
//         cout << "statement outside if block" << endl;

//         return 0;


//    // for loop condition 


//     for(int i =0; i<5; i=i+1){
//         cout << "swarnlata =" << i << endl;
//     }
//     return 0;

// //square pattern

//     int n = 4;
//     // outer loop traverse from 0 to n-1
//     for(int row = 0; row < n; row = row +1){
//         //inner loop traverse from 0 to n-1
//         for(int col = 0; col < n; col = col +1){
//             cout <<"*";
//         }
//         cout << endl;
//     }
//     return 0;

//     //rectangular pattern
    
//         int n = 3;
//         //outer loop traverse from 0 to n-1
//         for(int row = 0; row < n; row = row + 1){
//             // inner loop traverse from 0 to n+1
//             for(int col = 0; col < (n+2); col =col +1){
//                 cout << "*";
//             }
//             cout << endl;
//         }
    
//     return 0;

//     // hollow rectangule pattern

//     int n = 5;
     
//     // outer loop traverse from 0 to n-1
//     for(int row = 0; row < n; row = row + 1){
//         // inner loop
//         for(int col = 0; col < n; col = col + 1){
//             if(row == 0 || row == n-1){
//                 cout << "*";
//             }
//             else{
//                 if(col == 0 || col == n-1){
//                     cout << "*";
//                 }
//                 else{
//                     cout << " ";
//                 }
//             }
//         }
//         cout << endl;
//     }
//     return 0;
        
//     // Half pyramid pattern

//     int n = 5;

//     //outer loop traverse from 0 to n-1
//     for(int row =0; row < n; row = row +1){
//         for(int col = 0; col < (row +1); col = col +1){
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;

//     // inverted half pyramid pattern

//     int n = 5;

//     //outer loop traverse from 0 to n-1
//     for(int row =0; row < n; row = row +1){
//         for(int col = 0; col < (n-row); col = col +1){
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;  
    
//     //Numerical half pyramid pattern

//     int n = 5;

//     // outer loop 
//     for(int row = 0; row < n; row = row +1){
//         // inner loop
//         for(int col = 0; col < (row +1); col = col + 1){
//             cout << col+1 << " ";

//         }
//         cout << endl;

//     }
//     return 0;

//     // inverted numerical half pyramid pattern

//     int n = 5;

//     // outer loop 
//     for(int row = 0; row < n; row = row +1){
//         // inner loop
//         for(int col = 0; col < (n -row); col = col + 1){
//             cout << col+1 << " ";

//         }
//         cout << endl;
//     }
//     return 0;


// }