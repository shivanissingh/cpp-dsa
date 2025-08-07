// Triangle Pattern 12 : Pyramid Number Pattern

#include <iostream>
using namespace std ;

int main() {

    // Define Number of lines or rows
    int n = 9 ; 

    cout << "\nPyramid Pattern for Numbers :\n";
    cout << "___________________________________________\n\n";
    cout << "For n = " << n << " \n\n";

    // Outer Loop = Number of lines or rows = n
    for(int i = 0 ; i < n ; i++) {

        // Inner Loop 1 : Spaces - number of spaces in each line = n - i-1
        for(int j = 0 ; j < n - i - 1 ; j++) {
            cout << " " ; // Print Spaces
        }

        // Define Starting Number 
        //int num = 1 ; No need of a variable, you can directly print number using j
        // Inner Loop 2 : Numbers - number of characters to print in each row = i+1
        for(int j = 0 ; j < i + 1 ; j++) {
            cout << j + 1 ; // Print Number
        }

        // Inner Loop 3 : Reverse Numbers - number of character to print in each row = i
        for(int j = i ; j > 0 ; j--) {
            cout << j ; // Print Reverse Number
        }

        cout << endl ; // Move to the Next Line
    } 

    return 0 ;
}