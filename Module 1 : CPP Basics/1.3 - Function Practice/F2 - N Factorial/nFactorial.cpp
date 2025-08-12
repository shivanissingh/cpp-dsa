// Funciton Practice 2 - N Factorial

#include <iostream>
using namespace std;

int nFactorial(int n) {
    
    // Define starting value
    int fact = 1 ;

    for(int i = 1 ; i <=n ; i++) {

        // Multiply the factorial by the current number
        fact *= i ;
    }

    cout << "Factorial of " << n << " is " ;

    return fact ; // Return the factorial

}

int main() {
    cout << "\nFunction Practice 2 - N Factorial :\n";
    cout << "___________________________________________\n\n";

    // Invoke the nFactorial function
    nFactorial(5) ;

    return 0 ;
}