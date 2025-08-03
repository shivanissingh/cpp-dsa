// Module 1 : P1 - SD3 :- while loop | for loop | do-while loop | Nested Loops | break
// Created by : Shivani Singh | linkedin.com/in/shivani-ssingh

#include <iostream>
using namespace std;

int main () {
    cout << "\n********** Module 1 : C++ Basics **********" << endl ;
    cout << "Created by : Shivani Singh | linkedin.com/in/shivani-ssingh" << endl ;
    cout << "__________________________________________________\n" << endl ;
    
    int userNum ;
    float userInput ;
    string userName ;
    int i , k ;
    int j=1 , l=0 ;
    cout << "\n********** Report for Google **********" << endl ;
    cout << "__________________________________________________\n" << endl ;

    cout << "Enter the Number of Users for whom you want to Conduct a Survey : " ;
    cin >> userNum ;

    cout << "\nSending Survey form to " << userNum << " Users of Google... \n" << endl ;
    cout << "__________________________________________________\n" << endl ;

    //for loop
    for (int i=1 ; i<=userNum ; i++) {
        cout << "User " << i << " :- \n"<< endl ;
        cout << "Enter Your Name : " ;
        cin >> userName ;
        
        //while loop
        while (j <= i) {
            
            cout << "\n* Please Enter the Number of Google Applications you Use out of the following List *" << endl ;
            cout << "\n1. Google Search \n2. Google Maps \n3. YouTube \n4. Gemini \n5. Google News \n6. Gmail \n7. Meet \n8. Google Chat \n9. Google Drive \n10. Google Play \n11. Google Docs \n12. Google Sheets \n13. Google Slides \n14. Google Classroom \n15. Google Keep \n " ;
            cout << "\nNumber of Applications you use : " ;
            cin >> userInput ;
            cout << "__________________________________________________\n" << endl ;
            float use = (userInput / 15 ) * 100 ;
            
            //do-while loop
            do {
       
                for (int k =1 ; k <= j ; k++) {
                    cout << "\n" << userName << " uses " << use << " % " << " of Google Applications " << endl ;
                    cout << "__________________________________________________\n" << endl ;
                    //break 
                    break ;
        
                }
        
            } while (l==j);
            j++ ;
            l++ ;
        }
        
    }
   
    return 0;
   
}

