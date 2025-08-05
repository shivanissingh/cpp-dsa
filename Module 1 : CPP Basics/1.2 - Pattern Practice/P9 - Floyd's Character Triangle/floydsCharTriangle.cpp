// Triangle Pattern 9 : Floyd's Character Triangle Pattern

#include <iostream>
using namespace std ;

int main () {
    // Define the Number or lines or rows
    int n = 10 ;
    char ch = 'A' ;

    cout << "\nFloyd's Triangle Pattern for Characters :\n";
    cout << "___________________________________________\n\n";

    // Outer Loop = Number of rows = n
    for(int i = 0 ; i < n ; i++) {

        // Inner Loop = Number of Characters in each row = i + 1
        for(int j = 0 ; j < i + 1 ; j++) {
            cout << ch << " " ;
            ch++ ;
        }
        cout << endl ;
    }
    return 0 ;
}