// Triangle Pattern 11 : Inverted Character Triangle Pattern

#include <iostream>
using namespace std;

int main() {

    // Define number of lines or rows
    int n = 9 ;

    // Define Starting Character
    char ch = 'A' ;

    cout << "\nInverted Triangle Pattern for Characters :\n";
    cout << "___________________________________________\n\n";
    cout << "For n = " << n << " \n\n";

    // Outer Loop = Number of lines or rows = n
    for(int i = 0 ; i < n ; i++) {
        // Inner Loop 1 : Spaces - number of spaces to print in each line = i
        for(int j = 0 ; j < i ; j++) {
            cout << " " ; // Print spaces
        }

        // Inner Loop 2 : Characters - number of characters to print in each line = n-i
        for(int j = 0 ; j < n - i ; j++) {
            cout << ch  ; // Print Character
        }
        ch++ ; // Increment Character for next line
        cout << endl ; // Move to the Next Line
    }

    return 0 ;

}



