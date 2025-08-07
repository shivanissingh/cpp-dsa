// Triangle Pattern 14 : Butterfly Pattern

#include <iostream>
using namespace std;

int main() {
    // Define number of lines or rows 
    int n = 9 ;

    cout << "\nButterfly Pattern - Star :\n";
    cout << "___________________________________________\n\n";
    cout << "For n = " << n << " \n\n";

    // Divide Butterfly into Top & Bottom
    // Top Half
    // Outer Loop 1 = number of lines or rows = n
    for(int i = 0 ; i < n ; i++) {

        // Triangle 1 
        // Inner Loop 1 = Number of stars in each line or row = i+1
        for(int j = 0 ; j < i + 1 ; j++) {
            cout << "*" ; // Print star
        }

        // Triangle 2
        // Inner Loop 2a = Number of Spaces in each line or row = Even = 2*(n-i-1)
        for(int j = 0 ; j < 2*(n-i-1) ; j++) {
            cout << " " ; // Print Space
        }

        // Inner Loop 2b = Number of Stars in each line or row = i+1 
        for(int j = 0 ; j < i+1 ; j++) {
            cout << "*" ; // Print star
        }

        cout << endl ; // Move to the next line

    }

    // Bottom Half
    // Outer Loop 2 = number of lines or rows = n
    for(int i = 0 ; i < n ; i++) {
        // Triangle 1
        // Inner Loop 1 = Number of Stars in each line or row = n
        for(int j = 0 ; j < n - i ; j++) {
            cout << "*" ; // Print star
        }

        // Triangle 2 
        // Inner Loop 2a = Number of Spaces in each line or row = 2i
        for(int j = 0 ; j < 2*i ; j++) {
            cout << " " ; // Print Space
        }

        // Inner Loop 2b = Number of Stars in ecah line or row = n-1
        for(int j = 0; j < n - i ; j++) {
            cout << "*" ; // Print star
        }

        cout << endl ; // Move to the next line

    }

    return 0 ;

}