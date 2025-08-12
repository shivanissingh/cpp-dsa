// Function Practice 1 - Sum of 1 to N numbers

#include <iostream>
using namespace std;

// Function calculate Sum of 1 to N numbers
int ownApproach(int n) {

    cout << "#     Own Approach - Using Formula     #" << endl ;
    cout << "For n = " << n << " \n\n";
    
    // Calculate sum of 1 to n numbers
    int sum = (n * (n + 1)) / 2;

    return sum ;
}

int approach2(int n) {
    cout << "\n#     Approach 2 - Using Loop          #" << endl ;
    cout << "For n = " << n << " \n\n";

    // Define a variable to store sum
    int sum = 0 ;

    // Loop from 1 to n
    for(int i = 1 ; i <=n ; i++) {
        sum += i ;
    }

    return sum ;

}

int main() {

    cout << "\nFunction Practice 1 - Sum of 1 to N numbers :\n";
    cout << "___________________________________________\n\n";

    // Invoke Function with n=10
    cout << ownApproach(10) << endl ;
    cout << approach2(10) << endl ;


    return 0 ;
}