// Triangle Pattern 5 : Triangle of Numbers 2

#include <iostream>
using namespace std;

int ownApproach() {
    // Own Approach
    int n = 10 ; // Number of Rows
    cout << "\nTriangle of Numbers Pattern :\n";
    cout << "_____________________________\n\n";
    cout << "\nOwn Approach :\n";

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
    return 0 ;
}

int idealApproach() {
    // Ideal Approach
    int n = 10 ; // Number of Rows
    cout << "_____________________________\n\n";
    cout << "\nIdeal Approach :\n";

    // Outer Loop = Number of Rows = n
    for(int i = 0 ; i < n ; i++) {
        // Inner Loop = Number of characters in each row = i+1
        // Instead of using some variable to print, we will use j directly
        // I - We can start from j=0 and run the loop until j<i+1 & print j+1
        // II - We can also start from j=1, run the loop until j<=i+1 and print j
        // III - We can also start form j=1, run the loop until j<i+2 and print j

        for(int j = 0 ; j < i + 1 ; j++){
            cout << j+1 << " "; // Print the current number in the row 
        }   
        cout << endl; // Move to the next line after each row
    }
    return 0 ;
}

int main() {
    ownApproach(); // Call the own approach function
    idealApproach(); // Call the ideal approach function
    return 0 ;
}