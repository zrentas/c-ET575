// s. trowbridge 2024
#include <iostream>
using namespace std;

int main() {
    cout << endl;

    int x = 0;                                          // x determines if the loop will run

    while( x != 3 ) {                                   // while x != 3, keep repeating the menu
        cout << "1. Left" << endl;
        cout << "2. Right" << endl;
        cout << "3. Exit" << endl;
        cout << "\nSelect: ";
        cin >> x;

        switch(x) {                                     
            case 1:                                     // x == 1
                cout << "\nYou go left.\n\n";                       
                break;                                  
            case 2:                                     // x == 2
                cout << "\nYou go right.\n\n";
                break;                                  
            case 3:                                     // x == 3 (exit the game)
                break;                                  
            default:
                cout << "Invalid selection." << "\n";   // invalid input
        }
    }

    cout << "\nGame Over" << endl;

    cout << endl;
    return 0;
}