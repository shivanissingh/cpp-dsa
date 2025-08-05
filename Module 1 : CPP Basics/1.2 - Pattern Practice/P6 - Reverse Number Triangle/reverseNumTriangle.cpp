// Triangle Pattern 6 : Reverse Number Triangle

#include <iostream>
using namespace std;

int main() {

    // Define Number of lines or rows
    int n = 9 ;

    cout << "\nTriangle of Reverse Numbers Pattern :\n";
    cout << "___________________________________________\n\n";

    // Outer Loop = Number of Rows = n
    for(int i = 0 ; i < n ; i++) {
        // Inner Loop = Number of characters in each row = i + 1
        for(int j = i + 1 ; j > 0 ; j--) {
            cout << j << " " ; // Print the number
        }
        cout << endl ;
    }
    return 0 ;

}