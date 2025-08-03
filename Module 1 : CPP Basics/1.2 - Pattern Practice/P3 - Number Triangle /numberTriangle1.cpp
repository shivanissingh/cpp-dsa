// Triangle Pattern 3 : Triangle of Numbers 1

#include <iostream>
using namespace std;

int main() {
    int n = 10; // Number of Rows
    cout << "\nTriangle of Numbers Pattern:\n";
    cout << "_____________________________\n\n";

    // Outer Loop = Number of Rows = n
    for(int i = 0 ; i < n ; i++) {
        // Inner Loop = Number of characters in each row = i+1
        for(int j = 0 ; j < i + 1 ; j++){
            cout << (i+1) << " " ; 
        }
        cout << endl ; // Move to the next line after each row
    }
}