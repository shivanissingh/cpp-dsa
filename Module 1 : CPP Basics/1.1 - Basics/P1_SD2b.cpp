// Module 1 : P1 - SD2 :- Operators
// Created by : Shivani Singh | linkedin.com/in/shivani-ssingh
#include <iostream>
using namespace std ;

int main () {

    //Operators in C++
    cout << "\n********** Module 1 : C++ Basics **********" << endl ;
    cout << "Created by : Shivani Singh | linkedin.com/in/shivani-ssingh" << endl ;
    cout << "________________________________________ \n" ;

    cout << "\n********** Operators in C++ **********" << endl ;
    cout << "________________________________________ \n" ;
    int n1, n2 ;
    //Taking Num1 & Num2 as input
    cout << "Enter Number 1 : " ;
    cin >> n1 ;
    cout << "Enter Number 2 : " ;
    cin >> n2 ;
    cout << "________________________________________ \n" ;
    cout << "________________________________________ \n" ;

    //Addition
    cout << "\n1. Addition\n" ;
    int sum = n1 + n2 ;
    cout << "Addition of " << n1 << " and " << n2 << " : " << sum << endl ;
    cout << "________________________________________ \n" ;

    //Subtraction
    cout << "\n2. Subtraction\n" ;
    int sub = n1 - n2 ;
    cout << "Subtraction of " << n1 << " and " << n2 << " : " << sub << endl ;
    cout << "________________________________________ \n" ;

    //Multiplication
    cout << "\n3. Multiplication \n" ;
    int mul = n1 * n2 ;
    cout << "Multiplication of " << n1 << " and " << n2 << " : " << mul << endl ;
    cout << "________________________________________ \n" ;

    //Division
    cout << "\n4. Division\n" ;
    int div = n1 / n2 ;
    cout << "Division of " << n1 << " and " << n2 << " : " << div << endl ;
    cout << "________________________________________ \n" ;

    //Modulus
    cout << "\n5. Modulus \n" ;
    int mod = n1 % n2 ;
    cout << "Modulus of " << n1 << " and " << n2 << " : " << mod << endl ;
    cout << "________________________________________ \n" ;

    //Increment
    cout << "\n6. Increment\n" ;

    //Pre-increment
    int o1, o2 ;
    o1 = n1 ;
    o2 = n2;
    int preInc1 = ++o1 ;
    int preInc2 = ++o2 ;
    cout << "Pre-increment of " << n1 << " : " << preInc1 << endl ;
    cout << "Pre-increment of " << n2 << " : " << preInc2 << endl ;
    cout << "\nFor Checking Change : " << endl ;
    cout << "Original Number 1 " << n1 << " Changes to - " << o1 << endl ;
    cout << "Original Number 2 " << n2 << " Changes to - " << o2 << endl ;
    cout << "\n" ;
    //Post-increment
    o1 = n1 ;
    o2 = n2 ;
    int postInc1 = o1++ ;
    int postInc2 = o2++ ;
    cout << "Post-increment of " << n1 << " : " << postInc1 << endl ;
    cout << "Post-increment of " << n2 << " : " << postInc2 << endl ;
    cout << "\nFor Checking Change : " << endl ;
    cout << "Original Number 1 " << n1 << " Changes to - " << o1 << endl ;
    cout << "Original Number 2 " << n2 << " Changes to - " << o2 << endl ;
    cout << "\n" ;
    cout << "________________________________________ \n" ;

    //Decrement
    cout << "\n7. Decrement\n" ;

    //Pre-decrement
    o1 = n1 ;
    o2 = n2 ;
    int preDec1 = --o1 ;
    int preDec2 = --o2 ;
    cout << "Pre-decrement of " << n1 << " : " << preDec1 << endl ;
    cout << "Pre-decrement of " << n2 << " : " << preDec2 << endl ;
    cout << "\nFor Checking Change : " << endl ;
    cout << "Original Number 1 " << n1 << " Changes to - " << o1 << endl ;
    cout << "Original Number 2 " << n2 << " Changes to - " << o2 << endl ;
    cout << "\n" ;

    //Post-decrement
    o1 = n1;
    o2 = n2 ;
    int postDec1 = o1-- ;
    int postDec2 = o2--;
    cout << "Post-decrement of " << n1 << " : " << postDec1 << endl ;
    cout << "Post-decrement of " << n2 << " : " << postDec2 << endl ;
    cout << "\nFor Checking Change : " << endl ;
    cout << "Original Number 1 " << n1 << " Changes to - " << o1 << endl ;
    cout << "Original Number 2 " << n2 << " Changes to - " << o2 << endl ;
    cout << "\n" ;
    cout << "________________________________________ \n" ;

    return 0 ;
}