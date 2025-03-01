// s. trowbridge 2024
#include <iostream>
using namespace std;

int main() {
    cout << endl;

    int x = 1;                  // x must be 1 for the loop to run

                                // repeat as long as x == 1
    while( x == 1 ) {           //  condition   :   T       T       T       F (end loop)           
        cout << "Enter x: ";       
        cin >> x;               //  x           :   1       1       5       
    }

    cout << endl;
    return 0;
}