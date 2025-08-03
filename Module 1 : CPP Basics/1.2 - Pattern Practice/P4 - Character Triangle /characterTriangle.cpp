// Triangle Patter 4 : Triangle of Characters

#include <iostream>
using namespace std;

int main() {
    int n = 4 ; // Number of Rows
    // Define 
    char ch = 'A'; // Starting Character
    cout << "\nTriangle of Characters Pattern:\n";
    cout << "_____________________________\n\n";

    for(int i = 0 ; i < n ; i++) {
        for(int j = 0 ; j < i + 1 ; j++){
            cout << ch << " ";
        }
        ch++ ;
        cout << endl ;
    }
    
}