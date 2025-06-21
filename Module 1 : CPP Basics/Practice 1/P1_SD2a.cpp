// Module 1 : P1 - SD2 :- Type Conversion | Type Casting 
// Created by : Shivani Singh | linkedin.com/in/shivani-ssingh
#include <iostream>
using namespace std ;

int main () {

    // Type Conversion
    cout << "\n********** Module 1 : C++ Basics **********" << endl ;
    cout << "Created by : Shivani Singh | linkedin.com/in/shivani-ssingh" << endl ;
    cout << "__________________________________________________\n" << endl ;
    
    cout << "1. Type Conversion \n" << endl ;
    cout << " # Converting \"int\" into \"float\"" << endl; 
    int num1 ;
    cout << "Enter a int Number :" ;
    cin >> num1 ;
    float value1 = num1;
    cout << "Type Conversion of Number :" << value1 << endl ;

    cout << "\n# Converting \"char\" into \"int\" " << endl ;
    char character;
    cout << "Enter a Character : " ;
    cin >> character;
    int value2 = character ;
    cout << "Type Conversion of Character : " << value2 << endl ;

    //Type Casting
    cout << "__________________________________________________\n" << endl ;

    float num2 ;
    cout << "2. Type Casting \n" << endl ;
    cout << "# Converting \"float \" and \"int \" " << endl ;
    cout << "Enter a Float Number : " ;
    cin >> num2 ;
    int value3 = (int)num2 ;
    cout << "Type Casting of Number : " << value3 << endl;
    cout << "__________________________________________________\n" << endl ;

    return 0 ;
}