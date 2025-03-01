// s. trowbridge 2024
#include <iostream>
using namespace std;

int main() {
    cout << endl;

    int x, count = 0;                       // initialize count to 0   

    do {                                    // run once, repeat if x == 1
        cout << "Enter a value for x: ";
        cin >> x;                           //  x           :   1       1       1       6
        if(x == 1) { ++count; }             //  count       :   1       2       3       
    } while( x == 1 );                      //  condition   :   T       T       T       F (end loop)

    cout << "You entered 1 a total of " << count << " times." << "\n";

    cout << endl;
    return 0;
}