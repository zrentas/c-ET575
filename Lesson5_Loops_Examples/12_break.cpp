// s. trowbridge 2024
#include <iostream>
using namespace std;

int main() {
    cout << endl;
 
    int x = 0;

    while( true ) {             // infinite loop with a break to end loop on demand           
        cout << "Enter x: ";
        cin >> x;               //  x           :   -1      0       -8      20
        if( x >= 1) { break ;}  //  condition   :   F       F       F       T (end loop)
    }

    cout << endl;
    return 0;
}