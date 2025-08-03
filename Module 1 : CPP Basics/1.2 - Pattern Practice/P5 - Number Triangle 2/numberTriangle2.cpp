// Triangle Pattern 5 : Triangle of Numbers 2

#include <iostream>
using namespace std;

int main() {
    int n = 10 ; // Number of Rows
    cout << "\nTriangle of Numbers Pattern:\n";
    cout << "_____________________________\n\n";

    // Outer Loop = Number of Rows = n
    for(int i = 0 ; i < n ; i++) {
        
        // Define the Starting Number
        int num = 1 ; 

        // Inner Loop = Number of characters in each row = i+1
        for(int j = 0 ; j < i + 1 ; j++){
            cout << num << " "; // Print the current number
            num++; // Increment the number for the next character in the row
        }
        cout << endl; // Move to the next line after each row
    }
}