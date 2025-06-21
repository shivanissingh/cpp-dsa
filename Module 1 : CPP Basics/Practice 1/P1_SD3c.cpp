// Module 1 : P1 - SD3c :- Prime Numbers using Conditional Statements and Loops
// Created by : Shivani Singh | linkedin.com/in/shivani-ssingh

#include <iostream>
using namespace std ;

int main () {

    cout << "\n********** Module 1 : C++ Basics **********" << endl ;
    cout << "Created by : Shivani Singh | linkedin.com/in/shivani-ssingh" << endl ;
    cout << "__________________________________________________\n" << endl ;

    // //To find whether a Number is Prime or Not 
    
    // //Logic 1 :- Using for loop & Bool
    // cout << "## Prime Number Checker - Using for loop & bool ##" << endl ;
    // cout << "__________________________________________________\n" << endl ;

    // int num ;
    // cout << "Enter a Number : " ;
    // cin >> num ;
    // cout << "__________________________________________________\n" << endl ;
    // cout << "Here's the Result 👇" << endl ;
    // cout << "\n--------------------" << endl ;
    // bool isPrime = true ;
    // // for loop
    // for (int i = 2 ; i <= num - 1 ; i++){
    //     // if
    //     if (num % i == 0) {
    //         isPrime = false ;
    //         break ;
    //     }
        
    // }

    // if (isPrime == true) {
    //     cout << "Yayy 🥳\nThe Number " << num << " is a Prime Number." << endl ;
    // } else {
    //     cout << "Oops 😬\n The Number " << num << " is not a Prime Number." << endl ;
    // }
    // cout << "__________________________________________________\n" << endl ;



    
    // // Logic 2 :- Using without Bool
    // cout << "## Prime Number Checker - Without using Bool ##" << endl ;
    // cout << "__________________________________________________\n" << endl ;

    // // Taking Input from the User 
    // int num ;
    // cout << "Enter a Number : " ;
    // cin >> num ;
    // cout << "__________________________________________________\n" << endl ;

    // int i;
    // // for loop 
    // // We will iterate from 2 to num-1 , because the num will obviously divisible by 1 & itself.
    // for (i = 2 ; i <= num-1 ; i++ ){

    //     if(num % i == 0) {
    //         cout << "Oops 😬\nThe Number " << num << " is not a Prime Number" << endl ;
    //         cout << "__________________________________________________\n" << endl ;
    //         break;
    //     }
        
    // }
    // if(i==num) {
    //     cout << "Yayy 🥳\nThe Number " << num << " is a Prime Number" << endl ;
    //     cout << "__________________________________________________\n" << endl ;
    // }

    

//     // Logic 3 :- Using while loop
//     cout << "## Prime Number Checker - Using while loop ##" << endl ;
//     cout << "__________________________________________________\n" << endl ;

//     // Taking Input from the User
//     int num;
//     cout << "Enter a Number :- " ;
//     cin >> num ;
//    cout << "__________________________________________________\n" << endl ;

//     int i = 2 ;
//     // while loop
//     while (i <= num - 1) {
//         if (num % i == 0) {
//             cout << "Oops 😬\nThe Number " << num << " is not a Prime Number." << endl ;
//             break ;
//         }
//         i++ ;
//     }

//     if (i == num) {
//         cout << "Yayy 🥳\nThe Number " << num << " is a Prime Number" << endl ;
//     }

//     cout << "__________________________________________________\n" << endl ;



    // // Logic 4.1 :- Better Approach with Bool
    // cout << "## Prime Number Checker - Better Approach with Bool ##" << endl ;
    // cout << "__________________________________________________\n" << endl ;

    // // Taking Input from the User
    // int num ;
    // cout << "Enter a Number :- " ;
    // cin >> num ;

    // cout << "__________________________________________________\n" << endl ;

    // bool isPrime = true ;

    // // for loop
    // for (int i = 2 ; i * i <= num ; i++){
    //     if (num %  i == 0) {
    //         isPrime = false ;
    //         break ;
    //     }
    // }

    // if (isPrime == true) {
    //     cout << "Yayy 🥳\nThe Number " << num << " is a Prime Number." << endl ;
    // } else {
    //     cout << "Oops 😬\nThe Number " << num << " is not a Prime Number." << endl ;
    // }

    // cout << "__________________________________________________\n" << endl ;



    // Logic 4.2 :- Better Approach without Bool
    cout << "## Prime Number Checker - Better Approach without Bool ##" << endl ;
    cout << "__________________________________________________\n" << endl ;

    // Taking Input from the User
    int num ;
    cout << "Enter a Number :- " ;
    cin >> num ;

    cout << "__________________________________________________\n" << endl ;

    int i = 2 ;
    // for loop
    for (int i = 2 ; i * i <= num ; i++) {
        if (num % i == 0) {
             cout << "Oops 😬\nThe Number " << num << " is not a Prime Number." << endl ;
             cout << "__________________________________________________\n" << endl ;

             return 0 ;
        }
    }

    cout << "Yayy 🥳\nThe Number " << num << " is a Prime Number." << endl ;
    

    cout << "__________________________________________________\n" << endl ;


    return 0;
}