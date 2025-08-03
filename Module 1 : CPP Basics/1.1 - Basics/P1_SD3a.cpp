// Module 1 : P1 - SD3a :- if | else if | else | Ternary Statement 
// Created by : Shivani Singh | linkedin.com/in/shivani-ssingh

#include <iostream>
using namespace std;

int main () {
    cout << "\n********** Module 1 : P1 - SD3 ********** " << endl ;
    cout << "Creatded by : Shivani Singh | linkedin.com/in/shivani-ssingh" << endl ;
    cout << "____________________________________________" << endl ;

    // Gentle Reminder Game
    cout << "\n💻 Gentle Reminders For Coders 💻 " << endl ;
    cout << "____________________________________________" << endl ;

    int num ;
    cout << "\n* Choose any one number from the following * " << endl ;
    cout << "  1️⃣ , 3️⃣ , 5️⃣ , 7️⃣ , 9️⃣ " << endl ;
    cout << "\nEnter Number 😃 ➡ " ;
    cin >> num ;
    cout << "____________________________________________" << endl ;

    // Ternary Statement 
    cout << (num % 2 != 0 && num <= 9 ? "\nHere's the Quote for You to Keep Coding 😊" : "\nPlease Select a Valid Number" ) << endl ;

    // if | else if | else
    if (num == 1) {
        cout << "\n🌻 Bugs can be fixed, errors can be resolved—just like any challenge in life. Keep going! 🔥 🌻\n" << endl ;
    } else if (num == 3) {
        cout << "\n🌻 Every \"Syntax Error\" is just a step closer to Mastery. Trust the Process ! 💪 🌻\n" << endl ;
    } else if (num == 5) {
        cout << "\n🌻 Even the Best Programs Started as Blank Files. Start, Improve and Keep Building 🔥🔥 🌻\n" << endl ;
    } else if (num == 7) {
        cout << "\n🌻 You have Solved Harder Problems Before - This is just another Challenge waiting to be Cracked 💥💪 🌻\n" << endl ;
    } else if (num == 9) {
        cout << "\n🌻 You are stronger than your doubts, faster than your fears, and greater than your failures. Keep Coding 🔥🔥 🌻\n" << endl ;
    } else {
        cout << "Try Again 🙃\n" << endl ;
    }

    return 0;
}