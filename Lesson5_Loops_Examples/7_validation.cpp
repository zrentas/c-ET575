// s. trowbridge 2024
#include <iostream>
using namespace std;

int main() {
    cout << endl;

    int x = 0;

    while( !(x > 0) ) {                             // condition    :   T       T       T       F (end loop) 
        cout << "Enter a postive integer: ";           
        cin >> x;                                   //  x           :   -1      -5      2
    }

    cout << "\nValid! Program continues..." << "\n";    // x is validated as a positive value, the program continues

    cout << endl;
    return 0;
}