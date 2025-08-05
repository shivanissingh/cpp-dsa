// Triangle Pattern 7 : Reverse Character Triangle Pattern

#include <iostream>
using namespace std ;


int ownApproach() {
    // Define number of lines or rows
    int n = 10 ;

    cout << "\nTriangle of Reverse Characters Pattern :\n";
    cout << "___________________________________________\n\n";
    cout << "#     Own Approach     #\n\n";

        // Outer Loop = Number of lines or rows = n
    for(int i = 0 ; i < n ; i++) {
        char ch = 'A' + i ;
        // Inner Loop = Number of characters in each row = i+1
        for(int j = 0 ; j < i + 1 ; j++) {
            cout << ch << " "; // Print ch
            ch--; // Decrement ch
        }
        cout << endl ;
    }
    return 0 ;
}

int idealApproach() {
    // Define number of lines or rows
    int n = 10 ;

    cout << "\nTriangle of Reverse Characters Pattern :\n";
    cout << "___________________________________________\n\n";
    cout << "#     Ideal Approach     #\n\n";

    // Outer Loop = Number of lines or rows = n
    for(int i = 0 ; i < n ; i++) {
        // Inner Loop = Number of characters in each row = i+1
        for(int j = 0 ; j <= i ; j++) {
            cout << char('A' + i - j) << " "; // Print ch
        }
        cout << endl ;

    }
    return 0 ;
}


int main() {
    ownApproach() ;
    idealApproach() ;
    return 0 ;
}