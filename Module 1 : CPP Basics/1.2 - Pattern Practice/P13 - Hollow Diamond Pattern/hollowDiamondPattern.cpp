// Triangle Pattern 13 : Hollow Diamond Pattern - Star * 

#include <iostream>
using namespace std ;

int main() {

    // Define Number of lines or rows
    int n = 9 ;

    cout << "\nHollow Diamond Pattern - Star :\n";
    cout << "___________________________________________\n\n";
    cout << "For n = " << n << " \n\n";

    // Divide the Diamond in 2 halves, Top and bottom
    // Top Half - consist of 2 Triangles
    // Top Half Outer Loop = Number of lines or rows = n
    for(int i = 0 ; i < n ; i++) {

        // Triangle 1 = Spaces + One Star
        // Inner Loop 1 = Number of spaces = n - i-1
        for(int j = 0 ; j < n - i - 1 ; j++) {
            cout << " " ; // Print Space
        }
        
        cout << "*" ; // Print one Star

        // Triangle 2 = Spaces + One Star from line i=1
        if(i!=0) {
            // Inner Loop 2 = Number of Spaces = Odd number of spaces = 2*i-1
            for(int j = 0 ; j < 2*i-1; j++) {
                cout << " " ; // Print odd spaces
            }
            cout << "*" ; // Print one Star

        }
    
        cout << endl ; // Move to next line

    }

    // cout << endl ; // Move to next line for Bottom Half

    // Bottom Half - consist of 2 Triangles
    // Bottom Half Outer Loop = number of lines or rows = n - 1
    for(int i = 0 ; i < n - 1 ; i++) {

        // Triangle 1 = Space + One Star
        // Inner Loop 1 = Number of Spaces in each line or row = i+1
        for(int j = 0 ; j < i + 1 ; j++) {
            cout << " " ; // Print Space
        }

        cout << "*" ; // Print one Star

        // Exclude last line of bottom half
        if(i!=n-2) {
            // Triangle 2 = Spaces + One star
            // Inner Loop 2 = Number of Spaces in each line or row = 2*(n-i)-5
            for(int j = 0 ; j < 2*(n-i)-5 ; j++) {
                cout << " " ; // Print spaces
            }

        cout << "*" ; // Print one Star

        }

        cout << endl ; // Move to next line

    } 

    return 0 ; 

}