// s. trowbridge 2024
#include <iostream>
using namespace std;

int main() {
    cout << endl;

    int x = 2;                  // x must be 1 for the loop to run                 

    while( x == 1 ) {           // x != 1, loop will not run            
        cout << "Enter x: ";
        cin >> x;
    }

    cout << endl;
    return 0;
}