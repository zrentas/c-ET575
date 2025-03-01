// s. trowbridge 2024
#include <iostream>
using namespace std;

int main() {
    cout << endl;

    int x = 0;                  // the value of x does not determine if the loop runs


    do {                        // run once, repeat as long as x == 1                               
        cout << "Enter x: ";
        cin >> x;               //  x           :   1       1       5       
    } while( x == 1 );          //  condition   :   T       T       F (end loop)  

    cout << endl;
    return 0;
}