// Triangle Pattern 10 : Inverted Number Triangle

#include <iostream>
using namespace std ;

int main () {

    // Define Number or lines or rows
    int n = 9 ;

    cout << "\nInverted Triangle Pattern for Numbers :\n";
    cout << "___________________________________________\n\n";
    cout << "For n = " << n << " \n\n";

    // Outer Loop = Number of Rows = n
    for(int i = 0 ; i < n ; i++) {
        // We can see that each line in pattern consists SPACE + NUMBERS 
        // So we will print SPACE first and then NUMBERS
        // Inner Loop = number of spaces in each row = i 
        for(int j = 0 ; j < i ; j++) {
            cout << " " ; // Print SPACE
        }

        // Inner Loop = Number of Characters in each row = n - i
        for(int j = 0 ; j < n - i ; j++) {
            cout << i+1 ; // Print Number
        }
        cout << endl ;
    }
    return 0 ; 
}