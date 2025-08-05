// Triangle Pattern 8 : Floyd's Triangle Pattern for Numbers

#include <iostream>
using namespace std;

int main() {

    // Define number of lines or rows
    int n = 10 ;

    // Define Starting Variable
    int num = 1;

    cout << "\nFloyd's Triangle Pattern for Numbers :\n";
    cout << "___________________________________________\n\n";

    // Outer Loop = Number of Rows = n
    for(int i = 0 ; i < n ; i++) {
        // Inner Loop = Number of characters to print in each Row = i+1
        for(int j = 0 ; j < i + 1 ; j++) {
            cout << num << " " ; // Print the number
            num++ ; // Increment the number
        }

        cout << endl ; // Move to the next line
    }
    return 0 ;
}