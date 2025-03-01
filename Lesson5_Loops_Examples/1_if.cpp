// s. trowbridge 2024
#include <iostream>
using namespace std;

int main() {
    cout << endl;

    int x = 1;                  // x must be 1 for the condition to run

                                // run once
    if( x == 1 ) {              // if x == 1, request a new value                   
        cout << "Enter x: ";
        cin >> x;
    }

    cout << endl;
    return 0;
}