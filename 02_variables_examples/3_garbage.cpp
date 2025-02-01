// s. trowbridge 2024
#include <iostream>
using namespace std;

int main() {
    cout << endl;

    int i;                  // declare 

    cout << i << "\n";      // garbage value

    cout << (i+1) << "\n";  // garbage is usable and will cause logical errors

    int j = 10;             // always initalize values to avoid garbage related logical errors

    cout << j << "\n";

    cout << endl;
    return 0;
}

