// Triangle Patter 4 : Triangle of Characters

#include <iostream>
using namespace std;

int main() {
    int n = 4 ; // Number of Rows

    // Define starting character
    char ch = 'A'; // Starting Character
    cout << "\nTriangle of Characters Pattern:\n";
    cout << "_____________________________\n\n";

    // Outer Loop = Number of Rows = n
    for(int i = 0 ; i < n ; i++) {
        // Inner Loop = Number of characters in each row = i+1
        for(int j = 0 ; j < i + 1 ; j++){
            cout << ch << " ";
        }
        ch++ ; // Increment the character for the next row
        cout << endl ; // Move to the next line after each row
    }
    
}